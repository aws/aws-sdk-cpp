/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataLakeDatasetPartitionField.h>
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

DataLakeDatasetPartitionField::DataLakeDatasetPartitionField(JsonView jsonValue)
{
  *this = jsonValue;
}

DataLakeDatasetPartitionField& DataLakeDatasetPartitionField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("transform"))
  {
    m_transform = jsonValue.GetObject("transform");
    m_transformHasBeenSet = true;
  }
  return *this;
}

JsonValue DataLakeDatasetPartitionField::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_transformHasBeenSet)
  {
   payload.WithObject("transform", m_transform.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
