/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsMskClusterClusterInfoClientAuthenticationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsMskClusterClusterInfoClientAuthenticationDetails::AwsMskClusterClusterInfoClientAuthenticationDetails() : 
    m_saslHasBeenSet(false),
    m_unauthenticatedHasBeenSet(false),
    m_tlsHasBeenSet(false)
{
}

AwsMskClusterClusterInfoClientAuthenticationDetails::AwsMskClusterClusterInfoClientAuthenticationDetails(JsonView jsonValue) : 
    m_saslHasBeenSet(false),
    m_unauthenticatedHasBeenSet(false),
    m_tlsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsMskClusterClusterInfoClientAuthenticationDetails& AwsMskClusterClusterInfoClientAuthenticationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Sasl"))
  {
    m_sasl = jsonValue.GetObject("Sasl");

    m_saslHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unauthenticated"))
  {
    m_unauthenticated = jsonValue.GetObject("Unauthenticated");

    m_unauthenticatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tls"))
  {
    m_tls = jsonValue.GetObject("Tls");

    m_tlsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsMskClusterClusterInfoClientAuthenticationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_saslHasBeenSet)
  {
   payload.WithObject("Sasl", m_sasl.Jsonize());

  }

  if(m_unauthenticatedHasBeenSet)
  {
   payload.WithObject("Unauthenticated", m_unauthenticated.Jsonize());

  }

  if(m_tlsHasBeenSet)
  {
   payload.WithObject("Tls", m_tls.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
