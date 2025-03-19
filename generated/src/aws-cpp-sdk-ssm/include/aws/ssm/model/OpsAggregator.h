/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/OpsFilter.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>One or more aggregators for viewing counts of OpsData using different
   * dimensions such as <code>Source</code>, <code>CreatedTime</code>, or
   * <code>Source and CreatedTime</code>, to name a few.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsAggregator">AWS
   * API Reference</a></p>
   */
  class OpsAggregator
  {
  public:
    AWS_SSM_API OpsAggregator() = default;
    AWS_SSM_API OpsAggregator(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsAggregator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Either a <code>Range</code> or <code>Count</code> aggregator for limiting an
     * OpsData summary.</p>
     */
    inline const Aws::String& GetAggregatorType() const { return m_aggregatorType; }
    inline bool AggregatorTypeHasBeenSet() const { return m_aggregatorTypeHasBeenSet; }
    template<typename AggregatorTypeT = Aws::String>
    void SetAggregatorType(AggregatorTypeT&& value) { m_aggregatorTypeHasBeenSet = true; m_aggregatorType = std::forward<AggregatorTypeT>(value); }
    template<typename AggregatorTypeT = Aws::String>
    OpsAggregator& WithAggregatorType(AggregatorTypeT&& value) { SetAggregatorType(std::forward<AggregatorTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type name to use for viewing counts of OpsData.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    OpsAggregator& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an OpsData attribute on which to limit the count of OpsData.</p>
     */
    inline const Aws::String& GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    template<typename AttributeNameT = Aws::String>
    void SetAttributeName(AttributeNameT&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::forward<AttributeNameT>(value); }
    template<typename AttributeNameT = Aws::String>
    OpsAggregator& WithAttributeName(AttributeNameT&& value) { SetAttributeName(std::forward<AttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregator value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Map<Aws::String, Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Map<Aws::String, Aws::String>>
    OpsAggregator& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesKeyT = Aws::String, typename ValuesValueT = Aws::String>
    OpsAggregator& AddValues(ValuesKeyT&& key, ValuesValueT&& value) {
      m_valuesHasBeenSet = true; m_values.emplace(std::forward<ValuesKeyT>(key), std::forward<ValuesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The aggregator filters.</p>
     */
    inline const Aws::Vector<OpsFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<OpsFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<OpsFilter>>
    OpsAggregator& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = OpsFilter>
    OpsAggregator& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A nested aggregator for viewing counts of OpsData.</p>
     */
    inline const Aws::Vector<OpsAggregator>& GetAggregators() const { return m_aggregators; }
    inline bool AggregatorsHasBeenSet() const { return m_aggregatorsHasBeenSet; }
    template<typename AggregatorsT = Aws::Vector<OpsAggregator>>
    void SetAggregators(AggregatorsT&& value) { m_aggregatorsHasBeenSet = true; m_aggregators = std::forward<AggregatorsT>(value); }
    template<typename AggregatorsT = Aws::Vector<OpsAggregator>>
    OpsAggregator& WithAggregators(AggregatorsT&& value) { SetAggregators(std::forward<AggregatorsT>(value)); return *this;}
    template<typename AggregatorsT = OpsAggregator>
    OpsAggregator& AddAggregators(AggregatorsT&& value) { m_aggregatorsHasBeenSet = true; m_aggregators.emplace_back(std::forward<AggregatorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_aggregatorType;
    bool m_aggregatorTypeHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<OpsFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<OpsAggregator> m_aggregators;
    bool m_aggregatorsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
