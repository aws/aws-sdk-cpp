/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/MapIterationEventDetails.h>
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

MapIterationEventDetails::MapIterationEventDetails() : 
    m_nameHasBeenSet(false),
    m_index(0),
    m_indexHasBeenSet(false)
{
}

MapIterationEventDetails::MapIterationEventDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_index(0),
    m_indexHasBeenSet(false)
{
  *this = jsonValue;
}

MapIterationEventDetails& MapIterationEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("index"))
  {
    m_index = jsonValue.GetInteger("index");

    m_indexHasBeenSet = true;
  }

  return *this;
}

JsonValue MapIterationEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_indexHasBeenSet)
  {
   payload.WithInteger("index", m_index);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
