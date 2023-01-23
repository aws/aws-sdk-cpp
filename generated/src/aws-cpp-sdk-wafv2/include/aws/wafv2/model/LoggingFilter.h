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
    AWS_WAFV2_API LoggingFilter();
    AWS_WAFV2_API LoggingFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API LoggingFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The filters that you want to apply to the logs. </p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters that you want to apply to the logs. </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters that you want to apply to the logs. </p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters that you want to apply to the logs. </p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters that you want to apply to the logs. </p>
     */
    inline LoggingFilter& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters that you want to apply to the logs. </p>
     */
    inline LoggingFilter& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters that you want to apply to the logs. </p>
     */
    inline LoggingFilter& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters that you want to apply to the logs. </p>
     */
    inline LoggingFilter& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>Default handling for logs that don't match any of the specified filtering
     * conditions. </p>
     */
    inline const FilterBehavior& GetDefaultBehavior() const{ return m_defaultBehavior; }

    /**
     * <p>Default handling for logs that don't match any of the specified filtering
     * conditions. </p>
     */
    inline bool DefaultBehaviorHasBeenSet() const { return m_defaultBehaviorHasBeenSet; }

    /**
     * <p>Default handling for logs that don't match any of the specified filtering
     * conditions. </p>
     */
    inline void SetDefaultBehavior(const FilterBehavior& value) { m_defaultBehaviorHasBeenSet = true; m_defaultBehavior = value; }

    /**
     * <p>Default handling for logs that don't match any of the specified filtering
     * conditions. </p>
     */
    inline void SetDefaultBehavior(FilterBehavior&& value) { m_defaultBehaviorHasBeenSet = true; m_defaultBehavior = std::move(value); }

    /**
     * <p>Default handling for logs that don't match any of the specified filtering
     * conditions. </p>
     */
    inline LoggingFilter& WithDefaultBehavior(const FilterBehavior& value) { SetDefaultBehavior(value); return *this;}

    /**
     * <p>Default handling for logs that don't match any of the specified filtering
     * conditions. </p>
     */
    inline LoggingFilter& WithDefaultBehavior(FilterBehavior&& value) { SetDefaultBehavior(std::move(value)); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    FilterBehavior m_defaultBehavior;
    bool m_defaultBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
