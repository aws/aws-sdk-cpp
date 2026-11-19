/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-deployment/MarketplaceDeployment_EXPORTS.h>
#include <aws/marketplace-deployment/model/DataAsAServiceConfigurationDetail.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDeployment {
namespace Model {

/**
 * <p>The deployment configuration. Exactly one member must be set, and it must
 * match the delivery option type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-deployment-2023-01-25/DeploymentConfigurationDetail">AWS
 * API Reference</a></p>
 */
class DeploymentConfigurationDetail {
 public:
  AWS_MARKETPLACEDEPLOYMENT_API DeploymentConfigurationDetail() = default;
  AWS_MARKETPLACEDEPLOYMENT_API DeploymentConfigurationDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDEPLOYMENT_API DeploymentConfigurationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDEPLOYMENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The deployment configuration settings for the Data as a Service delivery
   * option, including the fulfillment URL that AWS Marketplace redirects buyers to
   * after they subscribe.</p>
   */
  inline const DataAsAServiceConfigurationDetail& GetDataAsAService() const { return m_dataAsAService; }
  inline bool DataAsAServiceHasBeenSet() const { return m_dataAsAServiceHasBeenSet; }
  template <typename DataAsAServiceT = DataAsAServiceConfigurationDetail>
  void SetDataAsAService(DataAsAServiceT&& value) {
    m_dataAsAServiceHasBeenSet = true;
    m_dataAsAService = std::forward<DataAsAServiceT>(value);
  }
  template <typename DataAsAServiceT = DataAsAServiceConfigurationDetail>
  DeploymentConfigurationDetail& WithDataAsAService(DataAsAServiceT&& value) {
    SetDataAsAService(std::forward<DataAsAServiceT>(value));
    return *this;
  }
  ///@}
 private:
  DataAsAServiceConfigurationDetail m_dataAsAService;
  bool m_dataAsAServiceHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDeployment
}  // namespace Aws
