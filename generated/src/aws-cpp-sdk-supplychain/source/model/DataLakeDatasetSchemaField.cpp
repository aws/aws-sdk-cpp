/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataLakeDatasetSchemaField.h>
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

DataLakeDatasetSchemaField::DataLakeDatasetSchemaField(JsonView jsonValue)
{
  *this = jsonValue;
}

DataLakeDatasetSchemaField& DataLakeDatasetSchemaField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = DataLakeDatasetSchemaFieldTypeMapper::GetDataLakeDatasetSchemaFieldTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isRequired"))
  {
    m_isRequired = jsonValue.GetBool("isRequired");
    m_isRequiredHasBeenSet = true;
  }
  return *this;
}

JsonValue DataLakeDatasetSchemaField::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DataLakeDatasetSchemaFieldTypeMapper::GetNameForDataLakeDatasetSchemaFieldType(m_type));
  }

  if(m_isRequiredHasBeenSet)
  {
   payload.WithBool("isRequired", m_isRequired);

  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
