/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/SaasCloudFormationDeploymentTemplate.h>

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
 * <p>Contains a deployment template for a SaaS product. Exactly one member is set,
 * indicating the deployment template type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/SaasDeploymentTemplate">AWS
 * API Reference</a></p>
 */
class SaasDeploymentTemplate {
 public:
  AWS_MARKETPLACEDISCOVERY_API SaasDeploymentTemplate() = default;
  AWS_MARKETPLACEDISCOVERY_API SaasDeploymentTemplate(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API SaasDeploymentTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An AWS CloudFormation deployment template.</p>
   */
  inline const SaasCloudFormationDeploymentTemplate& GetCloudFormationDeploymentTemplate() const {
    return m_cloudFormationDeploymentTemplate;
  }
  inline bool CloudFormationDeploymentTemplateHasBeenSet() const { return m_cloudFormationDeploymentTemplateHasBeenSet; }
  template <typename CloudFormationDeploymentTemplateT = SaasCloudFormationDeploymentTemplate>
  void SetCloudFormationDeploymentTemplate(CloudFormationDeploymentTemplateT&& value) {
    m_cloudFormationDeploymentTemplateHasBeenSet = true;
    m_cloudFormationDeploymentTemplate = std::forward<CloudFormationDeploymentTemplateT>(value);
  }
  template <typename CloudFormationDeploymentTemplateT = SaasCloudFormationDeploymentTemplate>
  SaasDeploymentTemplate& WithCloudFormationDeploymentTemplate(CloudFormationDeploymentTemplateT&& value) {
    SetCloudFormationDeploymentTemplate(std::forward<CloudFormationDeploymentTemplateT>(value));
    return *this;
  }
  ///@}
 private:
  SaasCloudFormationDeploymentTemplate m_cloudFormationDeploymentTemplate;
  bool m_cloudFormationDeploymentTemplateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
