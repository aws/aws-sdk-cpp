/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/QueryExecutionMode.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A structure that describes the query execution options.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/QueryExecutionOptions">AWS
   * API Reference</a></p>
   */
  class QueryExecutionOptions
  {
  public:
    AWS_QUICKSIGHT_API QueryExecutionOptions();
    AWS_QUICKSIGHT_API QueryExecutionOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API QueryExecutionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure that describes the query execution mode.</p>
     */
    inline const QueryExecutionMode& GetQueryExecutionMode() const{ return m_queryExecutionMode; }
    inline bool QueryExecutionModeHasBeenSet() const { return m_queryExecutionModeHasBeenSet; }
    inline void SetQueryExecutionMode(const QueryExecutionMode& value) { m_queryExecutionModeHasBeenSet = true; m_queryExecutionMode = value; }
    inline void SetQueryExecutionMode(QueryExecutionMode&& value) { m_queryExecutionModeHasBeenSet = true; m_queryExecutionMode = std::move(value); }
    inline QueryExecutionOptions& WithQueryExecutionMode(const QueryExecutionMode& value) { SetQueryExecutionMode(value); return *this;}
    inline QueryExecutionOptions& WithQueryExecutionMode(QueryExecutionMode&& value) { SetQueryExecutionMode(std::move(value)); return *this;}
    ///@}
  private:

    QueryExecutionMode m_queryExecutionMode;
    bool m_queryExecutionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
