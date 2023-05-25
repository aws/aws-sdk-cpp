/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails.h>
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

AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails::AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_internalUserDatabaseEnabled(false),
    m_internalUserDatabaseEnabledHasBeenSet(false),
    m_masterUserOptionsHasBeenSet(false)
{
}

AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails::AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_internalUserDatabaseEnabled(false),
    m_internalUserDatabaseEnabledHasBeenSet(false),
    m_masterUserOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails& AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InternalUserDatabaseEnabled"))
  {
    m_internalUserDatabaseEnabled = jsonValue.GetBool("InternalUserDatabaseEnabled");

    m_internalUserDatabaseEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterUserOptions"))
  {
    m_masterUserOptions = jsonValue.GetObject("MasterUserOptions");

    m_masterUserOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_internalUserDatabaseEnabledHasBeenSet)
  {
   payload.WithBool("InternalUserDatabaseEnabled", m_internalUserDatabaseEnabled);

  }

  if(m_masterUserOptionsHasBeenSet)
  {
   payload.WithObject("MasterUserOptions", m_masterUserOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
