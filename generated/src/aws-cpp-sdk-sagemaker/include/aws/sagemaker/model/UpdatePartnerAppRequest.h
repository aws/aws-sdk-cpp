/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/PartnerAppMaintenanceConfig.h>
#include <aws/sagemaker/model/PartnerAppConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdatePartnerAppRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdatePartnerAppRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePartnerApp"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the SageMaker Partner AI App to update.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdatePartnerAppRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maintenance configuration settings for the SageMaker Partner AI App.</p>
     */
    inline const PartnerAppMaintenanceConfig& GetMaintenanceConfig() const { return m_maintenanceConfig; }
    inline bool MaintenanceConfigHasBeenSet() const { return m_maintenanceConfigHasBeenSet; }
    template<typename MaintenanceConfigT = PartnerAppMaintenanceConfig>
    void SetMaintenanceConfig(MaintenanceConfigT&& value) { m_maintenanceConfigHasBeenSet = true; m_maintenanceConfig = std::forward<MaintenanceConfigT>(value); }
    template<typename MaintenanceConfigT = PartnerAppMaintenanceConfig>
    UpdatePartnerAppRequest& WithMaintenanceConfig(MaintenanceConfigT&& value) { SetMaintenanceConfig(std::forward<MaintenanceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the instance type and size of the cluster attached to the SageMaker
     * Partner AI App.</p>
     */
    inline const Aws::String& GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    template<typename TierT = Aws::String>
    void SetTier(TierT&& value) { m_tierHasBeenSet = true; m_tier = std::forward<TierT>(value); }
    template<typename TierT = Aws::String>
    UpdatePartnerAppRequest& WithTier(TierT&& value) { SetTier(std::forward<TierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for the SageMaker Partner AI App.</p>
     */
    inline const PartnerAppConfig& GetApplicationConfig() const { return m_applicationConfig; }
    inline bool ApplicationConfigHasBeenSet() const { return m_applicationConfigHasBeenSet; }
    template<typename ApplicationConfigT = PartnerAppConfig>
    void SetApplicationConfig(ApplicationConfigT&& value) { m_applicationConfigHasBeenSet = true; m_applicationConfig = std::forward<ApplicationConfigT>(value); }
    template<typename ApplicationConfigT = PartnerAppConfig>
    UpdatePartnerAppRequest& WithApplicationConfig(ApplicationConfigT&& value) { SetApplicationConfig(std::forward<ApplicationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>TRUE</code>, the SageMaker Partner AI App sets the Amazon
     * Web Services IAM session name or the authenticated IAM user as the identity of
     * the SageMaker Partner AI App user.</p>
     */
    inline bool GetEnableIamSessionBasedIdentity() const { return m_enableIamSessionBasedIdentity; }
    inline bool EnableIamSessionBasedIdentityHasBeenSet() const { return m_enableIamSessionBasedIdentityHasBeenSet; }
    inline void SetEnableIamSessionBasedIdentity(bool value) { m_enableIamSessionBasedIdentityHasBeenSet = true; m_enableIamSessionBasedIdentity = value; }
    inline UpdatePartnerAppRequest& WithEnableIamSessionBasedIdentity(bool value) { SetEnableIamSessionBasedIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdatePartnerAppRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    UpdatePartnerAppRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    UpdatePartnerAppRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    PartnerAppMaintenanceConfig m_maintenanceConfig;
    bool m_maintenanceConfigHasBeenSet = false;

    Aws::String m_tier;
    bool m_tierHasBeenSet = false;

    PartnerAppConfig m_applicationConfig;
    bool m_applicationConfigHasBeenSet = false;

    bool m_enableIamSessionBasedIdentity{false};
    bool m_enableIamSessionBasedIdentityHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
