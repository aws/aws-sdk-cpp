/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/IPSetUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

IPSetUpdate::IPSetUpdate() : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_iPSetDescriptorHasBeenSet(false)
{
}

IPSetUpdate::IPSetUpdate(JsonView jsonValue) : 
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_iPSetDescriptorHasBeenSet(false)
{
  *this = jsonValue;
}

IPSetUpdate& IPSetUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ChangeActionMapper::GetChangeActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IPSetDescriptor"))
  {
    m_iPSetDescriptor = jsonValue.GetObject("IPSetDescriptor");

    m_iPSetDescriptorHasBeenSet = true;
  }

  return *this;
}

JsonValue IPSetUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if(m_iPSetDescriptorHasBeenSet)
  {
   payload.WithObject("IPSetDescriptor", m_iPSetDescriptor.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
