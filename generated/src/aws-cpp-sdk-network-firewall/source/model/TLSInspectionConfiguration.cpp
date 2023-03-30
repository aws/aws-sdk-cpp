/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/TLSInspectionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

TLSInspectionConfiguration::TLSInspectionConfiguration() : 
    m_serverCertificateConfigurationsHasBeenSet(false)
{
}

TLSInspectionConfiguration::TLSInspectionConfiguration(JsonView jsonValue) : 
    m_serverCertificateConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

TLSInspectionConfiguration& TLSInspectionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServerCertificateConfigurations"))
  {
    Aws::Utils::Array<JsonView> serverCertificateConfigurationsJsonList = jsonValue.GetArray("ServerCertificateConfigurations");
    for(unsigned serverCertificateConfigurationsIndex = 0; serverCertificateConfigurationsIndex < serverCertificateConfigurationsJsonList.GetLength(); ++serverCertificateConfigurationsIndex)
    {
      m_serverCertificateConfigurations.push_back(serverCertificateConfigurationsJsonList[serverCertificateConfigurationsIndex].AsObject());
    }
    m_serverCertificateConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue TLSInspectionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_serverCertificateConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serverCertificateConfigurationsJsonList(m_serverCertificateConfigurations.size());
   for(unsigned serverCertificateConfigurationsIndex = 0; serverCertificateConfigurationsIndex < serverCertificateConfigurationsJsonList.GetLength(); ++serverCertificateConfigurationsIndex)
   {
     serverCertificateConfigurationsJsonList[serverCertificateConfigurationsIndex].AsObject(m_serverCertificateConfigurations[serverCertificateConfigurationsIndex].Jsonize());
   }
   payload.WithArray("ServerCertificateConfigurations", std::move(serverCertificateConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
