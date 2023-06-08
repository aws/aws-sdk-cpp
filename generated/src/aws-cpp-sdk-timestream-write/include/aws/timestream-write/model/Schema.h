/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-write/model/PartitionKey.h>
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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p> A Schema specifies the expected data model of the table. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/Schema">AWS
   * API Reference</a></p>
   */
  class Schema
  {
  public:
    AWS_TIMESTREAMWRITE_API Schema();
    AWS_TIMESTREAMWRITE_API Schema(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Schema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A non-empty list of partition keys defining the attributes used to partition
     * the table data. The order of the list determines the partition hierarchy. The
     * name and type of each partition key as well as the partition key order cannot be
     * changed after the table is created. However, the enforcement level of each
     * partition key can be changed. </p>
     */
    inline const Aws::Vector<PartitionKey>& GetCompositePartitionKey() const{ return m_compositePartitionKey; }

    /**
     * <p>A non-empty list of partition keys defining the attributes used to partition
     * the table data. The order of the list determines the partition hierarchy. The
     * name and type of each partition key as well as the partition key order cannot be
     * changed after the table is created. However, the enforcement level of each
     * partition key can be changed. </p>
     */
    inline bool CompositePartitionKeyHasBeenSet() const { return m_compositePartitionKeyHasBeenSet; }

    /**
     * <p>A non-empty list of partition keys defining the attributes used to partition
     * the table data. The order of the list determines the partition hierarchy. The
     * name and type of each partition key as well as the partition key order cannot be
     * changed after the table is created. However, the enforcement level of each
     * partition key can be changed. </p>
     */
    inline void SetCompositePartitionKey(const Aws::Vector<PartitionKey>& value) { m_compositePartitionKeyHasBeenSet = true; m_compositePartitionKey = value; }

    /**
     * <p>A non-empty list of partition keys defining the attributes used to partition
     * the table data. The order of the list determines the partition hierarchy. The
     * name and type of each partition key as well as the partition key order cannot be
     * changed after the table is created. However, the enforcement level of each
     * partition key can be changed. </p>
     */
    inline void SetCompositePartitionKey(Aws::Vector<PartitionKey>&& value) { m_compositePartitionKeyHasBeenSet = true; m_compositePartitionKey = std::move(value); }

    /**
     * <p>A non-empty list of partition keys defining the attributes used to partition
     * the table data. The order of the list determines the partition hierarchy. The
     * name and type of each partition key as well as the partition key order cannot be
     * changed after the table is created. However, the enforcement level of each
     * partition key can be changed. </p>
     */
    inline Schema& WithCompositePartitionKey(const Aws::Vector<PartitionKey>& value) { SetCompositePartitionKey(value); return *this;}

    /**
     * <p>A non-empty list of partition keys defining the attributes used to partition
     * the table data. The order of the list determines the partition hierarchy. The
     * name and type of each partition key as well as the partition key order cannot be
     * changed after the table is created. However, the enforcement level of each
     * partition key can be changed. </p>
     */
    inline Schema& WithCompositePartitionKey(Aws::Vector<PartitionKey>&& value) { SetCompositePartitionKey(std::move(value)); return *this;}

    /**
     * <p>A non-empty list of partition keys defining the attributes used to partition
     * the table data. The order of the list determines the partition hierarchy. The
     * name and type of each partition key as well as the partition key order cannot be
     * changed after the table is created. However, the enforcement level of each
     * partition key can be changed. </p>
     */
    inline Schema& AddCompositePartitionKey(const PartitionKey& value) { m_compositePartitionKeyHasBeenSet = true; m_compositePartitionKey.push_back(value); return *this; }

    /**
     * <p>A non-empty list of partition keys defining the attributes used to partition
     * the table data. The order of the list determines the partition hierarchy. The
     * name and type of each partition key as well as the partition key order cannot be
     * changed after the table is created. However, the enforcement level of each
     * partition key can be changed. </p>
     */
    inline Schema& AddCompositePartitionKey(PartitionKey&& value) { m_compositePartitionKeyHasBeenSet = true; m_compositePartitionKey.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PartitionKey> m_compositePartitionKey;
    bool m_compositePartitionKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
