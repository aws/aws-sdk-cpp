/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>Contains a single AWS CloudFormation deployment template for a Software as a
 * Service (SaaS) product.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/SaasCloudFormationDeploymentTemplate">AWS
 * API Reference</a></p>
 */
class SaasCloudFormationDeploymentTemplate {
 public:
  AWS_MARKETPLACEDISCOVERY_API SaasCloudFormationDeploymentTemplate() = default;
  AWS_MARKETPLACEDISCOVERY_API SaasCloudFormationDeploymentTemplate(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API SaasCloudFormationDeploymentTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The display name of the deployment template.</p>
   */
  inline const Aws::String& GetTemplateName() const { return m_templateName; }
  inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
  template <typename TemplateNameT = Aws::String>
  void SetTemplateName(TemplateNameT&& value) {
    m_templateNameHasBeenSet = true;
    m_templateName = std::forward<TemplateNameT>(value);
  }
  template <typename TemplateNameT = Aws::String>
  SaasCloudFormationDeploymentTemplate& WithTemplateName(TemplateNameT&& value) {
    SetTemplateName(std::forward<TemplateNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the deployment template.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  SaasCloudFormationDeploymentTemplate& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default CloudFormation stack name used when deploying this template.</p>
   */
  inline const Aws::String& GetDefaultStackName() const { return m_defaultStackName; }
  inline bool DefaultStackNameHasBeenSet() const { return m_defaultStackNameHasBeenSet; }
  template <typename DefaultStackNameT = Aws::String>
  void SetDefaultStackName(DefaultStackNameT&& value) {
    m_defaultStackNameHasBeenSet = true;
    m_defaultStackName = std::forward<DefaultStackNameT>(value);
  }
  template <typename DefaultStackNameT = Aws::String>
  SaasCloudFormationDeploymentTemplate& WithDefaultStackName(DefaultStackNameT&& value) {
    SetDefaultStackName(std::forward<DefaultStackNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the CloudFormation deployment template.</p>
   */
  inline const Aws::String& GetTemplateUrl() const { return m_templateUrl; }
  inline bool TemplateUrlHasBeenSet() const { return m_templateUrlHasBeenSet; }
  template <typename TemplateUrlT = Aws::String>
  void SetTemplateUrl(TemplateUrlT&& value) {
    m_templateUrlHasBeenSet = true;
    m_templateUrl = std::forward<TemplateUrlT>(value);
  }
  template <typename TemplateUrlT = Aws::String>
  SaasCloudFormationDeploymentTemplate& WithTemplateUrl(TemplateUrlT&& value) {
    SetTemplateUrl(std::forward<TemplateUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Identity and Access Management (IAM) policy that you need to deploy
   * this template.</p>
   */
  inline const Aws::String& GetIamPolicy() const { return m_iamPolicy; }
  inline bool IamPolicyHasBeenSet() const { return m_iamPolicyHasBeenSet; }
  template <typename IamPolicyT = Aws::String>
  void SetIamPolicy(IamPolicyT&& value) {
    m_iamPolicyHasBeenSet = true;
    m_iamPolicy = std::forward<IamPolicyT>(value);
  }
  template <typename IamPolicyT = Aws::String>
  SaasCloudFormationDeploymentTemplate& WithIamPolicy(IamPolicyT&& value) {
    SetIamPolicy(std::forward<IamPolicyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_templateName;

  Aws::String m_description;

  Aws::String m_defaultStackName;

  Aws::String m_templateUrl;

  Aws::String m_iamPolicy;
  bool m_templateNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_defaultStackNameHasBeenSet = false;
  bool m_templateUrlHasBeenSet = false;
  bool m_iamPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
