/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/BridgeFlowOutput.h>
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

BridgeFlowOutput::BridgeFlowOutput() : 
    m_flowArnHasBeenSet(false),
    m_flowSourceArnHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

BridgeFlowOutput::BridgeFlowOutput(JsonView jsonValue) : 
    m_flowArnHasBeenSet(false),
    m_flowSourceArnHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

BridgeFlowOutput& BridgeFlowOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("flowArn"))
  {
    m_flowArn = jsonValue.GetString("flowArn");

    m_flowArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("flowSourceArn"))
  {
    m_flowSourceArn = jsonValue.GetString("flowSourceArn");

    m_flowSourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue BridgeFlowOutput::Jsonize() const
{
  JsonValue payload;

  if(m_flowArnHasBeenSet)
  {
   payload.WithString("flowArn", m_flowArn);

  }

  if(m_flowSourceArnHasBeenSet)
  {
   payload.WithString("flowSourceArn", m_flowSourceArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
