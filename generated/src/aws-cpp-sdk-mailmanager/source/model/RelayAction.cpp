/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RelayAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

RelayAction::RelayAction(JsonView jsonValue)
{
  *this = jsonValue;
}

RelayAction& RelayAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActionFailurePolicy"))
  {
    m_actionFailurePolicy = ActionFailurePolicyMapper::GetActionFailurePolicyForName(jsonValue.GetString("ActionFailurePolicy"));
    m_actionFailurePolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Relay"))
  {
    m_relay = jsonValue.GetString("Relay");
    m_relayHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MailFrom"))
  {
    m_mailFrom = MailFromMapper::GetMailFromForName(jsonValue.GetString("MailFrom"));
    m_mailFromHasBeenSet = true;
  }
  return *this;
}

JsonValue RelayAction::Jsonize() const
{
  JsonValue payload;

  if(m_actionFailurePolicyHasBeenSet)
  {
   payload.WithString("ActionFailurePolicy", ActionFailurePolicyMapper::GetNameForActionFailurePolicy(m_actionFailurePolicy));
  }

  if(m_relayHasBeenSet)
  {
   payload.WithString("Relay", m_relay);

  }

  if(m_mailFromHasBeenSet)
  {
   payload.WithString("MailFrom", MailFromMapper::GetNameForMailFrom(m_mailFrom));
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
