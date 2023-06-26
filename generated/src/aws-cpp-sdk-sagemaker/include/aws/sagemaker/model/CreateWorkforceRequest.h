/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/model/CognitoConfig.h>
#include <aws/sagemaker/model/OidcConfig.h>
#include <aws/sagemaker/model/SourceIpConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/WorkforceVpcConfigRequest.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateWorkforceRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateWorkforceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkforce"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Use this parameter to configure an Amazon Cognito private workforce. A single
     * Cognito workforce is created using and corresponds to a single <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">
     * Amazon Cognito user pool</a>.</p> <p>Do not use <code>OidcConfig</code> if you
     * specify values for <code>CognitoConfig</code>.</p>
     */
    inline const CognitoConfig& GetCognitoConfig() const{ return m_cognitoConfig; }

    /**
     * <p>Use this parameter to configure an Amazon Cognito private workforce. A single
     * Cognito workforce is created using and corresponds to a single <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">
     * Amazon Cognito user pool</a>.</p> <p>Do not use <code>OidcConfig</code> if you
     * specify values for <code>CognitoConfig</code>.</p>
     */
    inline bool CognitoConfigHasBeenSet() const { return m_cognitoConfigHasBeenSet; }

    /**
     * <p>Use this parameter to configure an Amazon Cognito private workforce. A single
     * Cognito workforce is created using and corresponds to a single <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">
     * Amazon Cognito user pool</a>.</p> <p>Do not use <code>OidcConfig</code> if you
     * specify values for <code>CognitoConfig</code>.</p>
     */
    inline void SetCognitoConfig(const CognitoConfig& value) { m_cognitoConfigHasBeenSet = true; m_cognitoConfig = value; }

    /**
     * <p>Use this parameter to configure an Amazon Cognito private workforce. A single
     * Cognito workforce is created using and corresponds to a single <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">
     * Amazon Cognito user pool</a>.</p> <p>Do not use <code>OidcConfig</code> if you
     * specify values for <code>CognitoConfig</code>.</p>
     */
    inline void SetCognitoConfig(CognitoConfig&& value) { m_cognitoConfigHasBeenSet = true; m_cognitoConfig = std::move(value); }

    /**
     * <p>Use this parameter to configure an Amazon Cognito private workforce. A single
     * Cognito workforce is created using and corresponds to a single <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">
     * Amazon Cognito user pool</a>.</p> <p>Do not use <code>OidcConfig</code> if you
     * specify values for <code>CognitoConfig</code>.</p>
     */
    inline CreateWorkforceRequest& WithCognitoConfig(const CognitoConfig& value) { SetCognitoConfig(value); return *this;}

    /**
     * <p>Use this parameter to configure an Amazon Cognito private workforce. A single
     * Cognito workforce is created using and corresponds to a single <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">
     * Amazon Cognito user pool</a>.</p> <p>Do not use <code>OidcConfig</code> if you
     * specify values for <code>CognitoConfig</code>.</p>
     */
    inline CreateWorkforceRequest& WithCognitoConfig(CognitoConfig&& value) { SetCognitoConfig(std::move(value)); return *this;}


    /**
     * <p>Use this parameter to configure a private workforce using your own OIDC
     * Identity Provider.</p> <p>Do not use <code>CognitoConfig</code> if you specify
     * values for <code>OidcConfig</code>.</p>
     */
    inline const OidcConfig& GetOidcConfig() const{ return m_oidcConfig; }

    /**
     * <p>Use this parameter to configure a private workforce using your own OIDC
     * Identity Provider.</p> <p>Do not use <code>CognitoConfig</code> if you specify
     * values for <code>OidcConfig</code>.</p>
     */
    inline bool OidcConfigHasBeenSet() const { return m_oidcConfigHasBeenSet; }

    /**
     * <p>Use this parameter to configure a private workforce using your own OIDC
     * Identity Provider.</p> <p>Do not use <code>CognitoConfig</code> if you specify
     * values for <code>OidcConfig</code>.</p>
     */
    inline void SetOidcConfig(const OidcConfig& value) { m_oidcConfigHasBeenSet = true; m_oidcConfig = value; }

    /**
     * <p>Use this parameter to configure a private workforce using your own OIDC
     * Identity Provider.</p> <p>Do not use <code>CognitoConfig</code> if you specify
     * values for <code>OidcConfig</code>.</p>
     */
    inline void SetOidcConfig(OidcConfig&& value) { m_oidcConfigHasBeenSet = true; m_oidcConfig = std::move(value); }

    /**
     * <p>Use this parameter to configure a private workforce using your own OIDC
     * Identity Provider.</p> <p>Do not use <code>CognitoConfig</code> if you specify
     * values for <code>OidcConfig</code>.</p>
     */
    inline CreateWorkforceRequest& WithOidcConfig(const OidcConfig& value) { SetOidcConfig(value); return *this;}

    /**
     * <p>Use this parameter to configure a private workforce using your own OIDC
     * Identity Provider.</p> <p>Do not use <code>CognitoConfig</code> if you specify
     * values for <code>OidcConfig</code>.</p>
     */
    inline CreateWorkforceRequest& WithOidcConfig(OidcConfig&& value) { SetOidcConfig(std::move(value)); return *this;}


    
    inline const SourceIpConfig& GetSourceIpConfig() const{ return m_sourceIpConfig; }

    
    inline bool SourceIpConfigHasBeenSet() const { return m_sourceIpConfigHasBeenSet; }

    
    inline void SetSourceIpConfig(const SourceIpConfig& value) { m_sourceIpConfigHasBeenSet = true; m_sourceIpConfig = value; }

    
    inline void SetSourceIpConfig(SourceIpConfig&& value) { m_sourceIpConfigHasBeenSet = true; m_sourceIpConfig = std::move(value); }

    
    inline CreateWorkforceRequest& WithSourceIpConfig(const SourceIpConfig& value) { SetSourceIpConfig(value); return *this;}

    
    inline CreateWorkforceRequest& WithSourceIpConfig(SourceIpConfig&& value) { SetSourceIpConfig(std::move(value)); return *this;}


    /**
     * <p>The name of the private workforce.</p>
     */
    inline const Aws::String& GetWorkforceName() const{ return m_workforceName; }

    /**
     * <p>The name of the private workforce.</p>
     */
    inline bool WorkforceNameHasBeenSet() const { return m_workforceNameHasBeenSet; }

    /**
     * <p>The name of the private workforce.</p>
     */
    inline void SetWorkforceName(const Aws::String& value) { m_workforceNameHasBeenSet = true; m_workforceName = value; }

    /**
     * <p>The name of the private workforce.</p>
     */
    inline void SetWorkforceName(Aws::String&& value) { m_workforceNameHasBeenSet = true; m_workforceName = std::move(value); }

    /**
     * <p>The name of the private workforce.</p>
     */
    inline void SetWorkforceName(const char* value) { m_workforceNameHasBeenSet = true; m_workforceName.assign(value); }

    /**
     * <p>The name of the private workforce.</p>
     */
    inline CreateWorkforceRequest& WithWorkforceName(const Aws::String& value) { SetWorkforceName(value); return *this;}

    /**
     * <p>The name of the private workforce.</p>
     */
    inline CreateWorkforceRequest& WithWorkforceName(Aws::String&& value) { SetWorkforceName(std::move(value)); return *this;}

    /**
     * <p>The name of the private workforce.</p>
     */
    inline CreateWorkforceRequest& WithWorkforceName(const char* value) { SetWorkforceName(value); return *this;}


    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize our workforce. Each tag consists of a key and a value, both of which
     * you define.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize our workforce. Each tag consists of a key and a value, both of which
     * you define.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize our workforce. Each tag consists of a key and a value, both of which
     * you define.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize our workforce. Each tag consists of a key and a value, both of which
     * you define.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize our workforce. Each tag consists of a key and a value, both of which
     * you define.</p>
     */
    inline CreateWorkforceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize our workforce. Each tag consists of a key and a value, both of which
     * you define.</p>
     */
    inline CreateWorkforceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize our workforce. Each tag consists of a key and a value, both of which
     * you define.</p>
     */
    inline CreateWorkforceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize our workforce. Each tag consists of a key and a value, both of which
     * you define.</p>
     */
    inline CreateWorkforceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Use this parameter to configure a workforce using VPC.</p>
     */
    inline const WorkforceVpcConfigRequest& GetWorkforceVpcConfig() const{ return m_workforceVpcConfig; }

    /**
     * <p>Use this parameter to configure a workforce using VPC.</p>
     */
    inline bool WorkforceVpcConfigHasBeenSet() const { return m_workforceVpcConfigHasBeenSet; }

    /**
     * <p>Use this parameter to configure a workforce using VPC.</p>
     */
    inline void SetWorkforceVpcConfig(const WorkforceVpcConfigRequest& value) { m_workforceVpcConfigHasBeenSet = true; m_workforceVpcConfig = value; }

    /**
     * <p>Use this parameter to configure a workforce using VPC.</p>
     */
    inline void SetWorkforceVpcConfig(WorkforceVpcConfigRequest&& value) { m_workforceVpcConfigHasBeenSet = true; m_workforceVpcConfig = std::move(value); }

    /**
     * <p>Use this parameter to configure a workforce using VPC.</p>
     */
    inline CreateWorkforceRequest& WithWorkforceVpcConfig(const WorkforceVpcConfigRequest& value) { SetWorkforceVpcConfig(value); return *this;}

    /**
     * <p>Use this parameter to configure a workforce using VPC.</p>
     */
    inline CreateWorkforceRequest& WithWorkforceVpcConfig(WorkforceVpcConfigRequest&& value) { SetWorkforceVpcConfig(std::move(value)); return *this;}

  private:

    CognitoConfig m_cognitoConfig;
    bool m_cognitoConfigHasBeenSet = false;

    OidcConfig m_oidcConfig;
    bool m_oidcConfigHasBeenSet = false;

    SourceIpConfig m_sourceIpConfig;
    bool m_sourceIpConfigHasBeenSet = false;

    Aws::String m_workforceName;
    bool m_workforceNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    WorkforceVpcConfigRequest m_workforceVpcConfig;
    bool m_workforceVpcConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
