/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/UnprocessedConfigurationPolicyAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

UnprocessedConfigurationPolicyAssociation::UnprocessedConfigurationPolicyAssociation() : 
    m_configurationPolicyAssociationIdentifiersHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorReasonHasBeenSet(false)
{
}

UnprocessedConfigurationPolicyAssociation::UnprocessedConfigurationPolicyAssociation(JsonView jsonValue) : 
    m_configurationPolicyAssociationIdentifiersHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorReasonHasBeenSet(false)
{
  *this = jsonValue;
}

UnprocessedConfigurationPolicyAssociation& UnprocessedConfigurationPolicyAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigurationPolicyAssociationIdentifiers"))
  {
    m_configurationPolicyAssociationIdentifiers = jsonValue.GetObject("ConfigurationPolicyAssociationIdentifiers");

    m_configurationPolicyAssociationIdentifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorReason"))
  {
    m_errorReason = jsonValue.GetString("ErrorReason");

    m_errorReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue UnprocessedConfigurationPolicyAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_configurationPolicyAssociationIdentifiersHasBeenSet)
  {
   payload.WithObject("ConfigurationPolicyAssociationIdentifiers", m_configurationPolicyAssociationIdentifiers.Jsonize());

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_errorReasonHasBeenSet)
  {
   payload.WithString("ErrorReason", m_errorReason);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
