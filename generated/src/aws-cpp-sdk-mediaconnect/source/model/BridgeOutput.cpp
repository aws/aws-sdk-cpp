/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/BridgeOutput.h>
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

BridgeOutput::BridgeOutput() : 
    m_flowOutputHasBeenSet(false),
    m_networkOutputHasBeenSet(false)
{
}

BridgeOutput::BridgeOutput(JsonView jsonValue) : 
    m_flowOutputHasBeenSet(false),
    m_networkOutputHasBeenSet(false)
{
  *this = jsonValue;
}

BridgeOutput& BridgeOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("flowOutput"))
  {
    m_flowOutput = jsonValue.GetObject("flowOutput");

    m_flowOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkOutput"))
  {
    m_networkOutput = jsonValue.GetObject("networkOutput");

    m_networkOutputHasBeenSet = true;
  }

  return *this;
}

JsonValue BridgeOutput::Jsonize() const
{
  JsonValue payload;

  if(m_flowOutputHasBeenSet)
  {
   payload.WithObject("flowOutput", m_flowOutput.Jsonize());

  }

  if(m_networkOutputHasBeenSet)
  {
   payload.WithObject("networkOutput", m_networkOutput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
