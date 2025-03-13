/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-runtime/PersonalizeRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace PersonalizeRuntime
{
namespace Model
{

  /**
   * <p>Contains information on a promotion. A promotion defines additional business
   * rules that apply to a configurable subset of recommended items.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-runtime-2018-05-22/Promotion">AWS
   * API Reference</a></p>
   */
  class Promotion
  {
  public:
    AWS_PERSONALIZERUNTIME_API Promotion() = default;
    AWS_PERSONALIZERUNTIME_API Promotion(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZERUNTIME_API Promotion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZERUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the promotion.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Promotion& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of recommended items to apply the promotion to.</p>
     */
    inline int GetPercentPromotedItems() const { return m_percentPromotedItems; }
    inline bool PercentPromotedItemsHasBeenSet() const { return m_percentPromotedItemsHasBeenSet; }
    inline void SetPercentPromotedItems(int value) { m_percentPromotedItemsHasBeenSet = true; m_percentPromotedItems = value; }
    inline Promotion& WithPercentPromotedItems(int value) { SetPercentPromotedItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the filter used by the promotion. This
     * filter defines the criteria for promoted items. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/promoting-items.html#promotion-filters">Promotion
     * filters</a>.</p>
     */
    inline const Aws::String& GetFilterArn() const { return m_filterArn; }
    inline bool FilterArnHasBeenSet() const { return m_filterArnHasBeenSet; }
    template<typename FilterArnT = Aws::String>
    void SetFilterArn(FilterArnT&& value) { m_filterArnHasBeenSet = true; m_filterArn = std::forward<FilterArnT>(value); }
    template<typename FilterArnT = Aws::String>
    Promotion& WithFilterArn(FilterArnT&& value) { SetFilterArn(std::forward<FilterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values to use when promoting items. For each placeholder parameter in
     * your promotion's filter expression, provide the parameter name (in matching
     * case) as a key and the filter value(s) as the corresponding value. Separate
     * multiple values for one parameter with a comma. </p> <p>For filter expressions
     * that use an <code>INCLUDE</code> element to include items, you must provide
     * values for all parameters that are defined in the expression. For filters with
     * expressions that use an <code>EXCLUDE</code> element to exclude items, you can
     * omit the <code>filter-values</code>. In this case, Amazon Personalize doesn't
     * use that portion of the expression to filter recommendations.</p> <p>For more
     * information on creating filters, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * recommendations and user segments</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFilterValues() const { return m_filterValues; }
    inline bool FilterValuesHasBeenSet() const { return m_filterValuesHasBeenSet; }
    template<typename FilterValuesT = Aws::Map<Aws::String, Aws::String>>
    void SetFilterValues(FilterValuesT&& value) { m_filterValuesHasBeenSet = true; m_filterValues = std::forward<FilterValuesT>(value); }
    template<typename FilterValuesT = Aws::Map<Aws::String, Aws::String>>
    Promotion& WithFilterValues(FilterValuesT&& value) { SetFilterValues(std::forward<FilterValuesT>(value)); return *this;}
    template<typename FilterValuesKeyT = Aws::String, typename FilterValuesValueT = Aws::String>
    Promotion& AddFilterValues(FilterValuesKeyT&& key, FilterValuesValueT&& value) {
      m_filterValuesHasBeenSet = true; m_filterValues.emplace(std::forward<FilterValuesKeyT>(key), std::forward<FilterValuesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_percentPromotedItems{0};
    bool m_percentPromotedItemsHasBeenSet = false;

    Aws::String m_filterArn;
    bool m_filterArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_filterValues;
    bool m_filterValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
