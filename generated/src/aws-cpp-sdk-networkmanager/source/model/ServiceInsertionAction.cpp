/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ServiceInsertionAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

ServiceInsertionAction::ServiceInsertionAction(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceInsertionAction& ServiceInsertionAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = SegmentActionServiceInsertionMapper::GetSegmentActionServiceInsertionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = SendViaModeMapper::GetSendViaModeForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WhenSentTo"))
  {
    m_whenSentTo = jsonValue.GetObject("WhenSentTo");
    m_whenSentToHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Via"))
  {
    m_via = jsonValue.GetObject("Via");
    m_viaHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceInsertionAction::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", SegmentActionServiceInsertionMapper::GetNameForSegmentActionServiceInsertion(m_action));
  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", SendViaModeMapper::GetNameForSendViaMode(m_mode));
  }

  if(m_whenSentToHasBeenSet)
  {
   payload.WithObject("WhenSentTo", m_whenSentTo.Jsonize());

  }

  if(m_viaHasBeenSet)
  {
   payload.WithObject("Via", m_via.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
