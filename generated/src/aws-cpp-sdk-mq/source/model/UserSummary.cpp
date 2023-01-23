/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/UserSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

UserSummary::UserSummary() : 
    m_pendingChange(ChangeType::NOT_SET),
    m_pendingChangeHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

UserSummary::UserSummary(JsonView jsonValue) : 
    m_pendingChange(ChangeType::NOT_SET),
    m_pendingChangeHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
  *this = jsonValue;
}

UserSummary& UserSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pendingChange"))
  {
    m_pendingChange = ChangeTypeMapper::GetChangeTypeForName(jsonValue.GetString("pendingChange"));

    m_pendingChangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");

    m_usernameHasBeenSet = true;
  }

  return *this;
}

JsonValue UserSummary::Jsonize() const
{
  JsonValue payload;

  if(m_pendingChangeHasBeenSet)
  {
   payload.WithString("pendingChange", ChangeTypeMapper::GetNameForChangeType(m_pendingChange));
  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
