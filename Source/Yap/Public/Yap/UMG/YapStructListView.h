// Copyright Ghost Pepper Games, Inc. All Rights Reserved.
// This work is MIT-licensed. Feel free to use it however you wish, within the confines of the MIT license. 

#pragma once

#include "Components/ListViewBase.h"

#include "YapStructListView.generated.h"

struct FYapMessageEntry;

UCLASS(meta = (EntryInterface = "/Script/Yap.YapSpeechListEntry"), MinimalAPI)
class UYapStructListView : public UListViewBase//, public ITypedUMGListView<TSharedPtr<FYapMessageEntry>>
{
    GENERATED_BODY()

//    IMPLEMENT_TYPED_UMG_LIST(TSharedPtr<FYapMessageEntry>, MyListView)

public:
    //UYapStructListView();
    
    //TSharedPtr<SListView<FYapMessageEntry*>> MyListView;
};
