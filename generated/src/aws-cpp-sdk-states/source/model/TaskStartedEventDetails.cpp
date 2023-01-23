/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/TaskStartedEventDetails.h>
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

TaskStartedEventDetails::TaskStartedEventDetails() : 
    m_resourceTypeHasBeenSet(false),
    m_resourceHasBeenSet(false)
{
}

TaskStartedEventDetails::TaskStartedEventDetails(JsonView jsonValue) : 
    m_resourceTypeHasBeenSet(false),
    m_resourceHasBeenSet(false)
{
  *this = jsonValue;
}

TaskStartedEventDetails& TaskStartedEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");

    m_resourceHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskStartedEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
