/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsMskClusterClusterInfoClientAuthenticationTlsDetails.h>
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

AwsMskClusterClusterInfoClientAuthenticationTlsDetails::AwsMskClusterClusterInfoClientAuthenticationTlsDetails() : 
    m_certificateAuthorityArnListHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

AwsMskClusterClusterInfoClientAuthenticationTlsDetails::AwsMskClusterClusterInfoClientAuthenticationTlsDetails(JsonView jsonValue) : 
    m_certificateAuthorityArnListHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

AwsMskClusterClusterInfoClientAuthenticationTlsDetails& AwsMskClusterClusterInfoClientAuthenticationTlsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateAuthorityArnList"))
  {
    Aws::Utils::Array<JsonView> certificateAuthorityArnListJsonList = jsonValue.GetArray("CertificateAuthorityArnList");
    for(unsigned certificateAuthorityArnListIndex = 0; certificateAuthorityArnListIndex < certificateAuthorityArnListJsonList.GetLength(); ++certificateAuthorityArnListIndex)
    {
      m_certificateAuthorityArnList.push_back(certificateAuthorityArnListJsonList[certificateAuthorityArnListIndex].AsString());
    }
    m_certificateAuthorityArnListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsMskClusterClusterInfoClientAuthenticationTlsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_certificateAuthorityArnListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> certificateAuthorityArnListJsonList(m_certificateAuthorityArnList.size());
   for(unsigned certificateAuthorityArnListIndex = 0; certificateAuthorityArnListIndex < certificateAuthorityArnListJsonList.GetLength(); ++certificateAuthorityArnListIndex)
   {
     certificateAuthorityArnListJsonList[certificateAuthorityArnListIndex].AsString(m_certificateAuthorityArnList[certificateAuthorityArnListIndex]);
   }
   payload.WithArray("CertificateAuthorityArnList", std::move(certificateAuthorityArnListJsonList));

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
