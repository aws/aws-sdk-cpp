﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/StorageLensConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/StorageLensTag.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class PutStorageLensConfigurationRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API PutStorageLensConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutStorageLensConfiguration"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The ID of the S3 Storage Lens configuration.</p>
     */
    inline const Aws::String& GetConfigId() const { return m_configId; }
    inline bool ConfigIdHasBeenSet() const { return m_configIdHasBeenSet; }
    template<typename ConfigIdT = Aws::String>
    void SetConfigId(ConfigIdT&& value) { m_configIdHasBeenSet = true; m_configId = std::forward<ConfigIdT>(value); }
    template<typename ConfigIdT = Aws::String>
    PutStorageLensConfigurationRequest& WithConfigId(ConfigIdT&& value) { SetConfigId(std::forward<ConfigIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the requester.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    PutStorageLensConfigurationRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 Storage Lens configuration.</p>
     */
    inline const StorageLensConfiguration& GetStorageLensConfiguration() const { return m_storageLensConfiguration; }
    inline bool StorageLensConfigurationHasBeenSet() const { return m_storageLensConfigurationHasBeenSet; }
    template<typename StorageLensConfigurationT = StorageLensConfiguration>
    void SetStorageLensConfiguration(StorageLensConfigurationT&& value) { m_storageLensConfigurationHasBeenSet = true; m_storageLensConfiguration = std::forward<StorageLensConfigurationT>(value); }
    template<typename StorageLensConfigurationT = StorageLensConfiguration>
    PutStorageLensConfigurationRequest& WithStorageLensConfiguration(StorageLensConfigurationT&& value) { SetStorageLensConfiguration(std::forward<StorageLensConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag set of the S3 Storage Lens configuration.</p>  <p>You can set
     * up to a maximum of 50 tags.</p> 
     */
    inline const Aws::Vector<StorageLensTag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<StorageLensTag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<StorageLensTag>>
    PutStorageLensConfigurationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = StorageLensTag>
    PutStorageLensConfigurationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_configId;
    bool m_configIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    StorageLensConfiguration m_storageLensConfiguration;
    bool m_storageLensConfigurationHasBeenSet = false;

    Aws::Vector<StorageLensTag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
