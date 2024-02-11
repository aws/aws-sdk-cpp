/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/S3GlueDataCatalog.h>
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

S3GlueDataCatalog::S3GlueDataCatalog() : 
    m_roleArnHasBeenSet(false)
{
}

S3GlueDataCatalog::S3GlueDataCatalog(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

S3GlueDataCatalog& S3GlueDataCatalog::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue S3GlueDataCatalog::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
