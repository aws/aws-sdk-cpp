/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsMskClusterClusterInfoEncryptionInfoDetails.h>
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

AwsMskClusterClusterInfoEncryptionInfoDetails::AwsMskClusterClusterInfoEncryptionInfoDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsMskClusterClusterInfoEncryptionInfoDetails& AwsMskClusterClusterInfoEncryptionInfoDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EncryptionInTransit"))
  {
    m_encryptionInTransit = jsonValue.GetObject("EncryptionInTransit");
    m_encryptionInTransitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptionAtRest"))
  {
    m_encryptionAtRest = jsonValue.GetObject("EncryptionAtRest");
    m_encryptionAtRestHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsMskClusterClusterInfoEncryptionInfoDetails::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionInTransitHasBeenSet)
  {
   payload.WithObject("EncryptionInTransit", m_encryptionInTransit.Jsonize());

  }

  if(m_encryptionAtRestHasBeenSet)
  {
   payload.WithObject("EncryptionAtRest", m_encryptionAtRest.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
