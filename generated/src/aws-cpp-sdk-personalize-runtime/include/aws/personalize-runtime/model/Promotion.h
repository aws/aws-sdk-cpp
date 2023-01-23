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
    AWS_PERSONALIZERUNTIME_API Promotion();
    AWS_PERSONALIZERUNTIME_API Promotion(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZERUNTIME_API Promotion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZERUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the promotion.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the promotion.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the promotion.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the promotion.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the promotion.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the promotion.</p>
     */
    inline Promotion& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the promotion.</p>
     */
    inline Promotion& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the promotion.</p>
     */
    inline Promotion& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The percentage of recommended items to apply the promotion to.</p>
     */
    inline int GetPercentPromotedItems() const{ return m_percentPromotedItems; }

    /**
     * <p>The percentage of recommended items to apply the promotion to.</p>
     */
    inline bool PercentPromotedItemsHasBeenSet() const { return m_percentPromotedItemsHasBeenSet; }

    /**
     * <p>The percentage of recommended items to apply the promotion to.</p>
     */
    inline void SetPercentPromotedItems(int value) { m_percentPromotedItemsHasBeenSet = true; m_percentPromotedItems = value; }

    /**
     * <p>The percentage of recommended items to apply the promotion to.</p>
     */
    inline Promotion& WithPercentPromotedItems(int value) { SetPercentPromotedItems(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the filter used by the promotion. This
     * filter defines the criteria for promoted items. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/promoting-items.html#promotion-filters">Promotion
     * filters</a>.</p>
     */
    inline const Aws::String& GetFilterArn() const{ return m_filterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the filter used by the promotion. This
     * filter defines the criteria for promoted items. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/promoting-items.html#promotion-filters">Promotion
     * filters</a>.</p>
     */
    inline bool FilterArnHasBeenSet() const { return m_filterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the filter used by the promotion. This
     * filter defines the criteria for promoted items. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/promoting-items.html#promotion-filters">Promotion
     * filters</a>.</p>
     */
    inline void SetFilterArn(const Aws::String& value) { m_filterArnHasBeenSet = true; m_filterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the filter used by the promotion. This
     * filter defines the criteria for promoted items. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/promoting-items.html#promotion-filters">Promotion
     * filters</a>.</p>
     */
    inline void SetFilterArn(Aws::String&& value) { m_filterArnHasBeenSet = true; m_filterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the filter used by the promotion. This
     * filter defines the criteria for promoted items. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/promoting-items.html#promotion-filters">Promotion
     * filters</a>.</p>
     */
    inline void SetFilterArn(const char* value) { m_filterArnHasBeenSet = true; m_filterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the filter used by the promotion. This
     * filter defines the criteria for promoted items. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/promoting-items.html#promotion-filters">Promotion
     * filters</a>.</p>
     */
    inline Promotion& WithFilterArn(const Aws::String& value) { SetFilterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the filter used by the promotion. This
     * filter defines the criteria for promoted items. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/promoting-items.html#promotion-filters">Promotion
     * filters</a>.</p>
     */
    inline Promotion& WithFilterArn(Aws::String&& value) { SetFilterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the filter used by the promotion. This
     * filter defines the criteria for promoted items. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/promoting-items.html#promotion-filters">Promotion
     * filters</a>.</p>
     */
    inline Promotion& WithFilterArn(const char* value) { SetFilterArn(value); return *this;}


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
    inline const Aws::Map<Aws::String, Aws::String>& GetFilterValues() const{ return m_filterValues; }

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
    inline bool FilterValuesHasBeenSet() const { return m_filterValuesHasBeenSet; }

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
    inline void SetFilterValues(const Aws::Map<Aws::String, Aws::String>& value) { m_filterValuesHasBeenSet = true; m_filterValues = value; }

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
    inline void SetFilterValues(Aws::Map<Aws::String, Aws::String>&& value) { m_filterValuesHasBeenSet = true; m_filterValues = std::move(value); }

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
    inline Promotion& WithFilterValues(const Aws::Map<Aws::String, Aws::String>& value) { SetFilterValues(value); return *this;}

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
    inline Promotion& WithFilterValues(Aws::Map<Aws::String, Aws::String>&& value) { SetFilterValues(std::move(value)); return *this;}

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
    inline Promotion& AddFilterValues(const Aws::String& key, const Aws::String& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(key, value); return *this; }

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
    inline Promotion& AddFilterValues(Aws::String&& key, const Aws::String& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(std::move(key), value); return *this; }

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
    inline Promotion& AddFilterValues(const Aws::String& key, Aws::String&& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(key, std::move(value)); return *this; }

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
    inline Promotion& AddFilterValues(Aws::String&& key, Aws::String&& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(std::move(key), std::move(value)); return *this; }

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
    inline Promotion& AddFilterValues(const char* key, Aws::String&& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(key, std::move(value)); return *this; }

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
    inline Promotion& AddFilterValues(Aws::String&& key, const char* value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(std::move(key), value); return *this; }

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
    inline Promotion& AddFilterValues(const char* key, const char* value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_percentPromotedItems;
    bool m_percentPromotedItemsHasBeenSet = false;

    Aws::String m_filterArn;
    bool m_filterArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_filterValues;
    bool m_filterValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
