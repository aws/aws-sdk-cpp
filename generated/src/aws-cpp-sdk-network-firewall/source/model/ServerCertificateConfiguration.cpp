/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/ServerCertificateConfiguration.h>
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

ServerCertificateConfiguration::ServerCertificateConfiguration() : 
    m_serverCertificatesHasBeenSet(false),
    m_scopesHasBeenSet(false),
    m_certificateAuthorityArnHasBeenSet(false),
    m_checkCertificateRevocationStatusHasBeenSet(false)
{
}

ServerCertificateConfiguration::ServerCertificateConfiguration(JsonView jsonValue) : 
    m_serverCertificatesHasBeenSet(false),
    m_scopesHasBeenSet(false),
    m_certificateAuthorityArnHasBeenSet(false),
    m_checkCertificateRevocationStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ServerCertificateConfiguration& ServerCertificateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServerCertificates"))
  {
    Aws::Utils::Array<JsonView> serverCertificatesJsonList = jsonValue.GetArray("ServerCertificates");
    for(unsigned serverCertificatesIndex = 0; serverCertificatesIndex < serverCertificatesJsonList.GetLength(); ++serverCertificatesIndex)
    {
      m_serverCertificates.push_back(serverCertificatesJsonList[serverCertificatesIndex].AsObject());
    }
    m_serverCertificatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Scopes"))
  {
    Aws::Utils::Array<JsonView> scopesJsonList = jsonValue.GetArray("Scopes");
    for(unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex)
    {
      m_scopes.push_back(scopesJsonList[scopesIndex].AsObject());
    }
    m_scopesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateAuthorityArn"))
  {
    m_certificateAuthorityArn = jsonValue.GetString("CertificateAuthorityArn");

    m_certificateAuthorityArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CheckCertificateRevocationStatus"))
  {
    m_checkCertificateRevocationStatus = jsonValue.GetObject("CheckCertificateRevocationStatus");

    m_checkCertificateRevocationStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerCertificateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_serverCertificatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serverCertificatesJsonList(m_serverCertificates.size());
   for(unsigned serverCertificatesIndex = 0; serverCertificatesIndex < serverCertificatesJsonList.GetLength(); ++serverCertificatesIndex)
   {
     serverCertificatesJsonList[serverCertificatesIndex].AsObject(m_serverCertificates[serverCertificatesIndex].Jsonize());
   }
   payload.WithArray("ServerCertificates", std::move(serverCertificatesJsonList));

  }

  if(m_scopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scopesJsonList(m_scopes.size());
   for(unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex)
   {
     scopesJsonList[scopesIndex].AsObject(m_scopes[scopesIndex].Jsonize());
   }
   payload.WithArray("Scopes", std::move(scopesJsonList));

  }

  if(m_certificateAuthorityArnHasBeenSet)
  {
   payload.WithString("CertificateAuthorityArn", m_certificateAuthorityArn);

  }

  if(m_checkCertificateRevocationStatusHasBeenSet)
  {
   payload.WithObject("CheckCertificateRevocationStatus", m_checkCertificateRevocationStatus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
