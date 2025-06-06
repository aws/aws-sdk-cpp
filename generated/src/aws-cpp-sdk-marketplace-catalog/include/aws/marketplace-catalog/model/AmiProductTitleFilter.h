﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Object that allows filtering on product title.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/AmiProductTitleFilter">AWS
   * API Reference</a></p>
   */
  class AmiProductTitleFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API AmiProductTitleFilter() = default;
    AWS_MARKETPLACECATALOG_API AmiProductTitleFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API AmiProductTitleFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string array of unique product title values to be filtered on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValueList() const { return m_valueList; }
    inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }
    template<typename ValueListT = Aws::Vector<Aws::String>>
    void SetValueList(ValueListT&& value) { m_valueListHasBeenSet = true; m_valueList = std::forward<ValueListT>(value); }
    template<typename ValueListT = Aws::Vector<Aws::String>>
    AmiProductTitleFilter& WithValueList(ValueListT&& value) { SetValueList(std::forward<ValueListT>(value)); return *this;}
    template<typename ValueListT = Aws::String>
    AmiProductTitleFilter& AddValueList(ValueListT&& value) { m_valueListHasBeenSet = true; m_valueList.emplace_back(std::forward<ValueListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string that will be the <code>wildCard</code> input for product tile
     * filter. It matches the provided value as a substring in the actual value.</p>
     */
    inline const Aws::String& GetWildCardValue() const { return m_wildCardValue; }
    inline bool WildCardValueHasBeenSet() const { return m_wildCardValueHasBeenSet; }
    template<typename WildCardValueT = Aws::String>
    void SetWildCardValue(WildCardValueT&& value) { m_wildCardValueHasBeenSet = true; m_wildCardValue = std::forward<WildCardValueT>(value); }
    template<typename WildCardValueT = Aws::String>
    AmiProductTitleFilter& WithWildCardValue(WildCardValueT&& value) { SetWildCardValue(std::forward<WildCardValueT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_valueList;
    bool m_valueListHasBeenSet = false;

    Aws::String m_wildCardValue;
    bool m_wildCardValueHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
