/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialStaticFileSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

GeospatialStaticFileSource::GeospatialStaticFileSource(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialStaticFileSource& GeospatialStaticFileSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StaticFileId"))
  {
    m_staticFileId = jsonValue.GetString("StaticFileId");
    m_staticFileIdHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialStaticFileSource::Jsonize() const
{
  JsonValue payload;

  if(m_staticFileIdHasBeenSet)
  {
   payload.WithString("StaticFileId", m_staticFileId);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
