/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/DescribeActivationsFilterKeys.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Filter for the DescribeActivation API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DescribeActivationsFilter">AWS
   * API Reference</a></p>
   */
  class DescribeActivationsFilter
  {
  public:
    AWS_SSM_API DescribeActivationsFilter() = default;
    AWS_SSM_API DescribeActivationsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API DescribeActivationsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter.</p>
     */
    inline DescribeActivationsFilterKeys GetFilterKey() const { return m_filterKey; }
    inline bool FilterKeyHasBeenSet() const { return m_filterKeyHasBeenSet; }
    inline void SetFilterKey(DescribeActivationsFilterKeys value) { m_filterKeyHasBeenSet = true; m_filterKey = value; }
    inline DescribeActivationsFilter& WithFilterKey(DescribeActivationsFilterKeys value) { SetFilterKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterValues() const { return m_filterValues; }
    inline bool FilterValuesHasBeenSet() const { return m_filterValuesHasBeenSet; }
    template<typename FilterValuesT = Aws::Vector<Aws::String>>
    void SetFilterValues(FilterValuesT&& value) { m_filterValuesHasBeenSet = true; m_filterValues = std::forward<FilterValuesT>(value); }
    template<typename FilterValuesT = Aws::Vector<Aws::String>>
    DescribeActivationsFilter& WithFilterValues(FilterValuesT&& value) { SetFilterValues(std::forward<FilterValuesT>(value)); return *this;}
    template<typename FilterValuesT = Aws::String>
    DescribeActivationsFilter& AddFilterValues(FilterValuesT&& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace_back(std::forward<FilterValuesT>(value)); return *this; }
    ///@}
  private:

    DescribeActivationsFilterKeys m_filterKey{DescribeActivationsFilterKeys::NOT_SET};
    bool m_filterKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterValues;
    bool m_filterValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
