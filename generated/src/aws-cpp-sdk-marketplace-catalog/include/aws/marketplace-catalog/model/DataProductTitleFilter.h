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
   * <p>Object that allows filtering on product title.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/DataProductTitleFilter">AWS
   * API Reference</a></p>
   */
  class DataProductTitleFilter
  {
  public:
    AWS_MARKETPLACECATALOG_API DataProductTitleFilter();
    AWS_MARKETPLACECATALOG_API DataProductTitleFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API DataProductTitleFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string array of unique product title values to be filtered on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValueList() const{ return m_valueList; }

    /**
     * <p>A string array of unique product title values to be filtered on.</p>
     */
    inline bool ValueListHasBeenSet() const { return m_valueListHasBeenSet; }

    /**
     * <p>A string array of unique product title values to be filtered on.</p>
     */
    inline void SetValueList(const Aws::Vector<Aws::String>& value) { m_valueListHasBeenSet = true; m_valueList = value; }

    /**
     * <p>A string array of unique product title values to be filtered on.</p>
     */
    inline void SetValueList(Aws::Vector<Aws::String>&& value) { m_valueListHasBeenSet = true; m_valueList = std::move(value); }

    /**
     * <p>A string array of unique product title values to be filtered on.</p>
     */
    inline DataProductTitleFilter& WithValueList(const Aws::Vector<Aws::String>& value) { SetValueList(value); return *this;}

    /**
     * <p>A string array of unique product title values to be filtered on.</p>
     */
    inline DataProductTitleFilter& WithValueList(Aws::Vector<Aws::String>&& value) { SetValueList(std::move(value)); return *this;}

    /**
     * <p>A string array of unique product title values to be filtered on.</p>
     */
    inline DataProductTitleFilter& AddValueList(const Aws::String& value) { m_valueListHasBeenSet = true; m_valueList.push_back(value); return *this; }

    /**
     * <p>A string array of unique product title values to be filtered on.</p>
     */
    inline DataProductTitleFilter& AddValueList(Aws::String&& value) { m_valueListHasBeenSet = true; m_valueList.push_back(std::move(value)); return *this; }

    /**
     * <p>A string array of unique product title values to be filtered on.</p>
     */
    inline DataProductTitleFilter& AddValueList(const char* value) { m_valueListHasBeenSet = true; m_valueList.push_back(value); return *this; }


    /**
     * <p>A string that will be the <code>wildCard</code> input for product tile
     * filter. It matches the provided value as a substring in the actual value.</p>
     */
    inline const Aws::String& GetWildCardValue() const{ return m_wildCardValue; }

    /**
     * <p>A string that will be the <code>wildCard</code> input for product tile
     * filter. It matches the provided value as a substring in the actual value.</p>
     */
    inline bool WildCardValueHasBeenSet() const { return m_wildCardValueHasBeenSet; }

    /**
     * <p>A string that will be the <code>wildCard</code> input for product tile
     * filter. It matches the provided value as a substring in the actual value.</p>
     */
    inline void SetWildCardValue(const Aws::String& value) { m_wildCardValueHasBeenSet = true; m_wildCardValue = value; }

    /**
     * <p>A string that will be the <code>wildCard</code> input for product tile
     * filter. It matches the provided value as a substring in the actual value.</p>
     */
    inline void SetWildCardValue(Aws::String&& value) { m_wildCardValueHasBeenSet = true; m_wildCardValue = std::move(value); }

    /**
     * <p>A string that will be the <code>wildCard</code> input for product tile
     * filter. It matches the provided value as a substring in the actual value.</p>
     */
    inline void SetWildCardValue(const char* value) { m_wildCardValueHasBeenSet = true; m_wildCardValue.assign(value); }

    /**
     * <p>A string that will be the <code>wildCard</code> input for product tile
     * filter. It matches the provided value as a substring in the actual value.</p>
     */
    inline DataProductTitleFilter& WithWildCardValue(const Aws::String& value) { SetWildCardValue(value); return *this;}

    /**
     * <p>A string that will be the <code>wildCard</code> input for product tile
     * filter. It matches the provided value as a substring in the actual value.</p>
     */
    inline DataProductTitleFilter& WithWildCardValue(Aws::String&& value) { SetWildCardValue(std::move(value)); return *this;}

    /**
     * <p>A string that will be the <code>wildCard</code> input for product tile
     * filter. It matches the provided value as a substring in the actual value.</p>
     */
    inline DataProductTitleFilter& WithWildCardValue(const char* value) { SetWildCardValue(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_valueList;
    bool m_valueListHasBeenSet = false;

    Aws::String m_wildCardValue;
    bool m_wildCardValueHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
