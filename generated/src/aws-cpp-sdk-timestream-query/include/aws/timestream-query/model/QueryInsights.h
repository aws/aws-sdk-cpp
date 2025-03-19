/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/QueryInsightsMode.h>
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
   * <p> <code>QueryInsights</code> is a performance tuning feature that helps you
   * optimize your queries, reducing costs and improving performance. With
   * <code>QueryInsights</code>, you can assess the pruning efficiency of your
   * queries and identify areas for improvement to enhance query performance. With
   * <code>QueryInsights</code>, you can also analyze the effectiveness of your
   * queries in terms of temporal and spatial pruning, and identify opportunities to
   * improve performance. Specifically, you can evaluate how well your queries use
   * time-based and partition key-based indexing strategies to optimize data
   * retrieval. To optimize query performance, it's essential that you fine-tune both
   * the temporal and spatial parameters that govern query execution.</p> <p>The key
   * metrics provided by <code>QueryInsights</code> are
   * <code>QuerySpatialCoverage</code> and <code>QueryTemporalRange</code>.
   * <code>QuerySpatialCoverage</code> indicates how much of the spatial axis the
   * query scans, with lower values being more efficient.
   * <code>QueryTemporalRange</code> shows the time range scanned, with narrower
   * ranges being more performant.</p> <p> <b>Benefits of QueryInsights</b> </p>
   * <p>The following are the key benefits of using <code>QueryInsights</code>:</p>
   * <ul> <li> <p> <b>Identifying inefficient queries</b> –
   * <code>QueryInsights</code> provides information on the time-based and
   * attribute-based pruning of the tables accessed by the query. This information
   * helps you identify the tables that are sub-optimally accessed.</p> </li> <li>
   * <p> <b>Optimizing your data model and partitioning</b> – You can use the
   * <code>QueryInsights</code> information to access and fine-tune your data model
   * and partitioning strategy.</p> </li> <li> <p> <b>Tuning queries</b> –
   * <code>QueryInsights</code> highlights opportunities to use indexes more
   * effectively.</p> </li> </ul>  <p>The maximum number of <code>Query</code>
   * API requests you're allowed to make with <code>QueryInsights</code> enabled is 1
   * query per second (QPS). If you exceed this query rate, it might result in
   * throttling.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/QueryInsights">AWS
   * API Reference</a></p>
   */
  class QueryInsights
  {
  public:
    AWS_TIMESTREAMQUERY_API QueryInsights() = default;
    AWS_TIMESTREAMQUERY_API QueryInsights(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API QueryInsights& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides the following modes to enable <code>QueryInsights</code>:</p> <ul>
     * <li> <p> <code>ENABLED_WITH_RATE_CONTROL</code> – Enables
     * <code>QueryInsights</code> for the queries being processed. This mode also
     * includes a rate control mechanism, which limits the <code>QueryInsights</code>
     * feature to 1 query per second (QPS).</p> </li> <li> <p> <code>DISABLED</code> –
     * Disables <code>QueryInsights</code>.</p> </li> </ul>
     */
    inline QueryInsightsMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(QueryInsightsMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline QueryInsights& WithMode(QueryInsightsMode value) { SetMode(value); return *this;}
    ///@}
  private:

    QueryInsightsMode m_mode{QueryInsightsMode::NOT_SET};
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
