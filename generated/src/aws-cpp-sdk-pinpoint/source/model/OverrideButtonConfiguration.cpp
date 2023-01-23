/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/OverrideButtonConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

OverrideButtonConfiguration::OverrideButtonConfiguration() : 
    m_buttonAction(ButtonAction::NOT_SET),
    m_buttonActionHasBeenSet(false),
    m_linkHasBeenSet(false)
{
}

OverrideButtonConfiguration::OverrideButtonConfiguration(JsonView jsonValue) : 
    m_buttonAction(ButtonAction::NOT_SET),
    m_buttonActionHasBeenSet(false),
    m_linkHasBeenSet(false)
{
  *this = jsonValue;
}

OverrideButtonConfiguration& OverrideButtonConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ButtonAction"))
  {
    m_buttonAction = ButtonActionMapper::GetButtonActionForName(jsonValue.GetString("ButtonAction"));

    m_buttonActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Link"))
  {
    m_link = jsonValue.GetString("Link");

    m_linkHasBeenSet = true;
  }

  return *this;
}

JsonValue OverrideButtonConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_buttonActionHasBeenSet)
  {
   payload.WithString("ButtonAction", ButtonActionMapper::GetNameForButtonAction(m_buttonAction));
  }

  if(m_linkHasBeenSet)
  {
   payload.WithString("Link", m_link);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
