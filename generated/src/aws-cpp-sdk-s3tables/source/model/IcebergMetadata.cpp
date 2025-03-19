/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/IcebergMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Tables
{
namespace Model
{

IcebergMetadata::IcebergMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

IcebergMetadata& IcebergMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("schema"))
  {
    m_schema = jsonValue.GetObject("schema");
    m_schemaHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_schemaHasBeenSet)
  {
   payload.WithObject("schema", m_schema.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace S3Tables
} // namespace Aws
