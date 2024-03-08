/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RegistrationFieldDisplayHints.h>
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

RegistrationFieldDisplayHints::RegistrationFieldDisplayHints() : 
    m_titleHasBeenSet(false),
    m_shortDescriptionHasBeenSet(false),
    m_longDescriptionHasBeenSet(false),
    m_documentationTitleHasBeenSet(false),
    m_documentationLinkHasBeenSet(false),
    m_selectOptionDescriptionsHasBeenSet(false),
    m_textValidationDescriptionHasBeenSet(false),
    m_exampleTextValueHasBeenSet(false)
{
}

RegistrationFieldDisplayHints::RegistrationFieldDisplayHints(JsonView jsonValue) : 
    m_titleHasBeenSet(false),
    m_shortDescriptionHasBeenSet(false),
    m_longDescriptionHasBeenSet(false),
    m_documentationTitleHasBeenSet(false),
    m_documentationLinkHasBeenSet(false),
    m_selectOptionDescriptionsHasBeenSet(false),
    m_textValidationDescriptionHasBeenSet(false),
    m_exampleTextValueHasBeenSet(false)
{
  *this = jsonValue;
}

RegistrationFieldDisplayHints& RegistrationFieldDisplayHints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShortDescription"))
  {
    m_shortDescription = jsonValue.GetString("ShortDescription");

    m_shortDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LongDescription"))
  {
    m_longDescription = jsonValue.GetString("LongDescription");

    m_longDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentationTitle"))
  {
    m_documentationTitle = jsonValue.GetString("DocumentationTitle");

    m_documentationTitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentationLink"))
  {
    m_documentationLink = jsonValue.GetString("DocumentationLink");

    m_documentationLinkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectOptionDescriptions"))
  {
    Aws::Utils::Array<JsonView> selectOptionDescriptionsJsonList = jsonValue.GetArray("SelectOptionDescriptions");
    for(unsigned selectOptionDescriptionsIndex = 0; selectOptionDescriptionsIndex < selectOptionDescriptionsJsonList.GetLength(); ++selectOptionDescriptionsIndex)
    {
      m_selectOptionDescriptions.push_back(selectOptionDescriptionsJsonList[selectOptionDescriptionsIndex].AsObject());
    }
    m_selectOptionDescriptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextValidationDescription"))
  {
    m_textValidationDescription = jsonValue.GetString("TextValidationDescription");

    m_textValidationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExampleTextValue"))
  {
    m_exampleTextValue = jsonValue.GetString("ExampleTextValue");

    m_exampleTextValueHasBeenSet = true;
  }

  return *this;
}

JsonValue RegistrationFieldDisplayHints::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_shortDescriptionHasBeenSet)
  {
   payload.WithString("ShortDescription", m_shortDescription);

  }

  if(m_longDescriptionHasBeenSet)
  {
   payload.WithString("LongDescription", m_longDescription);

  }

  if(m_documentationTitleHasBeenSet)
  {
   payload.WithString("DocumentationTitle", m_documentationTitle);

  }

  if(m_documentationLinkHasBeenSet)
  {
   payload.WithString("DocumentationLink", m_documentationLink);

  }

  if(m_selectOptionDescriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectOptionDescriptionsJsonList(m_selectOptionDescriptions.size());
   for(unsigned selectOptionDescriptionsIndex = 0; selectOptionDescriptionsIndex < selectOptionDescriptionsJsonList.GetLength(); ++selectOptionDescriptionsIndex)
   {
     selectOptionDescriptionsJsonList[selectOptionDescriptionsIndex].AsObject(m_selectOptionDescriptions[selectOptionDescriptionsIndex].Jsonize());
   }
   payload.WithArray("SelectOptionDescriptions", std::move(selectOptionDescriptionsJsonList));

  }

  if(m_textValidationDescriptionHasBeenSet)
  {
   payload.WithString("TextValidationDescription", m_textValidationDescription);

  }

  if(m_exampleTextValueHasBeenSet)
  {
   payload.WithString("ExampleTextValue", m_exampleTextValue);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
