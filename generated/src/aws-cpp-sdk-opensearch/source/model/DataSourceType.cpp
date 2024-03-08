/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DataSourceType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

DataSourceType::DataSourceType() : 
    m_s3GlueDataCatalogHasBeenSet(false)
{
}

DataSourceType::DataSourceType(JsonView jsonValue) : 
    m_s3GlueDataCatalogHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceType& DataSourceType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3GlueDataCatalog"))
  {
    m_s3GlueDataCatalog = jsonValue.GetObject("S3GlueDataCatalog");

    m_s3GlueDataCatalogHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceType::Jsonize() const
{
  JsonValue payload;

  if(m_s3GlueDataCatalogHasBeenSet)
  {
   payload.WithObject("S3GlueDataCatalog", m_s3GlueDataCatalog.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
