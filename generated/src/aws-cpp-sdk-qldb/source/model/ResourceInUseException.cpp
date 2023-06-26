/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/ResourceInUseException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDB
{
namespace Model
{

ResourceInUseException::ResourceInUseException() : 
    m_messageHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
}

ResourceInUseException::ResourceInUseException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceInUseException& ResourceInUseException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceName"))
  {
    m_resourceName = jsonValue.GetString("ResourceName");

    m_resourceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceInUseException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("ResourceName", m_resourceName);

  }

  return payload;
}

} // namespace Model
} // namespace QLDB
} // namespace Aws
