/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/DnssecSigningAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

DnssecSigningAttributes::DnssecSigningAttributes() : 
    m_algorithm(0),
    m_algorithmHasBeenSet(false),
    m_flags(0),
    m_flagsHasBeenSet(false),
    m_publicKeyHasBeenSet(false)
{
}

DnssecSigningAttributes::DnssecSigningAttributes(JsonView jsonValue) : 
    m_algorithm(0),
    m_algorithmHasBeenSet(false),
    m_flags(0),
    m_flagsHasBeenSet(false),
    m_publicKeyHasBeenSet(false)
{
  *this = jsonValue;
}

DnssecSigningAttributes& DnssecSigningAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Algorithm"))
  {
    m_algorithm = jsonValue.GetInteger("Algorithm");

    m_algorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Flags"))
  {
    m_flags = jsonValue.GetInteger("Flags");

    m_flagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublicKey"))
  {
    m_publicKey = jsonValue.GetString("PublicKey");

    m_publicKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue DnssecSigningAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmHasBeenSet)
  {
   payload.WithInteger("Algorithm", m_algorithm);

  }

  if(m_flagsHasBeenSet)
  {
   payload.WithInteger("Flags", m_flags);

  }

  if(m_publicKeyHasBeenSet)
  {
   payload.WithString("PublicKey", m_publicKey);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
