/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/NodeSignal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

NodeSignal::NodeSignal() : 
    m_nodeInstanceIdHasBeenSet(false),
    m_signal(NodeSignalValue::NOT_SET),
    m_signalHasBeenSet(false)
{
}

NodeSignal::NodeSignal(JsonView jsonValue) : 
    m_nodeInstanceIdHasBeenSet(false),
    m_signal(NodeSignalValue::NOT_SET),
    m_signalHasBeenSet(false)
{
  *this = jsonValue;
}

NodeSignal& NodeSignal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NodeInstanceId"))
  {
    m_nodeInstanceId = jsonValue.GetString("NodeInstanceId");

    m_nodeInstanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Signal"))
  {
    m_signal = NodeSignalValueMapper::GetNodeSignalValueForName(jsonValue.GetString("Signal"));

    m_signalHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeSignal::Jsonize() const
{
  JsonValue payload;

  if(m_nodeInstanceIdHasBeenSet)
  {
   payload.WithString("NodeInstanceId", m_nodeInstanceId);

  }

  if(m_signalHasBeenSet)
  {
   payload.WithString("Signal", NodeSignalValueMapper::GetNameForNodeSignalValue(m_signal));
  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
