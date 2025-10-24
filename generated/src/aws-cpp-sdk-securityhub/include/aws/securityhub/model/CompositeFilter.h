/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AllowedOperators.h>
#include <aws/securityhub/model/OcsfStringFilter.h>
#include <aws/securityhub/model/OcsfDateFilter.h>
#include <aws/securityhub/model/OcsfBooleanFilter.h>
#include <aws/securityhub/model/OcsfNumberFilter.h>
#include <aws/securityhub/model/OcsfMapFilter.h>
#include <aws/securityhub/model/OcsfIpFilter.h>
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
   * <p>Enables the creation of filtering criteria for security
   * findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CompositeFilter">AWS
   * API Reference</a></p>
   */
  class CompositeFilter
  {
  public:
    AWS_SECURITYHUB_API CompositeFilter() = default;
    AWS_SECURITYHUB_API CompositeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API CompositeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables filtering based on string field values.</p>
     */
    inline const Aws::Vector<OcsfStringFilter>& GetStringFilters() const { return m_stringFilters; }
    inline bool StringFiltersHasBeenSet() const { return m_stringFiltersHasBeenSet; }
    template<typename StringFiltersT = Aws::Vector<OcsfStringFilter>>
    void SetStringFilters(StringFiltersT&& value) { m_stringFiltersHasBeenSet = true; m_stringFilters = std::forward<StringFiltersT>(value); }
    template<typename StringFiltersT = Aws::Vector<OcsfStringFilter>>
    CompositeFilter& WithStringFilters(StringFiltersT&& value) { SetStringFilters(std::forward<StringFiltersT>(value)); return *this;}
    template<typename StringFiltersT = OcsfStringFilter>
    CompositeFilter& AddStringFilters(StringFiltersT&& value) { m_stringFiltersHasBeenSet = true; m_stringFilters.emplace_back(std::forward<StringFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables filtering based on date and timestamp fields.</p>
     */
    inline const Aws::Vector<OcsfDateFilter>& GetDateFilters() const { return m_dateFilters; }
    inline bool DateFiltersHasBeenSet() const { return m_dateFiltersHasBeenSet; }
    template<typename DateFiltersT = Aws::Vector<OcsfDateFilter>>
    void SetDateFilters(DateFiltersT&& value) { m_dateFiltersHasBeenSet = true; m_dateFilters = std::forward<DateFiltersT>(value); }
    template<typename DateFiltersT = Aws::Vector<OcsfDateFilter>>
    CompositeFilter& WithDateFilters(DateFiltersT&& value) { SetDateFilters(std::forward<DateFiltersT>(value)); return *this;}
    template<typename DateFiltersT = OcsfDateFilter>
    CompositeFilter& AddDateFilters(DateFiltersT&& value) { m_dateFiltersHasBeenSet = true; m_dateFilters.emplace_back(std::forward<DateFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables filtering based on boolean field values.</p>
     */
    inline const Aws::Vector<OcsfBooleanFilter>& GetBooleanFilters() const { return m_booleanFilters; }
    inline bool BooleanFiltersHasBeenSet() const { return m_booleanFiltersHasBeenSet; }
    template<typename BooleanFiltersT = Aws::Vector<OcsfBooleanFilter>>
    void SetBooleanFilters(BooleanFiltersT&& value) { m_booleanFiltersHasBeenSet = true; m_booleanFilters = std::forward<BooleanFiltersT>(value); }
    template<typename BooleanFiltersT = Aws::Vector<OcsfBooleanFilter>>
    CompositeFilter& WithBooleanFilters(BooleanFiltersT&& value) { SetBooleanFilters(std::forward<BooleanFiltersT>(value)); return *this;}
    template<typename BooleanFiltersT = OcsfBooleanFilter>
    CompositeFilter& AddBooleanFilters(BooleanFiltersT&& value) { m_booleanFiltersHasBeenSet = true; m_booleanFilters.emplace_back(std::forward<BooleanFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables filtering based on numerical field values.</p>
     */
    inline const Aws::Vector<OcsfNumberFilter>& GetNumberFilters() const { return m_numberFilters; }
    inline bool NumberFiltersHasBeenSet() const { return m_numberFiltersHasBeenSet; }
    template<typename NumberFiltersT = Aws::Vector<OcsfNumberFilter>>
    void SetNumberFilters(NumberFiltersT&& value) { m_numberFiltersHasBeenSet = true; m_numberFilters = std::forward<NumberFiltersT>(value); }
    template<typename NumberFiltersT = Aws::Vector<OcsfNumberFilter>>
    CompositeFilter& WithNumberFilters(NumberFiltersT&& value) { SetNumberFilters(std::forward<NumberFiltersT>(value)); return *this;}
    template<typename NumberFiltersT = OcsfNumberFilter>
    CompositeFilter& AddNumberFilters(NumberFiltersT&& value) { m_numberFiltersHasBeenSet = true; m_numberFilters.emplace_back(std::forward<NumberFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables filtering based on map field values.</p>
     */
    inline const Aws::Vector<OcsfMapFilter>& GetMapFilters() const { return m_mapFilters; }
    inline bool MapFiltersHasBeenSet() const { return m_mapFiltersHasBeenSet; }
    template<typename MapFiltersT = Aws::Vector<OcsfMapFilter>>
    void SetMapFilters(MapFiltersT&& value) { m_mapFiltersHasBeenSet = true; m_mapFilters = std::forward<MapFiltersT>(value); }
    template<typename MapFiltersT = Aws::Vector<OcsfMapFilter>>
    CompositeFilter& WithMapFilters(MapFiltersT&& value) { SetMapFilters(std::forward<MapFiltersT>(value)); return *this;}
    template<typename MapFiltersT = OcsfMapFilter>
    CompositeFilter& AddMapFilters(MapFiltersT&& value) { m_mapFiltersHasBeenSet = true; m_mapFilters.emplace_back(std::forward<MapFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of IP address filters that allowing you to filter findings based on IP
     * address properties.</p>
     */
    inline const Aws::Vector<OcsfIpFilter>& GetIpFilters() const { return m_ipFilters; }
    inline bool IpFiltersHasBeenSet() const { return m_ipFiltersHasBeenSet; }
    template<typename IpFiltersT = Aws::Vector<OcsfIpFilter>>
    void SetIpFilters(IpFiltersT&& value) { m_ipFiltersHasBeenSet = true; m_ipFilters = std::forward<IpFiltersT>(value); }
    template<typename IpFiltersT = Aws::Vector<OcsfIpFilter>>
    CompositeFilter& WithIpFilters(IpFiltersT&& value) { SetIpFilters(std::forward<IpFiltersT>(value)); return *this;}
    template<typename IpFiltersT = OcsfIpFilter>
    CompositeFilter& AddIpFilters(IpFiltersT&& value) { m_ipFiltersHasBeenSet = true; m_ipFilters.emplace_back(std::forward<IpFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Provides an additional level of filtering, creating a three-layer nested
     * structure. The first layer is a <code>CompositeFilters</code> array with a
     * <code>CompositeOperator</code> (<code>AND</code>/<code>OR</code>). The second
     * layer is a <code>CompositeFilter</code> object that contains direct filters and
     * <code>NestedCompositeFilters</code>. The third layer is
     * <code>NestedCompositeFilters</code>, which contains additional filter
     * conditions. </p>
     */
    inline const Aws::Vector<CompositeFilter>& GetNestedCompositeFilters() const { return m_nestedCompositeFilters; }
    inline bool NestedCompositeFiltersHasBeenSet() const { return m_nestedCompositeFiltersHasBeenSet; }
    template<typename NestedCompositeFiltersT = Aws::Vector<CompositeFilter>>
    void SetNestedCompositeFilters(NestedCompositeFiltersT&& value) { m_nestedCompositeFiltersHasBeenSet = true; m_nestedCompositeFilters = std::forward<NestedCompositeFiltersT>(value); }
    template<typename NestedCompositeFiltersT = Aws::Vector<CompositeFilter>>
    CompositeFilter& WithNestedCompositeFilters(NestedCompositeFiltersT&& value) { SetNestedCompositeFilters(std::forward<NestedCompositeFiltersT>(value)); return *this;}
    template<typename NestedCompositeFiltersT = CompositeFilter>
    CompositeFilter& AddNestedCompositeFilters(NestedCompositeFiltersT&& value) { m_nestedCompositeFiltersHasBeenSet = true; m_nestedCompositeFilters.emplace_back(std::forward<NestedCompositeFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The logical operator used to combine multiple filter conditions.</p>
     */
    inline AllowedOperators GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(AllowedOperators value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline CompositeFilter& WithOperator(AllowedOperators value) { SetOperator(value); return *this;}
    ///@}
  private:

    Aws::Vector<OcsfStringFilter> m_stringFilters;
    bool m_stringFiltersHasBeenSet = false;

    Aws::Vector<OcsfDateFilter> m_dateFilters;
    bool m_dateFiltersHasBeenSet = false;

    Aws::Vector<OcsfBooleanFilter> m_booleanFilters;
    bool m_booleanFiltersHasBeenSet = false;

    Aws::Vector<OcsfNumberFilter> m_numberFilters;
    bool m_numberFiltersHasBeenSet = false;

    Aws::Vector<OcsfMapFilter> m_mapFilters;
    bool m_mapFiltersHasBeenSet = false;

    Aws::Vector<OcsfIpFilter> m_ipFilters;
    bool m_ipFiltersHasBeenSet = false;

    Aws::Vector<CompositeFilter> m_nestedCompositeFilters;
    bool m_nestedCompositeFiltersHasBeenSet = false;

    AllowedOperators m_operator{AllowedOperators::NOT_SET};
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
