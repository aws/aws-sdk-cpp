/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/ListSolNetworkInstanceMetadata.h>
#include <aws/tnb/model/NsState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace tnb
{
namespace Model
{

  /**
   * <p>Info about the specific network instance.</p> <p>A network instance is a
   * single network created in Amazon Web Services TNB that can be deployed and on
   * which life-cycle operations (like terminate, update, and delete) can be
   * performed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ListSolNetworkInstanceInfo">AWS
   * API Reference</a></p>
   */
  class ListSolNetworkInstanceInfo
  {
  public:
    AWS_TNB_API ListSolNetworkInstanceInfo() = default;
    AWS_TNB_API ListSolNetworkInstanceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API ListSolNetworkInstanceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Network instance ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ListSolNetworkInstanceInfo& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the network instance.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ListSolNetworkInstanceInfo& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the network instance.</p>
     */
    inline const ListSolNetworkInstanceMetadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = ListSolNetworkInstanceMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = ListSolNetworkInstanceMetadata>
    ListSolNetworkInstanceInfo& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Human-readable description of the network instance.</p>
     */
    inline const Aws::String& GetNsInstanceDescription() const { return m_nsInstanceDescription; }
    inline bool NsInstanceDescriptionHasBeenSet() const { return m_nsInstanceDescriptionHasBeenSet; }
    template<typename NsInstanceDescriptionT = Aws::String>
    void SetNsInstanceDescription(NsInstanceDescriptionT&& value) { m_nsInstanceDescriptionHasBeenSet = true; m_nsInstanceDescription = std::forward<NsInstanceDescriptionT>(value); }
    template<typename NsInstanceDescriptionT = Aws::String>
    ListSolNetworkInstanceInfo& WithNsInstanceDescription(NsInstanceDescriptionT&& value) { SetNsInstanceDescription(std::forward<NsInstanceDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Human-readable name of the network instance.</p>
     */
    inline const Aws::String& GetNsInstanceName() const { return m_nsInstanceName; }
    inline bool NsInstanceNameHasBeenSet() const { return m_nsInstanceNameHasBeenSet; }
    template<typename NsInstanceNameT = Aws::String>
    void SetNsInstanceName(NsInstanceNameT&& value) { m_nsInstanceNameHasBeenSet = true; m_nsInstanceName = std::forward<NsInstanceNameT>(value); }
    template<typename NsInstanceNameT = Aws::String>
    ListSolNetworkInstanceInfo& WithNsInstanceName(NsInstanceNameT&& value) { SetNsInstanceName(std::forward<NsInstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the network instance.</p>
     */
    inline NsState GetNsState() const { return m_nsState; }
    inline bool NsStateHasBeenSet() const { return m_nsStateHasBeenSet; }
    inline void SetNsState(NsState value) { m_nsStateHasBeenSet = true; m_nsState = value; }
    inline ListSolNetworkInstanceInfo& WithNsState(NsState value) { SetNsState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline const Aws::String& GetNsdId() const { return m_nsdId; }
    inline bool NsdIdHasBeenSet() const { return m_nsdIdHasBeenSet; }
    template<typename NsdIdT = Aws::String>
    void SetNsdId(NsdIdT&& value) { m_nsdIdHasBeenSet = true; m_nsdId = std::forward<NsdIdT>(value); }
    template<typename NsdIdT = Aws::String>
    ListSolNetworkInstanceInfo& WithNsdId(NsdIdT&& value) { SetNsdId(std::forward<NsdIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the network service descriptor in the network package.</p>
     */
    inline const Aws::String& GetNsdInfoId() const { return m_nsdInfoId; }
    inline bool NsdInfoIdHasBeenSet() const { return m_nsdInfoIdHasBeenSet; }
    template<typename NsdInfoIdT = Aws::String>
    void SetNsdInfoId(NsdInfoIdT&& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = std::forward<NsdInfoIdT>(value); }
    template<typename NsdInfoIdT = Aws::String>
    ListSolNetworkInstanceInfo& WithNsdInfoId(NsdInfoIdT&& value) { SetNsdInfoId(std::forward<NsdInfoIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ListSolNetworkInstanceMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_nsInstanceDescription;
    bool m_nsInstanceDescriptionHasBeenSet = false;

    Aws::String m_nsInstanceName;
    bool m_nsInstanceNameHasBeenSet = false;

    NsState m_nsState{NsState::NOT_SET};
    bool m_nsStateHasBeenSet = false;

    Aws::String m_nsdId;
    bool m_nsdIdHasBeenSet = false;

    Aws::String m_nsdInfoId;
    bool m_nsdInfoIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
