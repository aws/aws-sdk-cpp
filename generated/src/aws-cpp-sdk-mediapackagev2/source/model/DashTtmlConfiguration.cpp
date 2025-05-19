/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/DashTtmlConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

DashTtmlConfiguration::DashTtmlConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DashTtmlConfiguration& DashTtmlConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TtmlProfile"))
  {
    m_ttmlProfile = DashTtmlProfileMapper::GetDashTtmlProfileForName(jsonValue.GetString("TtmlProfile"));
    m_ttmlProfileHasBeenSet = true;
  }
  return *this;
}

JsonValue DashTtmlConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_ttmlProfileHasBeenSet)
  {
   payload.WithString("TtmlProfile", DashTtmlProfileMapper::GetNameForDashTtmlProfile(m_ttmlProfile));
  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
