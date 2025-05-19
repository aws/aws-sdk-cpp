/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/DashSubtitleConfiguration.h>
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

DashSubtitleConfiguration::DashSubtitleConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DashSubtitleConfiguration& DashSubtitleConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TtmlConfiguration"))
  {
    m_ttmlConfiguration = jsonValue.GetObject("TtmlConfiguration");
    m_ttmlConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue DashSubtitleConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_ttmlConfigurationHasBeenSet)
  {
   payload.WithObject("TtmlConfiguration", m_ttmlConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
