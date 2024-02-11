/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RegistrationFieldValueInformation.h>
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

RegistrationFieldValueInformation::RegistrationFieldValueInformation() : 
    m_fieldPathHasBeenSet(false),
    m_selectChoicesHasBeenSet(false),
    m_textValueHasBeenSet(false),
    m_registrationAttachmentIdHasBeenSet(false),
    m_deniedReasonHasBeenSet(false)
{
}

RegistrationFieldValueInformation::RegistrationFieldValueInformation(JsonView jsonValue) : 
    m_fieldPathHasBeenSet(false),
    m_selectChoicesHasBeenSet(false),
    m_textValueHasBeenSet(false),
    m_registrationAttachmentIdHasBeenSet(false),
    m_deniedReasonHasBeenSet(false)
{
  *this = jsonValue;
}

RegistrationFieldValueInformation& RegistrationFieldValueInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldPath"))
  {
    m_fieldPath = jsonValue.GetString("FieldPath");

    m_fieldPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectChoices"))
  {
    Aws::Utils::Array<JsonView> selectChoicesJsonList = jsonValue.GetArray("SelectChoices");
    for(unsigned selectChoicesIndex = 0; selectChoicesIndex < selectChoicesJsonList.GetLength(); ++selectChoicesIndex)
    {
      m_selectChoices.push_back(selectChoicesJsonList[selectChoicesIndex].AsString());
    }
    m_selectChoicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextValue"))
  {
    m_textValue = jsonValue.GetString("TextValue");

    m_textValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistrationAttachmentId"))
  {
    m_registrationAttachmentId = jsonValue.GetString("RegistrationAttachmentId");

    m_registrationAttachmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeniedReason"))
  {
    m_deniedReason = jsonValue.GetString("DeniedReason");

    m_deniedReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue RegistrationFieldValueInformation::Jsonize() const
{
  JsonValue payload;

  if(m_fieldPathHasBeenSet)
  {
   payload.WithString("FieldPath", m_fieldPath);

  }

  if(m_selectChoicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectChoicesJsonList(m_selectChoices.size());
   for(unsigned selectChoicesIndex = 0; selectChoicesIndex < selectChoicesJsonList.GetLength(); ++selectChoicesIndex)
   {
     selectChoicesJsonList[selectChoicesIndex].AsString(m_selectChoices[selectChoicesIndex]);
   }
   payload.WithArray("SelectChoices", std::move(selectChoicesJsonList));

  }

  if(m_textValueHasBeenSet)
  {
   payload.WithString("TextValue", m_textValue);

  }

  if(m_registrationAttachmentIdHasBeenSet)
  {
   payload.WithString("RegistrationAttachmentId", m_registrationAttachmentId);

  }

  if(m_deniedReasonHasBeenSet)
  {
   payload.WithString("DeniedReason", m_deniedReason);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
