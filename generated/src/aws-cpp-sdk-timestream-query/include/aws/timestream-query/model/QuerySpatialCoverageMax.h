/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Provides insights into the table with the most sub-optimal spatial range
   * scanned by your query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/QuerySpatialCoverageMax">AWS
   * API Reference</a></p>
   */
  class QuerySpatialCoverageMax
  {
  public:
    AWS_TIMESTREAMQUERY_API QuerySpatialCoverageMax() = default;
    AWS_TIMESTREAMQUERY_API QuerySpatialCoverageMax(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API QuerySpatialCoverageMax& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum ratio of spatial coverage.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline QuerySpatialCoverageMax& WithValue(double value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table with the most sub-optimal spatial
     * pruning.</p>
     */
    inline const Aws::String& GetTableArn() const { return m_tableArn; }
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
    template<typename TableArnT = Aws::String>
    void SetTableArn(TableArnT&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::forward<TableArnT>(value); }
    template<typename TableArnT = Aws::String>
    QuerySpatialCoverageMax& WithTableArn(TableArnT&& value) { SetTableArn(std::forward<TableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The partition key used for partitioning, which can be a default
     * <code>measure_name</code> or a <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/customer-defined-partition-keys.html">customer
     * defined partition key</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionKey() const { return m_partitionKey; }
    inline bool PartitionKeyHasBeenSet() const { return m_partitionKeyHasBeenSet; }
    template<typename PartitionKeyT = Aws::Vector<Aws::String>>
    void SetPartitionKey(PartitionKeyT&& value) { m_partitionKeyHasBeenSet = true; m_partitionKey = std::forward<PartitionKeyT>(value); }
    template<typename PartitionKeyT = Aws::Vector<Aws::String>>
    QuerySpatialCoverageMax& WithPartitionKey(PartitionKeyT&& value) { SetPartitionKey(std::forward<PartitionKeyT>(value)); return *this;}
    template<typename PartitionKeyT = Aws::String>
    QuerySpatialCoverageMax& AddPartitionKey(PartitionKeyT&& value) { m_partitionKeyHasBeenSet = true; m_partitionKey.emplace_back(std::forward<PartitionKeyT>(value)); return *this; }
    ///@}
  private:

    double m_value{0.0};
    bool m_valueHasBeenSet = false;

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_partitionKey;
    bool m_partitionKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
