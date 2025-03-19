/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/ScheduledQueryInsightsMode.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>Encapsulates settings for enabling <code>QueryInsights</code> on an
   * <code>ExecuteScheduledQueryRequest</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ScheduledQueryInsights">AWS
   * API Reference</a></p>
   */
  class ScheduledQueryInsights
  {
  public:
    AWS_TIMESTREAMQUERY_API ScheduledQueryInsights() = default;
    AWS_TIMESTREAMQUERY_API ScheduledQueryInsights(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ScheduledQueryInsights& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides the following modes to enable
     * <code>ScheduledQueryInsights</code>:</p> <ul> <li> <p>
     * <code>ENABLED_WITH_RATE_CONTROL</code> – Enables
     * <code>ScheduledQueryInsights</code> for the queries being processed. This mode
     * also includes a rate control mechanism, which limits the
     * <code>QueryInsights</code> feature to 1 query per second (QPS).</p> </li> <li>
     * <p> <code>DISABLED</code> – Disables <code>ScheduledQueryInsights</code>.</p>
     * </li> </ul>
     */
    inline ScheduledQueryInsightsMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(ScheduledQueryInsightsMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline ScheduledQueryInsights& WithMode(ScheduledQueryInsightsMode value) { SetMode(value); return *this;}
    ///@}
  private:

    ScheduledQueryInsightsMode m_mode{ScheduledQueryInsightsMode::NOT_SET};
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
