/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsMskClusterClusterInfoClientAuthenticationSaslDetails.h>
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

AwsMskClusterClusterInfoClientAuthenticationSaslDetails::AwsMskClusterClusterInfoClientAuthenticationSaslDetails() : 
    m_iamHasBeenSet(false),
    m_scramHasBeenSet(false)
{
}

AwsMskClusterClusterInfoClientAuthenticationSaslDetails::AwsMskClusterClusterInfoClientAuthenticationSaslDetails(JsonView jsonValue) : 
    m_iamHasBeenSet(false),
    m_scramHasBeenSet(false)
{
  *this = jsonValue;
}

AwsMskClusterClusterInfoClientAuthenticationSaslDetails& AwsMskClusterClusterInfoClientAuthenticationSaslDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Iam"))
  {
    m_iam = jsonValue.GetObject("Iam");

    m_iamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Scram"))
  {
    m_scram = jsonValue.GetObject("Scram");

    m_scramHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsMskClusterClusterInfoClientAuthenticationSaslDetails::Jsonize() const
{
  JsonValue payload;

  if(m_iamHasBeenSet)
  {
   payload.WithObject("Iam", m_iam.Jsonize());

  }

  if(m_scramHasBeenSet)
  {
   payload.WithObject("Scram", m_scram.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
