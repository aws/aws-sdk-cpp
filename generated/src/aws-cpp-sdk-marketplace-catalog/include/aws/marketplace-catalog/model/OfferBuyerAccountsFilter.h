/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>Allows filtering on the <code>BuyerAccounts</code> of an offer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/OfferBuyerAccountsFilter">AWS
   * API Reference</a></p>
   */
  class OfferBuyerAccountsFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API OfferBuyerAccountsFilter() = default;
    AWS_MARKETPLACECATALOG_API OfferBuyerAccountsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API OfferBuyerAccountsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allows filtering on the <code>BuyerAccounts</code> of an offer with wild card
     * input.</p>
     */
    inline const Aws::String& GetWildCardValue() const { return m_wildCardValue; }
    inline bool WildCardValueHasBeenSet() const { return m_wildCardValueHasBeenSet; }
    template<typename WildCardValueT = Aws::String>
    void SetWildCardValue(WildCardValueT&& value) { m_wildCardValueHasBeenSet = true; m_wildCardValue = std::forward<WildCardValueT>(value); }
    template<typename WildCardValueT = Aws::String>
    OfferBuyerAccountsFilter& WithWildCardValue(WildCardValueT&& value) { SetWildCardValue(std::forward<WildCardValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_wildCardValue;
    bool m_wildCardValueHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
