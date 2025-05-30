﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SpatialStaticFile.h>
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

SpatialStaticFile::SpatialStaticFile(JsonView jsonValue)
{
  *this = jsonValue;
}

SpatialStaticFile& SpatialStaticFile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StaticFileId"))
  {
    m_staticFileId = jsonValue.GetString("StaticFileId");
    m_staticFileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetObject("Source");
    m_sourceHasBeenSet = true;
  }
  return *this;
}

JsonValue SpatialStaticFile::Jsonize() const
{
  JsonValue payload;

  if(m_staticFileIdHasBeenSet)
  {
   payload.WithString("StaticFileId", m_staticFileId);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
