/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/PartnerAppType.h>
#include <aws/sagemaker/model/PartnerAppMaintenanceConfig.h>
#include <aws/sagemaker/model/PartnerAppConfig.h>
#include <aws/sagemaker/model/PartnerAppAuthType.h>
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
  class CreatePartnerAppRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreatePartnerAppRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePartnerApp"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name to give the SageMaker Partner AI App.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreatePartnerAppRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreatePartnerAppRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreatePartnerAppRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of SageMaker Partner AI App to create. Must be one of the following:
     * <code>lakera-guard</code>, <code>comet</code>,
     * <code>deepchecks-llm-evaluation</code>, or <code>fiddler</code>.</p>
     */
    inline const PartnerAppType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PartnerAppType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PartnerAppType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreatePartnerAppRequest& WithType(const PartnerAppType& value) { SetType(value); return *this;}
    inline CreatePartnerAppRequest& WithType(PartnerAppType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that the partner application uses.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }
    inline CreatePartnerAppRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline CreatePartnerAppRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline CreatePartnerAppRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maintenance configuration settings for the SageMaker Partner AI App.</p>
     */
    inline const PartnerAppMaintenanceConfig& GetMaintenanceConfig() const{ return m_maintenanceConfig; }
    inline bool MaintenanceConfigHasBeenSet() const { return m_maintenanceConfigHasBeenSet; }
    inline void SetMaintenanceConfig(const PartnerAppMaintenanceConfig& value) { m_maintenanceConfigHasBeenSet = true; m_maintenanceConfig = value; }
    inline void SetMaintenanceConfig(PartnerAppMaintenanceConfig&& value) { m_maintenanceConfigHasBeenSet = true; m_maintenanceConfig = std::move(value); }
    inline CreatePartnerAppRequest& WithMaintenanceConfig(const PartnerAppMaintenanceConfig& value) { SetMaintenanceConfig(value); return *this;}
    inline CreatePartnerAppRequest& WithMaintenanceConfig(PartnerAppMaintenanceConfig&& value) { SetMaintenanceConfig(std::move(value)); return *this;}
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
    inline CreatePartnerAppRequest& WithTier(const Aws::String& value) { SetTier(value); return *this;}
    inline CreatePartnerAppRequest& WithTier(Aws::String&& value) { SetTier(std::move(value)); return *this;}
    inline CreatePartnerAppRequest& WithTier(const char* value) { SetTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for the SageMaker Partner AI App.</p>
     */
    inline const PartnerAppConfig& GetApplicationConfig() const{ return m_applicationConfig; }
    inline bool ApplicationConfigHasBeenSet() const { return m_applicationConfigHasBeenSet; }
    inline void SetApplicationConfig(const PartnerAppConfig& value) { m_applicationConfigHasBeenSet = true; m_applicationConfig = value; }
    inline void SetApplicationConfig(PartnerAppConfig&& value) { m_applicationConfigHasBeenSet = true; m_applicationConfig = std::move(value); }
    inline CreatePartnerAppRequest& WithApplicationConfig(const PartnerAppConfig& value) { SetApplicationConfig(value); return *this;}
    inline CreatePartnerAppRequest& WithApplicationConfig(PartnerAppConfig&& value) { SetApplicationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization type that users use to access the SageMaker Partner AI
     * App.</p>
     */
    inline const PartnerAppAuthType& GetAuthType() const{ return m_authType; }
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
    inline void SetAuthType(const PartnerAppAuthType& value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline void SetAuthType(PartnerAppAuthType&& value) { m_authTypeHasBeenSet = true; m_authType = std::move(value); }
    inline CreatePartnerAppRequest& WithAuthType(const PartnerAppAuthType& value) { SetAuthType(value); return *this;}
    inline CreatePartnerAppRequest& WithAuthType(PartnerAppAuthType&& value) { SetAuthType(std::move(value)); return *this;}
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
    inline CreatePartnerAppRequest& WithEnableIamSessionBasedIdentity(bool value) { SetEnableIamSessionBasedIdentity(value); return *this;}
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
    inline CreatePartnerAppRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreatePartnerAppRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreatePartnerAppRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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
    inline CreatePartnerAppRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreatePartnerAppRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreatePartnerAppRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreatePartnerAppRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PartnerAppType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    PartnerAppMaintenanceConfig m_maintenanceConfig;
    bool m_maintenanceConfigHasBeenSet = false;

    Aws::String m_tier;
    bool m_tierHasBeenSet = false;

    PartnerAppConfig m_applicationConfig;
    bool m_applicationConfigHasBeenSet = false;

    PartnerAppAuthType m_authType;
    bool m_authTypeHasBeenSet = false;

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
