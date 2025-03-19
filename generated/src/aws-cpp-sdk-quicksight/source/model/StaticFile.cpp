/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/StaticFile.h>
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

StaticFile::StaticFile(JsonView jsonValue)
{
  *this = jsonValue;
}

StaticFile& StaticFile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImageStaticFile"))
  {
    m_imageStaticFile = jsonValue.GetObject("ImageStaticFile");
    m_imageStaticFileHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SpatialStaticFile"))
  {
    m_spatialStaticFile = jsonValue.GetObject("SpatialStaticFile");
    m_spatialStaticFileHasBeenSet = true;
  }
  return *this;
}

JsonValue StaticFile::Jsonize() const
{
  JsonValue payload;

  if(m_imageStaticFileHasBeenSet)
  {
   payload.WithObject("ImageStaticFile", m_imageStaticFile.Jsonize());

  }

  if(m_spatialStaticFileHasBeenSet)
  {
   payload.WithObject("SpatialStaticFile", m_spatialStaticFile.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
