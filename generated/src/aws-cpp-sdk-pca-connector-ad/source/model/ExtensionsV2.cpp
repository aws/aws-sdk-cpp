﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/ExtensionsV2.h>
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

ExtensionsV2::ExtensionsV2(JsonView jsonValue)
{
  *this = jsonValue;
}

ExtensionsV2& ExtensionsV2::operator =(JsonView jsonValue)
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

JsonValue ExtensionsV2::Jsonize() const
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
