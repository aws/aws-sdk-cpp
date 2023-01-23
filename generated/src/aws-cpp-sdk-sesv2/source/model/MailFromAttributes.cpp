/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/MailFromAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

MailFromAttributes::MailFromAttributes() : 
    m_mailFromDomainHasBeenSet(false),
    m_mailFromDomainStatus(MailFromDomainStatus::NOT_SET),
    m_mailFromDomainStatusHasBeenSet(false),
    m_behaviorOnMxFailure(BehaviorOnMxFailure::NOT_SET),
    m_behaviorOnMxFailureHasBeenSet(false)
{
}

MailFromAttributes::MailFromAttributes(JsonView jsonValue) : 
    m_mailFromDomainHasBeenSet(false),
    m_mailFromDomainStatus(MailFromDomainStatus::NOT_SET),
    m_mailFromDomainStatusHasBeenSet(false),
    m_behaviorOnMxFailure(BehaviorOnMxFailure::NOT_SET),
    m_behaviorOnMxFailureHasBeenSet(false)
{
  *this = jsonValue;
}

MailFromAttributes& MailFromAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MailFromDomain"))
  {
    m_mailFromDomain = jsonValue.GetString("MailFromDomain");

    m_mailFromDomainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MailFromDomainStatus"))
  {
    m_mailFromDomainStatus = MailFromDomainStatusMapper::GetMailFromDomainStatusForName(jsonValue.GetString("MailFromDomainStatus"));

    m_mailFromDomainStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BehaviorOnMxFailure"))
  {
    m_behaviorOnMxFailure = BehaviorOnMxFailureMapper::GetBehaviorOnMxFailureForName(jsonValue.GetString("BehaviorOnMxFailure"));

    m_behaviorOnMxFailureHasBeenSet = true;
  }

  return *this;
}

JsonValue MailFromAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_mailFromDomainHasBeenSet)
  {
   payload.WithString("MailFromDomain", m_mailFromDomain);

  }

  if(m_mailFromDomainStatusHasBeenSet)
  {
   payload.WithString("MailFromDomainStatus", MailFromDomainStatusMapper::GetNameForMailFromDomainStatus(m_mailFromDomainStatus));
  }

  if(m_behaviorOnMxFailureHasBeenSet)
  {
   payload.WithString("BehaviorOnMxFailure", BehaviorOnMxFailureMapper::GetNameForBehaviorOnMxFailure(m_behaviorOnMxFailure));
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
