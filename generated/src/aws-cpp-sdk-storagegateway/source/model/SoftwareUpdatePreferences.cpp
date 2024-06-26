/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/SoftwareUpdatePreferences.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

SoftwareUpdatePreferences::SoftwareUpdatePreferences() : 
    m_automaticUpdatePolicy(AutomaticUpdatePolicy::NOT_SET),
    m_automaticUpdatePolicyHasBeenSet(false)
{
}

SoftwareUpdatePreferences::SoftwareUpdatePreferences(JsonView jsonValue)
  : SoftwareUpdatePreferences()
{
  *this = jsonValue;
}

SoftwareUpdatePreferences& SoftwareUpdatePreferences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutomaticUpdatePolicy"))
  {
    m_automaticUpdatePolicy = AutomaticUpdatePolicyMapper::GetAutomaticUpdatePolicyForName(jsonValue.GetString("AutomaticUpdatePolicy"));

    m_automaticUpdatePolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue SoftwareUpdatePreferences::Jsonize() const
{
  JsonValue payload;

  if(m_automaticUpdatePolicyHasBeenSet)
  {
   payload.WithString("AutomaticUpdatePolicy", AutomaticUpdatePolicyMapper::GetNameForAutomaticUpdatePolicy(m_automaticUpdatePolicy));
  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
