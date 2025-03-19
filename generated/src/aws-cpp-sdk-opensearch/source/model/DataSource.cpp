/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DataSource.h>
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

DataSource::DataSource(JsonView jsonValue)
{
  *this = jsonValue;
}

DataSource& DataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataSourceArn"))
  {
    m_dataSourceArn = jsonValue.GetString("dataSourceArn");
    m_dataSourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataSourceDescription"))
  {
    m_dataSourceDescription = jsonValue.GetString("dataSourceDescription");
    m_dataSourceDescriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSource::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceArnHasBeenSet)
  {
   payload.WithString("dataSourceArn", m_dataSourceArn);

  }

  if(m_dataSourceDescriptionHasBeenSet)
  {
   payload.WithString("dataSourceDescription", m_dataSourceDescription);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
