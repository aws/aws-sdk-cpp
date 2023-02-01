/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/EventReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

EventReference::EventReference() : 
    m_relatedItemIdHasBeenSet(false),
    m_resourceHasBeenSet(false)
{
}

EventReference::EventReference(JsonView jsonValue) : 
    m_relatedItemIdHasBeenSet(false),
    m_resourceHasBeenSet(false)
{
  *this = jsonValue;
}

EventReference& EventReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("relatedItemId"))
  {
    m_relatedItemId = jsonValue.GetString("relatedItemId");

    m_relatedItemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");

    m_resourceHasBeenSet = true;
  }

  return *this;
}

JsonValue EventReference::Jsonize() const
{
  JsonValue payload;

  if(m_relatedItemIdHasBeenSet)
  {
   payload.WithString("relatedItemId", m_relatedItemId);

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
