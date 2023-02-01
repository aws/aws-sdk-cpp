/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/SelfManagedKafkaAccessConfigurationCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

SelfManagedKafkaAccessConfigurationCredentials::SelfManagedKafkaAccessConfigurationCredentials() : 
    m_basicAuthHasBeenSet(false),
    m_clientCertificateTlsAuthHasBeenSet(false),
    m_saslScram256AuthHasBeenSet(false),
    m_saslScram512AuthHasBeenSet(false)
{
}

SelfManagedKafkaAccessConfigurationCredentials::SelfManagedKafkaAccessConfigurationCredentials(JsonView jsonValue) : 
    m_basicAuthHasBeenSet(false),
    m_clientCertificateTlsAuthHasBeenSet(false),
    m_saslScram256AuthHasBeenSet(false),
    m_saslScram512AuthHasBeenSet(false)
{
  *this = jsonValue;
}

SelfManagedKafkaAccessConfigurationCredentials& SelfManagedKafkaAccessConfigurationCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BasicAuth"))
  {
    m_basicAuth = jsonValue.GetString("BasicAuth");

    m_basicAuthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientCertificateTlsAuth"))
  {
    m_clientCertificateTlsAuth = jsonValue.GetString("ClientCertificateTlsAuth");

    m_clientCertificateTlsAuthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SaslScram256Auth"))
  {
    m_saslScram256Auth = jsonValue.GetString("SaslScram256Auth");

    m_saslScram256AuthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SaslScram512Auth"))
  {
    m_saslScram512Auth = jsonValue.GetString("SaslScram512Auth");

    m_saslScram512AuthHasBeenSet = true;
  }

  return *this;
}

JsonValue SelfManagedKafkaAccessConfigurationCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_basicAuthHasBeenSet)
  {
   payload.WithString("BasicAuth", m_basicAuth);

  }

  if(m_clientCertificateTlsAuthHasBeenSet)
  {
   payload.WithString("ClientCertificateTlsAuth", m_clientCertificateTlsAuth);

  }

  if(m_saslScram256AuthHasBeenSet)
  {
   payload.WithString("SaslScram256Auth", m_saslScram256Auth);

  }

  if(m_saslScram512AuthHasBeenSet)
  {
   payload.WithString("SaslScram512Auth", m_saslScram512Auth);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
