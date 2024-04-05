/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/BatchIsAuthorizedWithTokenInputItem.h>
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

BatchIsAuthorizedWithTokenInputItem::BatchIsAuthorizedWithTokenInputItem() : 
    m_actionHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

BatchIsAuthorizedWithTokenInputItem::BatchIsAuthorizedWithTokenInputItem(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_contextHasBeenSet(false)
{
  *this = jsonValue;
}

BatchIsAuthorizedWithTokenInputItem& BatchIsAuthorizedWithTokenInputItem::operator =(JsonView jsonValue)
{
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

JsonValue BatchIsAuthorizedWithTokenInputItem::Jsonize() const
{
  JsonValue payload;

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
