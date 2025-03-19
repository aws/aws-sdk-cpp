/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/TableMetadata.h>
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

TableMetadata::TableMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

TableMetadata& TableMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("iceberg"))
  {
    m_iceberg = jsonValue.GetObject("iceberg");
    m_icebergHasBeenSet = true;
  }
  return *this;
}

JsonValue TableMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_icebergHasBeenSet)
  {
   payload.WithObject("iceberg", m_iceberg.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace S3Tables
} // namespace Aws
