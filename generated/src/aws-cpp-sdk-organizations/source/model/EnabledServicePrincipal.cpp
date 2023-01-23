/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/EnabledServicePrincipal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

EnabledServicePrincipal::EnabledServicePrincipal() : 
    m_servicePrincipalHasBeenSet(false),
    m_dateEnabledHasBeenSet(false)
{
}

EnabledServicePrincipal::EnabledServicePrincipal(JsonView jsonValue) : 
    m_servicePrincipalHasBeenSet(false),
    m_dateEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

EnabledServicePrincipal& EnabledServicePrincipal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServicePrincipal"))
  {
    m_servicePrincipal = jsonValue.GetString("ServicePrincipal");

    m_servicePrincipalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateEnabled"))
  {
    m_dateEnabled = jsonValue.GetDouble("DateEnabled");

    m_dateEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue EnabledServicePrincipal::Jsonize() const
{
  JsonValue payload;

  if(m_servicePrincipalHasBeenSet)
  {
   payload.WithString("ServicePrincipal", m_servicePrincipal);

  }

  if(m_dateEnabledHasBeenSet)
  {
   payload.WithDouble("DateEnabled", m_dateEnabled.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
