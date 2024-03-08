/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/MapRunRedrivenEventDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

MapRunRedrivenEventDetails::MapRunRedrivenEventDetails() : 
    m_mapRunArnHasBeenSet(false),
    m_redriveCount(0),
    m_redriveCountHasBeenSet(false)
{
}

MapRunRedrivenEventDetails::MapRunRedrivenEventDetails(JsonView jsonValue) : 
    m_mapRunArnHasBeenSet(false),
    m_redriveCount(0),
    m_redriveCountHasBeenSet(false)
{
  *this = jsonValue;
}

MapRunRedrivenEventDetails& MapRunRedrivenEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mapRunArn"))
  {
    m_mapRunArn = jsonValue.GetString("mapRunArn");

    m_mapRunArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("redriveCount"))
  {
    m_redriveCount = jsonValue.GetInteger("redriveCount");

    m_redriveCountHasBeenSet = true;
  }

  return *this;
}

JsonValue MapRunRedrivenEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_mapRunArnHasBeenSet)
  {
   payload.WithString("mapRunArn", m_mapRunArn);

  }

  if(m_redriveCountHasBeenSet)
  {
   payload.WithInteger("redriveCount", m_redriveCount);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
