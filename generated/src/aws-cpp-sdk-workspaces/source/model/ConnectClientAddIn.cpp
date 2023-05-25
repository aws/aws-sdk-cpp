/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ConnectClientAddIn.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

ConnectClientAddIn::ConnectClientAddIn() : 
    m_addInIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uRLHasBeenSet(false)
{
}

ConnectClientAddIn::ConnectClientAddIn(JsonView jsonValue) : 
    m_addInIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uRLHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectClientAddIn& ConnectClientAddIn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AddInId"))
  {
    m_addInId = jsonValue.GetString("AddInId");

    m_addInIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("URL"))
  {
    m_uRL = jsonValue.GetString("URL");

    m_uRLHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectClientAddIn::Jsonize() const
{
  JsonValue payload;

  if(m_addInIdHasBeenSet)
  {
   payload.WithString("AddInId", m_addInId);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_uRLHasBeenSet)
  {
   payload.WithString("URL", m_uRL);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
