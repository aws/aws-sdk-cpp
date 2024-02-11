/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AccountInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AccountInfo::AccountInfo() : 
    m_accountNameHasBeenSet(false),
    m_edition(Edition::NOT_SET),
    m_editionHasBeenSet(false),
    m_notificationEmailHasBeenSet(false),
    m_authenticationTypeHasBeenSet(false),
    m_accountSubscriptionStatusHasBeenSet(false),
    m_iAMIdentityCenterInstanceArnHasBeenSet(false)
{
}

AccountInfo::AccountInfo(JsonView jsonValue) : 
    m_accountNameHasBeenSet(false),
    m_edition(Edition::NOT_SET),
    m_editionHasBeenSet(false),
    m_notificationEmailHasBeenSet(false),
    m_authenticationTypeHasBeenSet(false),
    m_accountSubscriptionStatusHasBeenSet(false),
    m_iAMIdentityCenterInstanceArnHasBeenSet(false)
{
  *this = jsonValue;
}

AccountInfo& AccountInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountName"))
  {
    m_accountName = jsonValue.GetString("AccountName");

    m_accountNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Edition"))
  {
    m_edition = EditionMapper::GetEditionForName(jsonValue.GetString("Edition"));

    m_editionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationEmail"))
  {
    m_notificationEmail = jsonValue.GetString("NotificationEmail");

    m_notificationEmailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthenticationType"))
  {
    m_authenticationType = jsonValue.GetString("AuthenticationType");

    m_authenticationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountSubscriptionStatus"))
  {
    m_accountSubscriptionStatus = jsonValue.GetString("AccountSubscriptionStatus");

    m_accountSubscriptionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IAMIdentityCenterInstanceArn"))
  {
    m_iAMIdentityCenterInstanceArn = jsonValue.GetString("IAMIdentityCenterInstanceArn");

    m_iAMIdentityCenterInstanceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountInfo::Jsonize() const
{
  JsonValue payload;

  if(m_accountNameHasBeenSet)
  {
   payload.WithString("AccountName", m_accountName);

  }

  if(m_editionHasBeenSet)
  {
   payload.WithString("Edition", EditionMapper::GetNameForEdition(m_edition));
  }

  if(m_notificationEmailHasBeenSet)
  {
   payload.WithString("NotificationEmail", m_notificationEmail);

  }

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("AuthenticationType", m_authenticationType);

  }

  if(m_accountSubscriptionStatusHasBeenSet)
  {
   payload.WithString("AccountSubscriptionStatus", m_accountSubscriptionStatus);

  }

  if(m_iAMIdentityCenterInstanceArnHasBeenSet)
  {
   payload.WithString("IAMIdentityCenterInstanceArn", m_iAMIdentityCenterInstanceArn);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
