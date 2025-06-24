/**
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
   * <p>The filter for machine learning product titles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/MachineLearningProductTitleFilter">AWS
   * API Reference</a></p>
   */
  class MachineLearningProductTitleFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API MachineLearningProductTitleFilter() = default;
    AWS_MARKETPLACECATALOG_API MachineLearningProductTitleFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API MachineLearningProductTitleFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of product titles to filter by. The operation returns machine learning
     * products with titles that exactly match the values in this list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValueList() const { return m_valueList; }
    inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }
    template<typename ValueListT = Aws::Vector<Aws::String>>
    void SetValueList(ValueListT&& value) { m_valueListHasBeenSet = true; m_valueList = std::forward<ValueListT>(value); }
    template<typename ValueListT = Aws::Vector<Aws::String>>
    MachineLearningProductTitleFilter& WithValueList(ValueListT&& value) { SetValueList(std::forward<ValueListT>(value)); return *this;}
    template<typename ValueListT = Aws::String>
    MachineLearningProductTitleFilter& AddValueList(ValueListT&& value) { m_valueListHasBeenSet = true; m_valueList.emplace_back(std::forward<ValueListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A wildcard value to filter product titles. The operation returns machine
     * learning products with titles that match this wildcard pattern.</p>
     */
    inline const Aws::String& GetWildCardValue() const { return m_wildCardValue; }
    inline bool WildCardValueHasBeenSet() const { return m_wildCardValueHasBeenSet; }
    template<typename WildCardValueT = Aws::String>
    void SetWildCardValue(WildCardValueT&& value) { m_wildCardValueHasBeenSet = true; m_wildCardValue = std::forward<WildCardValueT>(value); }
    template<typename WildCardValueT = Aws::String>
    MachineLearningProductTitleFilter& WithWildCardValue(WildCardValueT&& value) { SetWildCardValue(std::forward<WildCardValueT>(value)); return *this;}
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
