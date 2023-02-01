/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/AccountLimit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

AccountLimit::AccountLimit() : 
    m_name(AccountLimitName::NOT_SET),
    m_nameHasBeenSet(false),
    m_used(0),
    m_usedHasBeenSet(false),
    m_max(0),
    m_maxHasBeenSet(false)
{
}

AccountLimit::AccountLimit(JsonView jsonValue) : 
    m_name(AccountLimitName::NOT_SET),
    m_nameHasBeenSet(false),
    m_used(0),
    m_usedHasBeenSet(false),
    m_max(0),
    m_maxHasBeenSet(false)
{
  *this = jsonValue;
}

AccountLimit& AccountLimit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = AccountLimitNameMapper::GetAccountLimitNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Used"))
  {
    m_used = jsonValue.GetInt64("Used");

    m_usedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Max"))
  {
    m_max = jsonValue.GetInt64("Max");

    m_maxHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountLimit::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", AccountLimitNameMapper::GetNameForAccountLimitName(m_name));
  }

  if(m_usedHasBeenSet)
  {
   payload.WithInt64("Used", m_used);

  }

  if(m_maxHasBeenSet)
  {
   payload.WithInt64("Max", m_max);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
