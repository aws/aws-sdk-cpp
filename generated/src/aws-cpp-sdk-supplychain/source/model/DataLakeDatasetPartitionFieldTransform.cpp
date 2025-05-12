/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataLakeDatasetPartitionFieldTransform.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SupplyChain
{
namespace Model
{

DataLakeDatasetPartitionFieldTransform::DataLakeDatasetPartitionFieldTransform(JsonView jsonValue)
{
  *this = jsonValue;
}

DataLakeDatasetPartitionFieldTransform& DataLakeDatasetPartitionFieldTransform::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = DataLakeDatasetPartitionTransformTypeMapper::GetDataLakeDatasetPartitionTransformTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue DataLakeDatasetPartitionFieldTransform::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DataLakeDatasetPartitionTransformTypeMapper::GetNameForDataLakeDatasetPartitionTransformType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
