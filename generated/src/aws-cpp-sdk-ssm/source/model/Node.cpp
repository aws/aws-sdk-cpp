/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/Node.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

Node::Node(JsonView jsonValue)
{
  *this = jsonValue;
}

Node& Node::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CaptureTime"))
  {
    m_captureTime = jsonValue.GetDouble("CaptureTime");
    m_captureTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetObject("Owner");
    m_ownerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NodeType"))
  {
    m_nodeType = jsonValue.GetObject("NodeType");
    m_nodeTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue Node::Jsonize() const
{
  JsonValue payload;

  if(m_captureTimeHasBeenSet)
  {
   payload.WithDouble("CaptureTime", m_captureTime.SecondsWithMSPrecision());
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithObject("Owner", m_owner.Jsonize());

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithObject("NodeType", m_nodeType.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
