/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/model/DataLakeDatasetPartitionTransformType.h>
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
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The detail of the partition field transformation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataLakeDatasetPartitionFieldTransform">AWS
   * API Reference</a></p>
   */
  class DataLakeDatasetPartitionFieldTransform
  {
  public:
    AWS_SUPPLYCHAIN_API DataLakeDatasetPartitionFieldTransform() = default;
    AWS_SUPPLYCHAIN_API DataLakeDatasetPartitionFieldTransform(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataLakeDatasetPartitionFieldTransform& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of partitioning transformation for this field. The available options
     * are:</p> <ul> <li> <p> <b>IDENTITY</b> - Partitions data on a given field by its
     * exact values.</p> </li> <li> <p> <b>YEAR</b> - Partitions data on a timestamp
     * field using year granularity.</p> </li> <li> <p> <b>MONTH</b> - Partitions data
     * on a timestamp field using month granularity.</p> </li> <li> <p> <b>DAY</b> -
     * Partitions data on a timestamp field using day granularity.</p> </li> <li> <p>
     * <b>HOUR</b> - Partitions data on a timestamp field using hour granularity.</p>
     * </li> </ul>
     */
    inline DataLakeDatasetPartitionTransformType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DataLakeDatasetPartitionTransformType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DataLakeDatasetPartitionFieldTransform& WithType(DataLakeDatasetPartitionTransformType value) { SetType(value); return *this;}
    ///@}
  private:

    DataLakeDatasetPartitionTransformType m_type{DataLakeDatasetPartitionTransformType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
