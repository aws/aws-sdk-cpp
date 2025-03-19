/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/MetadataValue.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class UpdateOpsMetadataRequest : public SSMRequest
  {
  public:
    AWS_SSM_API UpdateOpsMetadataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOpsMetadata"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object to update.</p>
     */
    inline const Aws::String& GetOpsMetadataArn() const { return m_opsMetadataArn; }
    inline bool OpsMetadataArnHasBeenSet() const { return m_opsMetadataArnHasBeenSet; }
    template<typename OpsMetadataArnT = Aws::String>
    void SetOpsMetadataArn(OpsMetadataArnT&& value) { m_opsMetadataArnHasBeenSet = true; m_opsMetadataArn = std::forward<OpsMetadataArnT>(value); }
    template<typename OpsMetadataArnT = Aws::String>
    UpdateOpsMetadataRequest& WithOpsMetadataArn(OpsMetadataArnT&& value) { SetOpsMetadataArn(std::forward<OpsMetadataArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata to add to an OpsMetadata object.</p>
     */
    inline const Aws::Map<Aws::String, MetadataValue>& GetMetadataToUpdate() const { return m_metadataToUpdate; }
    inline bool MetadataToUpdateHasBeenSet() const { return m_metadataToUpdateHasBeenSet; }
    template<typename MetadataToUpdateT = Aws::Map<Aws::String, MetadataValue>>
    void SetMetadataToUpdate(MetadataToUpdateT&& value) { m_metadataToUpdateHasBeenSet = true; m_metadataToUpdate = std::forward<MetadataToUpdateT>(value); }
    template<typename MetadataToUpdateT = Aws::Map<Aws::String, MetadataValue>>
    UpdateOpsMetadataRequest& WithMetadataToUpdate(MetadataToUpdateT&& value) { SetMetadataToUpdate(std::forward<MetadataToUpdateT>(value)); return *this;}
    template<typename MetadataToUpdateKeyT = Aws::String, typename MetadataToUpdateValueT = MetadataValue>
    UpdateOpsMetadataRequest& AddMetadataToUpdate(MetadataToUpdateKeyT&& key, MetadataToUpdateValueT&& value) {
      m_metadataToUpdateHasBeenSet = true; m_metadataToUpdate.emplace(std::forward<MetadataToUpdateKeyT>(key), std::forward<MetadataToUpdateValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The metadata keys to delete from the OpsMetadata object. </p>
     */
    inline const Aws::Vector<Aws::String>& GetKeysToDelete() const { return m_keysToDelete; }
    inline bool KeysToDeleteHasBeenSet() const { return m_keysToDeleteHasBeenSet; }
    template<typename KeysToDeleteT = Aws::Vector<Aws::String>>
    void SetKeysToDelete(KeysToDeleteT&& value) { m_keysToDeleteHasBeenSet = true; m_keysToDelete = std::forward<KeysToDeleteT>(value); }
    template<typename KeysToDeleteT = Aws::Vector<Aws::String>>
    UpdateOpsMetadataRequest& WithKeysToDelete(KeysToDeleteT&& value) { SetKeysToDelete(std::forward<KeysToDeleteT>(value)); return *this;}
    template<typename KeysToDeleteT = Aws::String>
    UpdateOpsMetadataRequest& AddKeysToDelete(KeysToDeleteT&& value) { m_keysToDeleteHasBeenSet = true; m_keysToDelete.emplace_back(std::forward<KeysToDeleteT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_opsMetadataArn;
    bool m_opsMetadataArnHasBeenSet = false;

    Aws::Map<Aws::String, MetadataValue> m_metadataToUpdate;
    bool m_metadataToUpdateHasBeenSet = false;

    Aws::Vector<Aws::String> m_keysToDelete;
    bool m_keysToDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
