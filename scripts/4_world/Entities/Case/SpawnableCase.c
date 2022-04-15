class SpawnableCase_Base extends Container_Base
{
	protected bool m_looted;

	void SpawnableCase_Base()
	{
		//GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( GetGame().ObjectDelete, 10000, false, this ); // uncomment to force clean up
		m_looted = false;
	}
	
	void ~SpawnableCase_Base()
	{
		
	}

	override void EECargoOut(EntityAI item)
	{
		super.EECargoOut(item);
		SetLooted( true ); // set looted  
	}

	void SetLooted(bool value)
	{
		m_looted = value;
		SetSynchDirty();
		//GetGame().ObjectDelete(this);
	}

	void RefreshLoot()
	{
		GetGame().ObjectDelete(this);
	}

	bool Looted() 
	{
		return m_looted;
	}

	override bool CanPutIntoHands( EntityAI parent )
	{
		return false;
	}

	override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}

	override void SetActions()
    {
        super.SetActions();
        
    }
}
