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
    AWS_TNB_API UpdateSolNetworkInstanceRequest();

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
    inline const UpdateSolNetworkModify& GetModifyVnfInfoData() const{ return m_modifyVnfInfoData; }
    inline bool ModifyVnfInfoDataHasBeenSet() const { return m_modifyVnfInfoDataHasBeenSet; }
    inline void SetModifyVnfInfoData(const UpdateSolNetworkModify& value) { m_modifyVnfInfoDataHasBeenSet = true; m_modifyVnfInfoData = value; }
    inline void SetModifyVnfInfoData(UpdateSolNetworkModify&& value) { m_modifyVnfInfoDataHasBeenSet = true; m_modifyVnfInfoData = std::move(value); }
    inline UpdateSolNetworkInstanceRequest& WithModifyVnfInfoData(const UpdateSolNetworkModify& value) { SetModifyVnfInfoData(value); return *this;}
    inline UpdateSolNetworkInstanceRequest& WithModifyVnfInfoData(UpdateSolNetworkModify&& value) { SetModifyVnfInfoData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the network instance.</p>
     */
    inline const Aws::String& GetNsInstanceId() const{ return m_nsInstanceId; }
    inline bool NsInstanceIdHasBeenSet() const { return m_nsInstanceIdHasBeenSet; }
    inline void SetNsInstanceId(const Aws::String& value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId = value; }
    inline void SetNsInstanceId(Aws::String&& value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId = std::move(value); }
    inline void SetNsInstanceId(const char* value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId.assign(value); }
    inline UpdateSolNetworkInstanceRequest& WithNsInstanceId(const Aws::String& value) { SetNsInstanceId(value); return *this;}
    inline UpdateSolNetworkInstanceRequest& WithNsInstanceId(Aws::String&& value) { SetNsInstanceId(std::move(value)); return *this;}
    inline UpdateSolNetworkInstanceRequest& WithNsInstanceId(const char* value) { SetNsInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. When you use this API, the tags are
     * only applied to the network operation that is created. These tags are not
     * applied to the network instance. Use tags to search and filter your resources or
     * track your Amazon Web Services costs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline UpdateSolNetworkInstanceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline UpdateSolNetworkInstanceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdateSolNetworkInstanceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline UpdateSolNetworkInstanceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateSolNetworkInstanceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateSolNetworkInstanceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateSolNetworkInstanceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateSolNetworkInstanceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateSolNetworkInstanceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the network service descriptor and the configurable properties of
     * the descriptor, to be used for the update.</p> <p>Include this property only if
     * the update type is <code>UPDATE_NS</code>.</p>
     */
    inline const UpdateSolNetworkServiceData& GetUpdateNs() const{ return m_updateNs; }
    inline bool UpdateNsHasBeenSet() const { return m_updateNsHasBeenSet; }
    inline void SetUpdateNs(const UpdateSolNetworkServiceData& value) { m_updateNsHasBeenSet = true; m_updateNs = value; }
    inline void SetUpdateNs(UpdateSolNetworkServiceData&& value) { m_updateNsHasBeenSet = true; m_updateNs = std::move(value); }
    inline UpdateSolNetworkInstanceRequest& WithUpdateNs(const UpdateSolNetworkServiceData& value) { SetUpdateNs(value); return *this;}
    inline UpdateSolNetworkInstanceRequest& WithUpdateNs(UpdateSolNetworkServiceData&& value) { SetUpdateNs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of update.</p> <ul> <li> <p>Use the
     * <code>MODIFY_VNF_INFORMATION</code> update type, to update a specific network
     * function configuration, in the network instance.</p> </li> <li> <p>Use the
     * <code>UPDATE_NS</code> update type, to update the network instance to a new
     * network service descriptor.</p> </li> </ul>
     */
    inline const UpdateSolNetworkType& GetUpdateType() const{ return m_updateType; }
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }
    inline void SetUpdateType(const UpdateSolNetworkType& value) { m_updateTypeHasBeenSet = true; m_updateType = value; }
    inline void SetUpdateType(UpdateSolNetworkType&& value) { m_updateTypeHasBeenSet = true; m_updateType = std::move(value); }
    inline UpdateSolNetworkInstanceRequest& WithUpdateType(const UpdateSolNetworkType& value) { SetUpdateType(value); return *this;}
    inline UpdateSolNetworkInstanceRequest& WithUpdateType(UpdateSolNetworkType&& value) { SetUpdateType(std::move(value)); return *this;}
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

    UpdateSolNetworkType m_updateType;
    bool m_updateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
