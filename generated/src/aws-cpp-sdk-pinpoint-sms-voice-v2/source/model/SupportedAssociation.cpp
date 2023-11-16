/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/SupportedAssociation.h>
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

SupportedAssociation::SupportedAssociation() : 
    m_resourceTypeHasBeenSet(false),
    m_isoCountryCodeHasBeenSet(false),
    m_associationBehavior(RegistrationAssociationBehavior::NOT_SET),
    m_associationBehaviorHasBeenSet(false),
    m_disassociationBehavior(RegistrationDisassociationBehavior::NOT_SET),
    m_disassociationBehaviorHasBeenSet(false)
{
}

SupportedAssociation::SupportedAssociation(JsonView jsonValue) : 
    m_resourceTypeHasBeenSet(false),
    m_isoCountryCodeHasBeenSet(false),
    m_associationBehavior(RegistrationAssociationBehavior::NOT_SET),
    m_associationBehaviorHasBeenSet(false),
    m_disassociationBehavior(RegistrationDisassociationBehavior::NOT_SET),
    m_disassociationBehaviorHasBeenSet(false)
{
  *this = jsonValue;
}

SupportedAssociation& SupportedAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsoCountryCode"))
  {
    m_isoCountryCode = jsonValue.GetString("IsoCountryCode");

    m_isoCountryCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationBehavior"))
  {
    m_associationBehavior = RegistrationAssociationBehaviorMapper::GetRegistrationAssociationBehaviorForName(jsonValue.GetString("AssociationBehavior"));

    m_associationBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisassociationBehavior"))
  {
    m_disassociationBehavior = RegistrationDisassociationBehaviorMapper::GetRegistrationDisassociationBehaviorForName(jsonValue.GetString("DisassociationBehavior"));

    m_disassociationBehaviorHasBeenSet = true;
  }

  return *this;
}

JsonValue SupportedAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_isoCountryCodeHasBeenSet)
  {
   payload.WithString("IsoCountryCode", m_isoCountryCode);

  }

  if(m_associationBehaviorHasBeenSet)
  {
   payload.WithString("AssociationBehavior", RegistrationAssociationBehaviorMapper::GetNameForRegistrationAssociationBehavior(m_associationBehavior));
  }

  if(m_disassociationBehaviorHasBeenSet)
  {
   payload.WithString("DisassociationBehavior", RegistrationDisassociationBehaviorMapper::GetNameForRegistrationDisassociationBehavior(m_disassociationBehavior));
  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
