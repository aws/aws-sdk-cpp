﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/AdvancedSecurityOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

AdvancedSecurityOptions::AdvancedSecurityOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

AdvancedSecurityOptions& AdvancedSecurityOptions::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("SAMLOptions"))
  {
    m_sAMLOptions = jsonValue.GetObject("SAMLOptions");
    m_sAMLOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JWTOptions"))
  {
    m_jWTOptions = jsonValue.GetObject("JWTOptions");
    m_jWTOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IAMFederationOptions"))
  {
    m_iAMFederationOptions = jsonValue.GetObject("IAMFederationOptions");
    m_iAMFederationOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnonymousAuthDisableDate"))
  {
    m_anonymousAuthDisableDate = jsonValue.GetDouble("AnonymousAuthDisableDate");
    m_anonymousAuthDisableDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnonymousAuthEnabled"))
  {
    m_anonymousAuthEnabled = jsonValue.GetBool("AnonymousAuthEnabled");
    m_anonymousAuthEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue AdvancedSecurityOptions::Jsonize() const
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

  if(m_sAMLOptionsHasBeenSet)
  {
   payload.WithObject("SAMLOptions", m_sAMLOptions.Jsonize());

  }

  if(m_jWTOptionsHasBeenSet)
  {
   payload.WithObject("JWTOptions", m_jWTOptions.Jsonize());

  }

  if(m_iAMFederationOptionsHasBeenSet)
  {
   payload.WithObject("IAMFederationOptions", m_iAMFederationOptions.Jsonize());

  }

  if(m_anonymousAuthDisableDateHasBeenSet)
  {
   payload.WithDouble("AnonymousAuthDisableDate", m_anonymousAuthDisableDate.SecondsWithMSPrecision());
  }

  if(m_anonymousAuthEnabledHasBeenSet)
  {
   payload.WithBool("AnonymousAuthEnabled", m_anonymousAuthEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
