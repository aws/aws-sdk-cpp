/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/TnbRequest.h>
#include <aws/tnb/model/UpdateSolNetworkModify.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/tnb/model/UpdateSolNetworkServiceData.h>
#include <aws/tnb/model/UpdateSolNetworkType.h>
#include <utility>

namespace Aws
{
namespace tnb
{
namespace Model
{

  /**
   */
  class UpdateSolNetworkInstanceRequest : public TnbRequest
  {
  public:
    AWS_TNB_API UpdateSolNetworkInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSolNetworkInstance"; }

    AWS_TNB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Identifies the network function information parameters and/or the
     * configurable properties of the network function to be modified.</p> <p>Include
     * this property only if the update type is
     * <code>MODIFY_VNF_INFORMATION</code>.</p>
     */
    inline const UpdateSolNetworkModify& GetModifyVnfInfoData() const { return m_modifyVnfInfoData; }
    inline bool ModifyVnfInfoDataHasBeenSet() const { return m_modifyVnfInfoDataHasBeenSet; }
    template<typename ModifyVnfInfoDataT = UpdateSolNetworkModify>
    void SetModifyVnfInfoData(ModifyVnfInfoDataT&& value) { m_modifyVnfInfoDataHasBeenSet = true; m_modifyVnfInfoData = std::forward<ModifyVnfInfoDataT>(value); }
    template<typename ModifyVnfInfoDataT = UpdateSolNetworkModify>
    UpdateSolNetworkInstanceRequest& WithModifyVnfInfoData(ModifyVnfInfoDataT&& value) { SetModifyVnfInfoData(std::forward<ModifyVnfInfoDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the network instance.</p>
     */
    inline const Aws::String& GetNsInstanceId() const { return m_nsInstanceId; }
    inline bool NsInstanceIdHasBeenSet() const { return m_nsInstanceIdHasBeenSet; }
    template<typename NsInstanceIdT = Aws::String>
    void SetNsInstanceId(NsInstanceIdT&& value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId = std::forward<NsInstanceIdT>(value); }
    template<typename NsInstanceIdT = Aws::String>
    UpdateSolNetworkInstanceRequest& WithNsInstanceId(NsInstanceIdT&& value) { SetNsInstanceId(std::forward<NsInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. When you use this API, the tags are
     * only applied to the network operation that is created. These tags are not
     * applied to the network instance. Use tags to search and filter your resources or
     * track your Amazon Web Services costs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    UpdateSolNetworkInstanceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    UpdateSolNetworkInstanceRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Identifies the network service descriptor and the configurable properties of
     * the descriptor, to be used for the update.</p> <p>Include this property only if
     * the update type is <code>UPDATE_NS</code>.</p>
     */
    inline const UpdateSolNetworkServiceData& GetUpdateNs() const { return m_updateNs; }
    inline bool UpdateNsHasBeenSet() const { return m_updateNsHasBeenSet; }
    template<typename UpdateNsT = UpdateSolNetworkServiceData>
    void SetUpdateNs(UpdateNsT&& value) { m_updateNsHasBeenSet = true; m_updateNs = std::forward<UpdateNsT>(value); }
    template<typename UpdateNsT = UpdateSolNetworkServiceData>
    UpdateSolNetworkInstanceRequest& WithUpdateNs(UpdateNsT&& value) { SetUpdateNs(std::forward<UpdateNsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of update.</p> <ul> <li> <p>Use the
     * <code>MODIFY_VNF_INFORMATION</code> update type, to update a specific network
     * function configuration, in the network instance.</p> </li> <li> <p>Use the
     * <code>UPDATE_NS</code> update type, to update the network instance to a new
     * network service descriptor.</p> </li> </ul>
     */
    inline UpdateSolNetworkType GetUpdateType() const { return m_updateType; }
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }
    inline void SetUpdateType(UpdateSolNetworkType value) { m_updateTypeHasBeenSet = true; m_updateType = value; }
    inline UpdateSolNetworkInstanceRequest& WithUpdateType(UpdateSolNetworkType value) { SetUpdateType(value); return *this;}
    ///@}
  private:

    UpdateSolNetworkModify m_modifyVnfInfoData;
    bool m_modifyVnfInfoDataHasBeenSet = false;

    Aws::String m_nsInstanceId;
    bool m_nsInstanceIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    UpdateSolNetworkServiceData m_updateNs;
    bool m_updateNsHasBeenSet = false;

    UpdateSolNetworkType m_updateType{UpdateSolNetworkType::NOT_SET};
    bool m_updateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
