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
#include <aws/sagemaker/model/WorkforceIpAddressType.h>
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
    AWS_SAGEMAKER_API CreateWorkforceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkforce"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Use this parameter to configure an Amazon Cognito private workforce. A single
     * Cognito workforce is created using and corresponds to a single <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">
     * Amazon Cognito user pool</a>.</p> <p>Do not use <code>OidcConfig</code> if you
     * specify values for <code>CognitoConfig</code>.</p>
     */
    inline const CognitoConfig& GetCognitoConfig() const { return m_cognitoConfig; }
    inline bool CognitoConfigHasBeenSet() const { return m_cognitoConfigHasBeenSet; }
    template<typename CognitoConfigT = CognitoConfig>
    void SetCognitoConfig(CognitoConfigT&& value) { m_cognitoConfigHasBeenSet = true; m_cognitoConfig = std::forward<CognitoConfigT>(value); }
    template<typename CognitoConfigT = CognitoConfig>
    CreateWorkforceRequest& WithCognitoConfig(CognitoConfigT&& value) { SetCognitoConfig(std::forward<CognitoConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to configure a private workforce using your own OIDC
     * Identity Provider.</p> <p>Do not use <code>CognitoConfig</code> if you specify
     * values for <code>OidcConfig</code>.</p>
     */
    inline const OidcConfig& GetOidcConfig() const { return m_oidcConfig; }
    inline bool OidcConfigHasBeenSet() const { return m_oidcConfigHasBeenSet; }
    template<typename OidcConfigT = OidcConfig>
    void SetOidcConfig(OidcConfigT&& value) { m_oidcConfigHasBeenSet = true; m_oidcConfig = std::forward<OidcConfigT>(value); }
    template<typename OidcConfigT = OidcConfig>
    CreateWorkforceRequest& WithOidcConfig(OidcConfigT&& value) { SetOidcConfig(std::forward<OidcConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SourceIpConfig& GetSourceIpConfig() const { return m_sourceIpConfig; }
    inline bool SourceIpConfigHasBeenSet() const { return m_sourceIpConfigHasBeenSet; }
    template<typename SourceIpConfigT = SourceIpConfig>
    void SetSourceIpConfig(SourceIpConfigT&& value) { m_sourceIpConfigHasBeenSet = true; m_sourceIpConfig = std::forward<SourceIpConfigT>(value); }
    template<typename SourceIpConfigT = SourceIpConfig>
    CreateWorkforceRequest& WithSourceIpConfig(SourceIpConfigT&& value) { SetSourceIpConfig(std::forward<SourceIpConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the private workforce.</p>
     */
    inline const Aws::String& GetWorkforceName() const { return m_workforceName; }
    inline bool WorkforceNameHasBeenSet() const { return m_workforceNameHasBeenSet; }
    template<typename WorkforceNameT = Aws::String>
    void SetWorkforceName(WorkforceNameT&& value) { m_workforceNameHasBeenSet = true; m_workforceName = std::forward<WorkforceNameT>(value); }
    template<typename WorkforceNameT = Aws::String>
    CreateWorkforceRequest& WithWorkforceName(WorkforceNameT&& value) { SetWorkforceName(std::forward<WorkforceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize our workforce. Each tag consists of a key and a value, both of which
     * you define.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateWorkforceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateWorkforceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use this parameter to configure a workforce using VPC.</p>
     */
    inline const WorkforceVpcConfigRequest& GetWorkforceVpcConfig() const { return m_workforceVpcConfig; }
    inline bool WorkforceVpcConfigHasBeenSet() const { return m_workforceVpcConfigHasBeenSet; }
    template<typename WorkforceVpcConfigT = WorkforceVpcConfigRequest>
    void SetWorkforceVpcConfig(WorkforceVpcConfigT&& value) { m_workforceVpcConfigHasBeenSet = true; m_workforceVpcConfig = std::forward<WorkforceVpcConfigT>(value); }
    template<typename WorkforceVpcConfigT = WorkforceVpcConfigRequest>
    CreateWorkforceRequest& WithWorkforceVpcConfig(WorkforceVpcConfigT&& value) { SetWorkforceVpcConfig(std::forward<WorkforceVpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to specify whether you want <code>IPv4</code> only or
     * <code>dualstack</code> (<code>IPv4</code> and <code>IPv6</code>) to support your
     * labeling workforce.</p>
     */
    inline WorkforceIpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(WorkforceIpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline CreateWorkforceRequest& WithIpAddressType(WorkforceIpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}
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

    WorkforceIpAddressType m_ipAddressType{WorkforceIpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
