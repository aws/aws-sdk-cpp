/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/GetSessionResponseApproverResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MPA
{
namespace Model
{

GetSessionResponseApproverResponse::GetSessionResponseApproverResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

GetSessionResponseApproverResponse& GetSessionResponseApproverResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApproverId"))
  {
    m_approverId = jsonValue.GetString("ApproverId");
    m_approverIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentitySourceArn"))
  {
    m_identitySourceArn = jsonValue.GetString("IdentitySourceArn");
    m_identitySourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityId"))
  {
    m_identityId = jsonValue.GetString("IdentityId");
    m_identityIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Response"))
  {
    m_response = SessionResponseMapper::GetSessionResponseForName(jsonValue.GetString("Response"));
    m_responseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResponseTime"))
  {
    m_responseTime = jsonValue.GetString("ResponseTime");
    m_responseTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue GetSessionResponseApproverResponse::Jsonize() const
{
  JsonValue payload;

  if(m_approverIdHasBeenSet)
  {
   payload.WithString("ApproverId", m_approverId);

  }

  if(m_identitySourceArnHasBeenSet)
  {
   payload.WithString("IdentitySourceArn", m_identitySourceArn);

  }

  if(m_identityIdHasBeenSet)
  {
   payload.WithString("IdentityId", m_identityId);

  }

  if(m_responseHasBeenSet)
  {
   payload.WithString("Response", SessionResponseMapper::GetNameForSessionResponse(m_response));
  }

  if(m_responseTimeHasBeenSet)
  {
   payload.WithString("ResponseTime", m_responseTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace MPA
} // namespace Aws
