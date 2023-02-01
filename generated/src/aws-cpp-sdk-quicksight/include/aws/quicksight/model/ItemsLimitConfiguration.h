/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/OtherCategories.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The limit configuration of the visual display for an axis.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ItemsLimitConfiguration">AWS
   * API Reference</a></p>
   */
  class ItemsLimitConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ItemsLimitConfiguration();
    AWS_QUICKSIGHT_API ItemsLimitConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ItemsLimitConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The limit on how many items of a field are showed in the chart. For example,
     * the number of slices that are displayed in a pie chart.</p>
     */
    inline long long GetItemsLimit() const{ return m_itemsLimit; }

    /**
     * <p>The limit on how many items of a field are showed in the chart. For example,
     * the number of slices that are displayed in a pie chart.</p>
     */
    inline bool ItemsLimitHasBeenSet() const { return m_itemsLimitHasBeenSet; }

    /**
     * <p>The limit on how many items of a field are showed in the chart. For example,
     * the number of slices that are displayed in a pie chart.</p>
     */
    inline void SetItemsLimit(long long value) { m_itemsLimitHasBeenSet = true; m_itemsLimit = value; }

    /**
     * <p>The limit on how many items of a field are showed in the chart. For example,
     * the number of slices that are displayed in a pie chart.</p>
     */
    inline ItemsLimitConfiguration& WithItemsLimit(long long value) { SetItemsLimit(value); return *this;}


    /**
     * <p>The <code>Show other</code> of an axis in the chart. Choose one of the
     * following options:</p> <ul> <li> <p> <code>INCLUDE</code> </p> </li> <li> <p>
     * <code>EXCLUDE</code> </p> </li> </ul>
     */
    inline const OtherCategories& GetOtherCategories() const{ return m_otherCategories; }

    /**
     * <p>The <code>Show other</code> of an axis in the chart. Choose one of the
     * following options:</p> <ul> <li> <p> <code>INCLUDE</code> </p> </li> <li> <p>
     * <code>EXCLUDE</code> </p> </li> </ul>
     */
    inline bool OtherCategoriesHasBeenSet() const { return m_otherCategoriesHasBeenSet; }

    /**
     * <p>The <code>Show other</code> of an axis in the chart. Choose one of the
     * following options:</p> <ul> <li> <p> <code>INCLUDE</code> </p> </li> <li> <p>
     * <code>EXCLUDE</code> </p> </li> </ul>
     */
    inline void SetOtherCategories(const OtherCategories& value) { m_otherCategoriesHasBeenSet = true; m_otherCategories = value; }

    /**
     * <p>The <code>Show other</code> of an axis in the chart. Choose one of the
     * following options:</p> <ul> <li> <p> <code>INCLUDE</code> </p> </li> <li> <p>
     * <code>EXCLUDE</code> </p> </li> </ul>
     */
    inline void SetOtherCategories(OtherCategories&& value) { m_otherCategoriesHasBeenSet = true; m_otherCategories = std::move(value); }

    /**
     * <p>The <code>Show other</code> of an axis in the chart. Choose one of the
     * following options:</p> <ul> <li> <p> <code>INCLUDE</code> </p> </li> <li> <p>
     * <code>EXCLUDE</code> </p> </li> </ul>
     */
    inline ItemsLimitConfiguration& WithOtherCategories(const OtherCategories& value) { SetOtherCategories(value); return *this;}

    /**
     * <p>The <code>Show other</code> of an axis in the chart. Choose one of the
     * following options:</p> <ul> <li> <p> <code>INCLUDE</code> </p> </li> <li> <p>
     * <code>EXCLUDE</code> </p> </li> </ul>
     */
    inline ItemsLimitConfiguration& WithOtherCategories(OtherCategories&& value) { SetOtherCategories(std::move(value)); return *this;}

  private:

    long long m_itemsLimit;
    bool m_itemsLimitHasBeenSet = false;

    OtherCategories m_otherCategories;
    bool m_otherCategoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
