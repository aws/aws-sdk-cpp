/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-deployment/MarketplaceDeployment_EXPORTS.h>

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
 * <p>Contains the deployment configuration settings for the Data as a Service
 * delivery option, including the fulfillment URL that AWS Marketplace redirects
 * buyers to after they subscribe.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-deployment-2023-01-25/DataAsAServiceConfigurationDetail">AWS
 * API Reference</a></p>
 */
class DataAsAServiceConfigurationDetail {
 public:
  AWS_MARKETPLACEDEPLOYMENT_API DataAsAServiceConfigurationDetail() = default;
  AWS_MARKETPLACEDEPLOYMENT_API DataAsAServiceConfigurationDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDEPLOYMENT_API DataAsAServiceConfigurationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDEPLOYMENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HTTPS URL that AWS Marketplace redirects buyers to after they subscribe
   * to the product. The value must be a valid URI that uses the HTTPS scheme.
   * Maximum length: 2,048 characters.</p>
   */
  inline const Aws::String& GetFulfillmentUrl() const { return m_fulfillmentUrl; }
  inline bool FulfillmentUrlHasBeenSet() const { return m_fulfillmentUrlHasBeenSet; }
  template <typename FulfillmentUrlT = Aws::String>
  void SetFulfillmentUrl(FulfillmentUrlT&& value) {
    m_fulfillmentUrlHasBeenSet = true;
    m_fulfillmentUrl = std::forward<FulfillmentUrlT>(value);
  }
  template <typename FulfillmentUrlT = Aws::String>
  DataAsAServiceConfigurationDetail& WithFulfillmentUrl(FulfillmentUrlT&& value) {
    SetFulfillmentUrl(std::forward<FulfillmentUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fulfillmentUrl;
  bool m_fulfillmentUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDeployment
}  // namespace Aws
