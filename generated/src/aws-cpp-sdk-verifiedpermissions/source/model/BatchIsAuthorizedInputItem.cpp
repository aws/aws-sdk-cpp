/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/BatchIsAuthorizedInputItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

BatchIsAuthorizedInputItem::BatchIsAuthorizedInputItem() : 
    m_principalHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

BatchIsAuthorizedInputItem::BatchIsAuthorizedInputItem(JsonView jsonValue) : 
    m_principalHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_contextHasBeenSet(false)
{
  *this = jsonValue;
}

BatchIsAuthorizedInputItem& BatchIsAuthorizedInputItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("principal"))
  {
    m_principal = jsonValue.GetObject("principal");

    m_principalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetObject("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetObject("resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("context"))
  {
    m_context = jsonValue.GetObject("context");

    m_contextHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchIsAuthorizedInputItem::Jsonize() const
{
  JsonValue payload;

  if(m_principalHasBeenSet)
  {
   payload.WithObject("principal", m_principal.Jsonize());

  }

  if(m_actionHasBeenSet)
  {
   payload.WithObject("action", m_action.Jsonize());

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("resource", m_resource.Jsonize());

  }

  if(m_contextHasBeenSet)
  {
   payload.WithObject("context", m_context.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
