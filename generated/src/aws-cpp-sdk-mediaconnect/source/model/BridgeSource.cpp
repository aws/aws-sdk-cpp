/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/BridgeSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

BridgeSource::BridgeSource() : 
    m_flowSourceHasBeenSet(false),
    m_networkSourceHasBeenSet(false)
{
}

BridgeSource::BridgeSource(JsonView jsonValue) : 
    m_flowSourceHasBeenSet(false),
    m_networkSourceHasBeenSet(false)
{
  *this = jsonValue;
}

BridgeSource& BridgeSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("flowSource"))
  {
    m_flowSource = jsonValue.GetObject("flowSource");

    m_flowSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkSource"))
  {
    m_networkSource = jsonValue.GetObject("networkSource");

    m_networkSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue BridgeSource::Jsonize() const
{
  JsonValue payload;

  if(m_flowSourceHasBeenSet)
  {
   payload.WithObject("flowSource", m_flowSource.Jsonize());

  }

  if(m_networkSourceHasBeenSet)
  {
   payload.WithObject("networkSource", m_networkSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
