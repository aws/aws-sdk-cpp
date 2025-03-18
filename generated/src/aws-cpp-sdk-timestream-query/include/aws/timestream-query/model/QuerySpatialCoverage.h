/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/QuerySpatialCoverageMax.h>
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
   * <p>Provides insights into the spatial coverage of the query, including the table
   * with sub-optimal (max) spatial pruning. This information can help you identify
   * areas for improvement in your partitioning strategy to enhance spatial
   * pruning</p> <p>For example, you can do the following with the
   * <code>QuerySpatialCoverage</code> information:</p> <ul> <li> <p>Add measure_name
   * or use <a
   * href="https://docs.aws.amazon.com/timestream/latest/developerguide/customer-defined-partition-keys.html">customer-defined
   * partition key</a> (CDPK) predicates.</p> </li> <li> <p>If you've already done
   * the preceding action, remove functions around them or clauses, such as
   * <code>LIKE</code>.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/QuerySpatialCoverage">AWS
   * API Reference</a></p>
   */
  class QuerySpatialCoverage
  {
  public:
    AWS_TIMESTREAMQUERY_API QuerySpatialCoverage() = default;
    AWS_TIMESTREAMQUERY_API QuerySpatialCoverage(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API QuerySpatialCoverage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides insights into the spatial coverage of the executed query and the
     * table with the most inefficient spatial pruning.</p> <ul> <li> <p>
     * <code>Value</code> – The maximum ratio of spatial coverage.</p> </li> <li> <p>
     * <code>TableArn</code> – The Amazon Resource Name (ARN) of the table with
     * sub-optimal spatial pruning.</p> </li> <li> <p> <code>PartitionKey</code> – The
     * partition key used for partitioning, which can be a default
     * <code>measure_name</code> or a CDPK.</p> </li> </ul>
     */
    inline const QuerySpatialCoverageMax& GetMax() const { return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    template<typename MaxT = QuerySpatialCoverageMax>
    void SetMax(MaxT&& value) { m_maxHasBeenSet = true; m_max = std::forward<MaxT>(value); }
    template<typename MaxT = QuerySpatialCoverageMax>
    QuerySpatialCoverage& WithMax(MaxT&& value) { SetMax(std::forward<MaxT>(value)); return *this;}
    ///@}
  private:

    QuerySpatialCoverageMax m_max;
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
