/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/ResourceNotFoundException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

ResourceNotFoundException::ResourceNotFoundException() : 
    m_messageHasBeenSet(false),
    m_resourceTypeNotFound(ResourceTypeNotFound::NOT_SET),
    m_resourceTypeNotFoundHasBeenSet(false)
{
}

ResourceNotFoundException::ResourceNotFoundException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_resourceTypeNotFound(ResourceTypeNotFound::NOT_SET),
    m_resourceTypeNotFoundHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceNotFoundException& ResourceNotFoundException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceTypeNotFound"))
  {
    m_resourceTypeNotFound = ResourceTypeNotFoundMapper::GetResourceTypeNotFoundForName(jsonValue.GetString("ResourceTypeNotFound"));

    m_resourceTypeNotFoundHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceNotFoundException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_resourceTypeNotFoundHasBeenSet)
  {
   payload.WithString("ResourceTypeNotFound", ResourceTypeNotFoundMapper::GetNameForResourceTypeNotFound(m_resourceTypeNotFound));
  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
