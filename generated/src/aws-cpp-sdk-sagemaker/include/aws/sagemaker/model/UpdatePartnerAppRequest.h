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
    AWS_SAGEMAKER_API UpdatePartnerAppRequest();

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
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline UpdatePartnerAppRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdatePartnerAppRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdatePartnerAppRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maintenance configuration settings for the SageMaker Partner AI App.</p>
     */
    inline const PartnerAppMaintenanceConfig& GetMaintenanceConfig() const{ return m_maintenanceConfig; }
    inline bool MaintenanceConfigHasBeenSet() const { return m_maintenanceConfigHasBeenSet; }
    inline void SetMaintenanceConfig(const PartnerAppMaintenanceConfig& value) { m_maintenanceConfigHasBeenSet = true; m_maintenanceConfig = value; }
    inline void SetMaintenanceConfig(PartnerAppMaintenanceConfig&& value) { m_maintenanceConfigHasBeenSet = true; m_maintenanceConfig = std::move(value); }
    inline UpdatePartnerAppRequest& WithMaintenanceConfig(const PartnerAppMaintenanceConfig& value) { SetMaintenanceConfig(value); return *this;}
    inline UpdatePartnerAppRequest& WithMaintenanceConfig(PartnerAppMaintenanceConfig&& value) { SetMaintenanceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the instance type and size of the cluster attached to the SageMaker
     * Partner AI App.</p>
     */
    inline const Aws::String& GetTier() const{ return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(const Aws::String& value) { m_tierHasBeenSet = true; m_tier = value; }
    inline void SetTier(Aws::String&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }
    inline void SetTier(const char* value) { m_tierHasBeenSet = true; m_tier.assign(value); }
    inline UpdatePartnerAppRequest& WithTier(const Aws::String& value) { SetTier(value); return *this;}
    inline UpdatePartnerAppRequest& WithTier(Aws::String&& value) { SetTier(std::move(value)); return *this;}
    inline UpdatePartnerAppRequest& WithTier(const char* value) { SetTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for the SageMaker Partner AI App.</p>
     */
    inline const PartnerAppConfig& GetApplicationConfig() const{ return m_applicationConfig; }
    inline bool ApplicationConfigHasBeenSet() const { return m_applicationConfigHasBeenSet; }
    inline void SetApplicationConfig(const PartnerAppConfig& value) { m_applicationConfigHasBeenSet = true; m_applicationConfig = value; }
    inline void SetApplicationConfig(PartnerAppConfig&& value) { m_applicationConfigHasBeenSet = true; m_applicationConfig = std::move(value); }
    inline UpdatePartnerAppRequest& WithApplicationConfig(const PartnerAppConfig& value) { SetApplicationConfig(value); return *this;}
    inline UpdatePartnerAppRequest& WithApplicationConfig(PartnerAppConfig&& value) { SetApplicationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>TRUE</code>, the SageMaker Partner AI App sets the Amazon
     * Web Services IAM session name or the authenticated IAM user as the identity of
     * the SageMaker Partner AI App user.</p>
     */
    inline bool GetEnableIamSessionBasedIdentity() const{ return m_enableIamSessionBasedIdentity; }
    inline bool EnableIamSessionBasedIdentityHasBeenSet() const { return m_enableIamSessionBasedIdentityHasBeenSet; }
    inline void SetEnableIamSessionBasedIdentity(bool value) { m_enableIamSessionBasedIdentityHasBeenSet = true; m_enableIamSessionBasedIdentity = value; }
    inline UpdatePartnerAppRequest& WithEnableIamSessionBasedIdentity(bool value) { SetEnableIamSessionBasedIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdatePartnerAppRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdatePartnerAppRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdatePartnerAppRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each tag consists of a key and an optional value. Tag keys must be unique per
     * resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline UpdatePartnerAppRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline UpdatePartnerAppRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdatePartnerAppRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline UpdatePartnerAppRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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

    bool m_enableIamSessionBasedIdentity;
    bool m_enableIamSessionBasedIdentityHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
