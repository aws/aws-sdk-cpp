/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RegistrationDeniedReasonInformation.h>
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

RegistrationDeniedReasonInformation::RegistrationDeniedReasonInformation() : 
    m_reasonHasBeenSet(false),
    m_shortDescriptionHasBeenSet(false),
    m_longDescriptionHasBeenSet(false),
    m_documentationTitleHasBeenSet(false),
    m_documentationLinkHasBeenSet(false)
{
}

RegistrationDeniedReasonInformation::RegistrationDeniedReasonInformation(JsonView jsonValue) : 
    m_reasonHasBeenSet(false),
    m_shortDescriptionHasBeenSet(false),
    m_longDescriptionHasBeenSet(false),
    m_documentationTitleHasBeenSet(false),
    m_documentationLinkHasBeenSet(false)
{
  *this = jsonValue;
}

RegistrationDeniedReasonInformation& RegistrationDeniedReasonInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = jsonValue.GetString("Reason");

    m_reasonHasBeenSet = true;
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

  return *this;
}

JsonValue RegistrationDeniedReasonInformation::Jsonize() const
{
  JsonValue payload;

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

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

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
