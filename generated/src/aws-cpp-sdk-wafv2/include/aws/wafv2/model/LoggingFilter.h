/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/FilterBehavior.h>
#include <aws/wafv2/model/Filter.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Filtering that specifies which web requests are kept in the logs and which
   * are dropped, defined for a web ACL's <a>LoggingConfiguration</a>. </p> <p>You
   * can filter on the rule action and on the web request labels that were applied by
   * matching rules during web ACL evaluation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/LoggingFilter">AWS
   * API Reference</a></p>
   */
  class LoggingFilter
  {
  public:
    AWS_WAFV2_API LoggingFilter() = default;
    AWS_WAFV2_API LoggingFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API LoggingFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filters that you want to apply to the logs. </p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    LoggingFilter& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    LoggingFilter& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Default handling for logs that don't match any of the specified filtering
     * conditions. </p>
     */
    inline FilterBehavior GetDefaultBehavior() const { return m_defaultBehavior; }
    inline bool DefaultBehaviorHasBeenSet() const { return m_defaultBehaviorHasBeenSet; }
    inline void SetDefaultBehavior(FilterBehavior value) { m_defaultBehaviorHasBeenSet = true; m_defaultBehavior = value; }
    inline LoggingFilter& WithDefaultBehavior(FilterBehavior value) { SetDefaultBehavior(value); return *this;}
    ///@}
  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    FilterBehavior m_defaultBehavior{FilterBehavior::NOT_SET};
    bool m_defaultBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
