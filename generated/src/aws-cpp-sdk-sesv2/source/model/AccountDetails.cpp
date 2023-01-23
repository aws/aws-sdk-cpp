/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/AccountDetails.h>
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

AccountDetails::AccountDetails() : 
    m_mailType(MailType::NOT_SET),
    m_mailTypeHasBeenSet(false),
    m_websiteURLHasBeenSet(false),
    m_contactLanguage(ContactLanguage::NOT_SET),
    m_contactLanguageHasBeenSet(false),
    m_useCaseDescriptionHasBeenSet(false),
    m_additionalContactEmailAddressesHasBeenSet(false),
    m_reviewDetailsHasBeenSet(false)
{
}

AccountDetails::AccountDetails(JsonView jsonValue) : 
    m_mailType(MailType::NOT_SET),
    m_mailTypeHasBeenSet(false),
    m_websiteURLHasBeenSet(false),
    m_contactLanguage(ContactLanguage::NOT_SET),
    m_contactLanguageHasBeenSet(false),
    m_useCaseDescriptionHasBeenSet(false),
    m_additionalContactEmailAddressesHasBeenSet(false),
    m_reviewDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

AccountDetails& AccountDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MailType"))
  {
    m_mailType = MailTypeMapper::GetMailTypeForName(jsonValue.GetString("MailType"));

    m_mailTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WebsiteURL"))
  {
    m_websiteURL = jsonValue.GetString("WebsiteURL");

    m_websiteURLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContactLanguage"))
  {
    m_contactLanguage = ContactLanguageMapper::GetContactLanguageForName(jsonValue.GetString("ContactLanguage"));

    m_contactLanguageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseCaseDescription"))
  {
    m_useCaseDescription = jsonValue.GetString("UseCaseDescription");

    m_useCaseDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalContactEmailAddresses"))
  {
    Aws::Utils::Array<JsonView> additionalContactEmailAddressesJsonList = jsonValue.GetArray("AdditionalContactEmailAddresses");
    for(unsigned additionalContactEmailAddressesIndex = 0; additionalContactEmailAddressesIndex < additionalContactEmailAddressesJsonList.GetLength(); ++additionalContactEmailAddressesIndex)
    {
      m_additionalContactEmailAddresses.push_back(additionalContactEmailAddressesJsonList[additionalContactEmailAddressesIndex].AsString());
    }
    m_additionalContactEmailAddressesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReviewDetails"))
  {
    m_reviewDetails = jsonValue.GetObject("ReviewDetails");

    m_reviewDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountDetails::Jsonize() const
{
  JsonValue payload;

  if(m_mailTypeHasBeenSet)
  {
   payload.WithString("MailType", MailTypeMapper::GetNameForMailType(m_mailType));
  }

  if(m_websiteURLHasBeenSet)
  {
   payload.WithString("WebsiteURL", m_websiteURL);

  }

  if(m_contactLanguageHasBeenSet)
  {
   payload.WithString("ContactLanguage", ContactLanguageMapper::GetNameForContactLanguage(m_contactLanguage));
  }

  if(m_useCaseDescriptionHasBeenSet)
  {
   payload.WithString("UseCaseDescription", m_useCaseDescription);

  }

  if(m_additionalContactEmailAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalContactEmailAddressesJsonList(m_additionalContactEmailAddresses.size());
   for(unsigned additionalContactEmailAddressesIndex = 0; additionalContactEmailAddressesIndex < additionalContactEmailAddressesJsonList.GetLength(); ++additionalContactEmailAddressesIndex)
   {
     additionalContactEmailAddressesJsonList[additionalContactEmailAddressesIndex].AsString(m_additionalContactEmailAddresses[additionalContactEmailAddressesIndex]);
   }
   payload.WithArray("AdditionalContactEmailAddresses", std::move(additionalContactEmailAddressesJsonList));

  }

  if(m_reviewDetailsHasBeenSet)
  {
   payload.WithObject("ReviewDetails", m_reviewDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
