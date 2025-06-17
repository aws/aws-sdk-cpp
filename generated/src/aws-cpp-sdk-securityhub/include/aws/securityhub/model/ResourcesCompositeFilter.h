/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AllowedOperators.h>
#include <aws/securityhub/model/ResourcesStringFilter.h>
#include <aws/securityhub/model/ResourcesDateFilter.h>
#include <aws/securityhub/model/ResourcesNumberFilter.h>
#include <aws/securityhub/model/ResourcesMapFilter.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Enables the creation of criteria for Amazon Web Services resources in
   * Security Hub.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourcesCompositeFilter">AWS
   * API Reference</a></p>
   */
  class ResourcesCompositeFilter
  {
  public:
    AWS_SECURITYHUB_API ResourcesCompositeFilter() = default;
    AWS_SECURITYHUB_API ResourcesCompositeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ResourcesCompositeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables filtering based on string field values.</p>
     */
    inline const Aws::Vector<ResourcesStringFilter>& GetStringFilters() const { return m_stringFilters; }
    inline bool StringFiltersHasBeenSet() const { return m_stringFiltersHasBeenSet; }
    template<typename StringFiltersT = Aws::Vector<ResourcesStringFilter>>
    void SetStringFilters(StringFiltersT&& value) { m_stringFiltersHasBeenSet = true; m_stringFilters = std::forward<StringFiltersT>(value); }
    template<typename StringFiltersT = Aws::Vector<ResourcesStringFilter>>
    ResourcesCompositeFilter& WithStringFilters(StringFiltersT&& value) { SetStringFilters(std::forward<StringFiltersT>(value)); return *this;}
    template<typename StringFiltersT = ResourcesStringFilter>
    ResourcesCompositeFilter& AddStringFilters(StringFiltersT&& value) { m_stringFiltersHasBeenSet = true; m_stringFilters.emplace_back(std::forward<StringFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables filtering based on date and timestamp field values.</p>
     */
    inline const Aws::Vector<ResourcesDateFilter>& GetDateFilters() const { return m_dateFilters; }
    inline bool DateFiltersHasBeenSet() const { return m_dateFiltersHasBeenSet; }
    template<typename DateFiltersT = Aws::Vector<ResourcesDateFilter>>
    void SetDateFilters(DateFiltersT&& value) { m_dateFiltersHasBeenSet = true; m_dateFilters = std::forward<DateFiltersT>(value); }
    template<typename DateFiltersT = Aws::Vector<ResourcesDateFilter>>
    ResourcesCompositeFilter& WithDateFilters(DateFiltersT&& value) { SetDateFilters(std::forward<DateFiltersT>(value)); return *this;}
    template<typename DateFiltersT = ResourcesDateFilter>
    ResourcesCompositeFilter& AddDateFilters(DateFiltersT&& value) { m_dateFiltersHasBeenSet = true; m_dateFilters.emplace_back(std::forward<DateFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables filtering based on numerical field values.</p>
     */
    inline const Aws::Vector<ResourcesNumberFilter>& GetNumberFilters() const { return m_numberFilters; }
    inline bool NumberFiltersHasBeenSet() const { return m_numberFiltersHasBeenSet; }
    template<typename NumberFiltersT = Aws::Vector<ResourcesNumberFilter>>
    void SetNumberFilters(NumberFiltersT&& value) { m_numberFiltersHasBeenSet = true; m_numberFilters = std::forward<NumberFiltersT>(value); }
    template<typename NumberFiltersT = Aws::Vector<ResourcesNumberFilter>>
    ResourcesCompositeFilter& WithNumberFilters(NumberFiltersT&& value) { SetNumberFilters(std::forward<NumberFiltersT>(value)); return *this;}
    template<typename NumberFiltersT = ResourcesNumberFilter>
    ResourcesCompositeFilter& AddNumberFilters(NumberFiltersT&& value) { m_numberFiltersHasBeenSet = true; m_numberFilters.emplace_back(std::forward<NumberFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables filtering based on map-based field values.</p>
     */
    inline const Aws::Vector<ResourcesMapFilter>& GetMapFilters() const { return m_mapFilters; }
    inline bool MapFiltersHasBeenSet() const { return m_mapFiltersHasBeenSet; }
    template<typename MapFiltersT = Aws::Vector<ResourcesMapFilter>>
    void SetMapFilters(MapFiltersT&& value) { m_mapFiltersHasBeenSet = true; m_mapFilters = std::forward<MapFiltersT>(value); }
    template<typename MapFiltersT = Aws::Vector<ResourcesMapFilter>>
    ResourcesCompositeFilter& WithMapFilters(MapFiltersT&& value) { SetMapFilters(std::forward<MapFiltersT>(value)); return *this;}
    template<typename MapFiltersT = ResourcesMapFilter>
    ResourcesCompositeFilter& AddMapFilters(MapFiltersT&& value) { m_mapFiltersHasBeenSet = true; m_mapFilters.emplace_back(std::forward<MapFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The logical operator used to combine multiple filter conditions.</p>
     */
    inline AllowedOperators GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(AllowedOperators value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline ResourcesCompositeFilter& WithOperator(AllowedOperators value) { SetOperator(value); return *this;}
    ///@}
  private:

    Aws::Vector<ResourcesStringFilter> m_stringFilters;
    bool m_stringFiltersHasBeenSet = false;

    Aws::Vector<ResourcesDateFilter> m_dateFilters;
    bool m_dateFiltersHasBeenSet = false;

    Aws::Vector<ResourcesNumberFilter> m_numberFilters;
    bool m_numberFiltersHasBeenSet = false;

    Aws::Vector<ResourcesMapFilter> m_mapFilters;
    bool m_mapFiltersHasBeenSet = false;

    AllowedOperators m_operator{AllowedOperators::NOT_SET};
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
