/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/ExtensionsV4.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

ExtensionsV4::ExtensionsV4() : 
    m_applicationPoliciesHasBeenSet(false),
    m_keyUsageHasBeenSet(false)
{
}

ExtensionsV4::ExtensionsV4(JsonView jsonValue) : 
    m_applicationPoliciesHasBeenSet(false),
    m_keyUsageHasBeenSet(false)
{
  *this = jsonValue;
}

ExtensionsV4& ExtensionsV4::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationPolicies"))
  {
    m_applicationPolicies = jsonValue.GetObject("ApplicationPolicies");

    m_applicationPoliciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyUsage"))
  {
    m_keyUsage = jsonValue.GetObject("KeyUsage");

    m_keyUsageHasBeenSet = true;
  }

  return *this;
}

JsonValue ExtensionsV4::Jsonize() const
{
  JsonValue payload;

  if(m_applicationPoliciesHasBeenSet)
  {
   payload.WithObject("ApplicationPolicies", m_applicationPolicies.Jsonize());

  }

  if(m_keyUsageHasBeenSet)
  {
   payload.WithObject("KeyUsage", m_keyUsage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
