/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/RecommendationDisruptionCompliance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

RecommendationDisruptionCompliance::RecommendationDisruptionCompliance(JsonView jsonValue)
{
  *this = jsonValue;
}

RecommendationDisruptionCompliance& RecommendationDisruptionCompliance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("expectedComplianceStatus"))
  {
    m_expectedComplianceStatus = ComplianceStatusMapper::GetComplianceStatusForName(jsonValue.GetString("expectedComplianceStatus"));
    m_expectedComplianceStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expectedRpoDescription"))
  {
    m_expectedRpoDescription = jsonValue.GetString("expectedRpoDescription");
    m_expectedRpoDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expectedRpoInSecs"))
  {
    m_expectedRpoInSecs = jsonValue.GetInteger("expectedRpoInSecs");
    m_expectedRpoInSecsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expectedRtoDescription"))
  {
    m_expectedRtoDescription = jsonValue.GetString("expectedRtoDescription");
    m_expectedRtoDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expectedRtoInSecs"))
  {
    m_expectedRtoInSecs = jsonValue.GetInteger("expectedRtoInSecs");
    m_expectedRtoInSecsHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendationDisruptionCompliance::Jsonize() const
{
  JsonValue payload;

  if(m_expectedComplianceStatusHasBeenSet)
  {
   payload.WithString("expectedComplianceStatus", ComplianceStatusMapper::GetNameForComplianceStatus(m_expectedComplianceStatus));
  }

  if(m_expectedRpoDescriptionHasBeenSet)
  {
   payload.WithString("expectedRpoDescription", m_expectedRpoDescription);

  }

  if(m_expectedRpoInSecsHasBeenSet)
  {
   payload.WithInteger("expectedRpoInSecs", m_expectedRpoInSecs);

  }

  if(m_expectedRtoDescriptionHasBeenSet)
  {
   payload.WithString("expectedRtoDescription", m_expectedRtoDescription);

  }

  if(m_expectedRtoInSecsHasBeenSet)
  {
   payload.WithInteger("expectedRtoInSecs", m_expectedRtoInSecs);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
