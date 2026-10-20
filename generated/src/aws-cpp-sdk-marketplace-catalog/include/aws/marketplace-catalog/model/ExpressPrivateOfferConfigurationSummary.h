/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ExpressPrivateOfferConfigurationStateString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {

/**
 * <p>Summarized information about an express private offer
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ExpressPrivateOfferConfigurationSummary">AWS
 * API Reference</a></p>
 */
class ExpressPrivateOfferConfigurationSummary {
 public:
  AWS_MARKETPLACECATALOG_API ExpressPrivateOfferConfigurationSummary() = default;
  AWS_MARKETPLACECATALOG_API ExpressPrivateOfferConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API ExpressPrivateOfferConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The product ID associated with the express private offer configuration.</p>
   */
  inline const Aws::String& GetProductId() const { return m_productId; }
  inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
  template <typename ProductIdT = Aws::String>
  void SetProductId(ProductIdT&& value) {
    m_productIdHasBeenSet = true;
    m_productId = std::forward<ProductIdT>(value);
  }
  template <typename ProductIdT = Aws::String>
  ExpressPrivateOfferConfigurationSummary& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the express private offer configuration. Valid values are the
   * following:</p> <ul> <li> <p> <code>ACTIVE</code> – The configuration is active
   * and you can use it to generate offers.</p> </li> <li> <p> <code>INACTIVE</code>
   * – The configuration is deprecated or deleted.</p> </li> </ul>
   */
  inline ExpressPrivateOfferConfigurationStateString GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ExpressPrivateOfferConfigurationStateString value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ExpressPrivateOfferConfigurationSummary& WithState(ExpressPrivateOfferConfigurationStateString value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_productId;

  ExpressPrivateOfferConfigurationStateString m_state{ExpressPrivateOfferConfigurationStateString::NOT_SET};
  bool m_productIdHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
