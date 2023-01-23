/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/SslConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

SslConfiguration::SslConfiguration() : 
    m_certificateHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_chainHasBeenSet(false)
{
}

SslConfiguration::SslConfiguration(JsonView jsonValue) : 
    m_certificateHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_chainHasBeenSet(false)
{
  *this = jsonValue;
}

SslConfiguration& SslConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Certificate"))
  {
    m_certificate = jsonValue.GetString("Certificate");

    m_certificateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateKey"))
  {
    m_privateKey = jsonValue.GetString("PrivateKey");

    m_privateKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Chain"))
  {
    m_chain = jsonValue.GetString("Chain");

    m_chainHasBeenSet = true;
  }

  return *this;
}

JsonValue SslConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_certificateHasBeenSet)
  {
   payload.WithString("Certificate", m_certificate);

  }

  if(m_privateKeyHasBeenSet)
  {
   payload.WithString("PrivateKey", m_privateKey);

  }

  if(m_chainHasBeenSet)
  {
   payload.WithString("Chain", m_chain);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
