/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CreateAccountSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAccountSubscriptionRequest::CreateAccountSubscriptionRequest() : 
    m_edition(Edition::NOT_SET),
    m_editionHasBeenSet(false),
    m_authenticationMethod(AuthenticationMethodOption::NOT_SET),
    m_authenticationMethodHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_notificationEmailHasBeenSet(false),
    m_activeDirectoryNameHasBeenSet(false),
    m_realmHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_adminGroupHasBeenSet(false),
    m_authorGroupHasBeenSet(false),
    m_readerGroupHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_contactNumberHasBeenSet(false)
{
}

Aws::String CreateAccountSubscriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_editionHasBeenSet)
  {
   payload.WithString("Edition", EditionMapper::GetNameForEdition(m_edition));
  }

  if(m_authenticationMethodHasBeenSet)
  {
   payload.WithString("AuthenticationMethod", AuthenticationMethodOptionMapper::GetNameForAuthenticationMethodOption(m_authenticationMethod));
  }

  if(m_accountNameHasBeenSet)
  {
   payload.WithString("AccountName", m_accountName);

  }

  if(m_notificationEmailHasBeenSet)
  {
   payload.WithString("NotificationEmail", m_notificationEmail);

  }

  if(m_activeDirectoryNameHasBeenSet)
  {
   payload.WithString("ActiveDirectoryName", m_activeDirectoryName);

  }

  if(m_realmHasBeenSet)
  {
   payload.WithString("Realm", m_realm);

  }

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_adminGroupHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> adminGroupJsonList(m_adminGroup.size());
   for(unsigned adminGroupIndex = 0; adminGroupIndex < adminGroupJsonList.GetLength(); ++adminGroupIndex)
   {
     adminGroupJsonList[adminGroupIndex].AsString(m_adminGroup[adminGroupIndex]);
   }
   payload.WithArray("AdminGroup", std::move(adminGroupJsonList));

  }

  if(m_authorGroupHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authorGroupJsonList(m_authorGroup.size());
   for(unsigned authorGroupIndex = 0; authorGroupIndex < authorGroupJsonList.GetLength(); ++authorGroupIndex)
   {
     authorGroupJsonList[authorGroupIndex].AsString(m_authorGroup[authorGroupIndex]);
   }
   payload.WithArray("AuthorGroup", std::move(authorGroupJsonList));

  }

  if(m_readerGroupHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> readerGroupJsonList(m_readerGroup.size());
   for(unsigned readerGroupIndex = 0; readerGroupIndex < readerGroupJsonList.GetLength(); ++readerGroupIndex)
   {
     readerGroupJsonList[readerGroupIndex].AsString(m_readerGroup[readerGroupIndex]);
   }
   payload.WithArray("ReaderGroup", std::move(readerGroupJsonList));

  }

  if(m_firstNameHasBeenSet)
  {
   payload.WithString("FirstName", m_firstName);

  }

  if(m_lastNameHasBeenSet)
  {
   payload.WithString("LastName", m_lastName);

  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

  }

  if(m_contactNumberHasBeenSet)
  {
   payload.WithString("ContactNumber", m_contactNumber);

  }

  return payload.View().WriteReadable();
}




