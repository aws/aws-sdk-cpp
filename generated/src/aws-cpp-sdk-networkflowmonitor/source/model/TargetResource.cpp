/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/TargetResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFlowMonitor
{
namespace Model
{

TargetResource::TargetResource(JsonView jsonValue)
{
  *this = jsonValue;
}

TargetResource& TargetResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetIdentifier"))
  {
    m_targetIdentifier = jsonValue.GetObject("targetIdentifier");
    m_targetIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetResource::Jsonize() const
{
  JsonValue payload;

  if(m_targetIdentifierHasBeenSet)
  {
   payload.WithObject("targetIdentifier", m_targetIdentifier.Jsonize());

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
