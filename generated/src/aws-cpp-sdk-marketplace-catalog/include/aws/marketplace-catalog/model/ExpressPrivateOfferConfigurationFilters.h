/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ExpressPrivateOfferConfigurationEntityIdFilter.h>
#include <aws/marketplace-catalog/model/ExpressPrivateOfferConfigurationProductIdFilter.h>
#include <aws/marketplace-catalog/model/ExpressPrivateOfferConfigurationStateFilter.h>

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
 * <p>The filter fields for the express private offer configuration
 * entity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ExpressPrivateOfferConfigurationFilters">AWS
 * API Reference</a></p>
 */
class ExpressPrivateOfferConfigurationFilters {
 public:
  AWS_MARKETPLACECATALOG_API ExpressPrivateOfferConfigurationFilters() = default;
  AWS_MARKETPLACECATALOG_API ExpressPrivateOfferConfigurationFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API ExpressPrivateOfferConfigurationFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>You can filter on the <code>EntityId</code> of an express private offer
   * configuration.</p>
   */
  inline const ExpressPrivateOfferConfigurationEntityIdFilter& GetEntityId() const { return m_entityId; }
  inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
  template <typename EntityIdT = ExpressPrivateOfferConfigurationEntityIdFilter>
  void SetEntityId(EntityIdT&& value) {
    m_entityIdHasBeenSet = true;
    m_entityId = std::forward<EntityIdT>(value);
  }
  template <typename EntityIdT = ExpressPrivateOfferConfigurationEntityIdFilter>
  ExpressPrivateOfferConfigurationFilters& WithEntityId(EntityIdT&& value) {
    SetEntityId(std::forward<EntityIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>You can filter on the <code>ProductId</code> of an express private offer
   * configuration.</p>
   */
  inline const ExpressPrivateOfferConfigurationProductIdFilter& GetProductId() const { return m_productId; }
  inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
  template <typename ProductIdT = ExpressPrivateOfferConfigurationProductIdFilter>
  void SetProductId(ProductIdT&& value) {
    m_productIdHasBeenSet = true;
    m_productId = std::forward<ProductIdT>(value);
  }
  template <typename ProductIdT = ExpressPrivateOfferConfigurationProductIdFilter>
  ExpressPrivateOfferConfigurationFilters& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the express private offer configuration to filter on. Valid
   * values are the following:</p> <ul> <li> <p> <code>ACTIVE</code> – The
   * configuration is active and you can use it to generate offers.</p> </li> <li>
   * <p> <code>INACTIVE</code> – The configuration is deprecated or deleted.</p>
   * </li> </ul>
   */
  inline const ExpressPrivateOfferConfigurationStateFilter& GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  template <typename StateT = ExpressPrivateOfferConfigurationStateFilter>
  void SetState(StateT&& value) {
    m_stateHasBeenSet = true;
    m_state = std::forward<StateT>(value);
  }
  template <typename StateT = ExpressPrivateOfferConfigurationStateFilter>
  ExpressPrivateOfferConfigurationFilters& WithState(StateT&& value) {
    SetState(std::forward<StateT>(value));
    return *this;
  }
  ///@}
 private:
  ExpressPrivateOfferConfigurationEntityIdFilter m_entityId;

  ExpressPrivateOfferConfigurationProductIdFilter m_productId;

  ExpressPrivateOfferConfigurationStateFilter m_state;
  bool m_entityIdHasBeenSet = false;
  bool m_productIdHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
