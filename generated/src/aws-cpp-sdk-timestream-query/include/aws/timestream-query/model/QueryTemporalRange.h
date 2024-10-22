/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/QueryTemporalRangeMax.h>
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
   * <p>Provides insights into the temporal range of the query, including the table
   * with the largest (max) time range.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/QueryTemporalRange">AWS
   * API Reference</a></p>
   */
  class QueryTemporalRange
  {
  public:
    AWS_TIMESTREAMQUERY_API QueryTemporalRange();
    AWS_TIMESTREAMQUERY_API QueryTemporalRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API QueryTemporalRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Encapsulates the following properties that provide insights into the most
     * sub-optimal performing table on the temporal axis:</p> <ul> <li> <p>
     * <code>Value</code> – The maximum duration in nanoseconds between the start and
     * end of the query.</p> </li> <li> <p> <code>TableArn</code> – The Amazon Resource
     * Name (ARN) of the table which is queried with the largest time range.</p> </li>
     * </ul>
     */
    inline const QueryTemporalRangeMax& GetMax() const{ return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    inline void SetMax(const QueryTemporalRangeMax& value) { m_maxHasBeenSet = true; m_max = value; }
    inline void SetMax(QueryTemporalRangeMax&& value) { m_maxHasBeenSet = true; m_max = std::move(value); }
    inline QueryTemporalRange& WithMax(const QueryTemporalRangeMax& value) { SetMax(value); return *this;}
    inline QueryTemporalRange& WithMax(QueryTemporalRangeMax&& value) { SetMax(std::move(value)); return *this;}
    ///@}
  private:

    QueryTemporalRangeMax m_max;
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
