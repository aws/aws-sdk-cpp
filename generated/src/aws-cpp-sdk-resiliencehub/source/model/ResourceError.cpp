/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ResourceError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

ResourceError::ResourceError() : 
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

ResourceError::ResourceError(JsonView jsonValue) : 
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceError& ResourceError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logicalResourceId"))
  {
    m_logicalResourceId = jsonValue.GetString("logicalResourceId");

    m_logicalResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("physicalResourceId"))
  {
    m_physicalResourceId = jsonValue.GetString("physicalResourceId");

    m_physicalResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceError::Jsonize() const
{
  JsonValue payload;

  if(m_logicalResourceIdHasBeenSet)
  {
   payload.WithString("logicalResourceId", m_logicalResourceId);

  }

  if(m_physicalResourceIdHasBeenSet)
  {
   payload.WithString("physicalResourceId", m_physicalResourceId);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
