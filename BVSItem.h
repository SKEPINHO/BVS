#pragma once
struct BVSItem
{
	BVSItem();
	~BVSItem();

	int mHodnota;
	BVSItem* mLevy;
	BVSItem* mPravy;
};

