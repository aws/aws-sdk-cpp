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

  if(m_adminProGroupHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> adminProGroupJsonList(m_adminProGroup.size());
   for(unsigned adminProGroupIndex = 0; adminProGroupIndex < adminProGroupJsonList.GetLength(); ++adminProGroupIndex)
   {
     adminProGroupJsonList[adminProGroupIndex].AsString(m_adminProGroup[adminProGroupIndex]);
   }
   payload.WithArray("AdminProGroup", std::move(adminProGroupJsonList));

  }

  if(m_authorProGroupHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authorProGroupJsonList(m_authorProGroup.size());
   for(unsigned authorProGroupIndex = 0; authorProGroupIndex < authorProGroupJsonList.GetLength(); ++authorProGroupIndex)
   {
     authorProGroupJsonList[authorProGroupIndex].AsString(m_authorProGroup[authorProGroupIndex]);
   }
   payload.WithArray("AuthorProGroup", std::move(authorProGroupJsonList));

  }

  if(m_readerProGroupHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> readerProGroupJsonList(m_readerProGroup.size());
   for(unsigned readerProGroupIndex = 0; readerProGroupIndex < readerProGroupJsonList.GetLength(); ++readerProGroupIndex)
   {
     readerProGroupJsonList[readerProGroupIndex].AsString(m_readerProGroup[readerProGroupIndex]);
   }
   payload.WithArray("ReaderProGroup", std::move(readerProGroupJsonList));

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

  if(m_iAMIdentityCenterInstanceArnHasBeenSet)
  {
   payload.WithString("IAMIdentityCenterInstanceArn", m_iAMIdentityCenterInstanceArn);

  }

  return payload.View().WriteReadable();
}




