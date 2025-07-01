/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/OciDnsForwardingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace odb
{
namespace Model
{

OciDnsForwardingConfig::OciDnsForwardingConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

OciDnsForwardingConfig& OciDnsForwardingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ociDnsListenerIp"))
  {
    m_ociDnsListenerIp = jsonValue.GetString("ociDnsListenerIp");
    m_ociDnsListenerIpHasBeenSet = true;
  }
  return *this;
}

JsonValue OciDnsForwardingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_ociDnsListenerIpHasBeenSet)
  {
   payload.WithString("ociDnsListenerIp", m_ociDnsListenerIp);

  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
