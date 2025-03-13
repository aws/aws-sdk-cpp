/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/UpdateOpenIdConnectAccessTokenConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

UpdateOpenIdConnectAccessTokenConfiguration::UpdateOpenIdConnectAccessTokenConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateOpenIdConnectAccessTokenConfiguration& UpdateOpenIdConnectAccessTokenConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("principalIdClaim"))
  {
    m_principalIdClaim = jsonValue.GetString("principalIdClaim");
    m_principalIdClaimHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audiences"))
  {
    Aws::Utils::Array<JsonView> audiencesJsonList = jsonValue.GetArray("audiences");
    for(unsigned audiencesIndex = 0; audiencesIndex < audiencesJsonList.GetLength(); ++audiencesIndex)
    {
      m_audiences.push_back(audiencesJsonList[audiencesIndex].AsString());
    }
    m_audiencesHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateOpenIdConnectAccessTokenConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_principalIdClaimHasBeenSet)
  {
   payload.WithString("principalIdClaim", m_principalIdClaim);

  }

  if(m_audiencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audiencesJsonList(m_audiences.size());
   for(unsigned audiencesIndex = 0; audiencesIndex < audiencesJsonList.GetLength(); ++audiencesIndex)
   {
     audiencesJsonList[audiencesIndex].AsString(m_audiences[audiencesIndex]);
   }
   payload.WithArray("audiences", std::move(audiencesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
