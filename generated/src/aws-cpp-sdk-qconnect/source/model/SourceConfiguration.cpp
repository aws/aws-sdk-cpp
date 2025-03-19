/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/SourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

SourceConfiguration::SourceConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SourceConfiguration& SourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appIntegrations"))
  {
    m_appIntegrations = jsonValue.GetObject("appIntegrations");
    m_appIntegrationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("managedSourceConfiguration"))
  {
    m_managedSourceConfiguration = jsonValue.GetObject("managedSourceConfiguration");
    m_managedSourceConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_appIntegrationsHasBeenSet)
  {
   payload.WithObject("appIntegrations", m_appIntegrations.Jsonize());

  }

  if(m_managedSourceConfigurationHasBeenSet)
  {
   payload.WithObject("managedSourceConfiguration", m_managedSourceConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
