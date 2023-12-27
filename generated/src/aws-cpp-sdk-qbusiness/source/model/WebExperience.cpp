/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/WebExperience.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

WebExperience::WebExperience() : 
    m_createdAtHasBeenSet(false),
    m_defaultEndpointHasBeenSet(false),
    m_status(WebExperienceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_webExperienceIdHasBeenSet(false)
{
}

WebExperience::WebExperience(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_defaultEndpointHasBeenSet(false),
    m_status(WebExperienceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_webExperienceIdHasBeenSet(false)
{
  *this = jsonValue;
}

WebExperience& WebExperience::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultEndpoint"))
  {
    m_defaultEndpoint = jsonValue.GetString("defaultEndpoint");

    m_defaultEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WebExperienceStatusMapper::GetWebExperienceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("webExperienceId"))
  {
    m_webExperienceId = jsonValue.GetString("webExperienceId");

    m_webExperienceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue WebExperience::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_defaultEndpointHasBeenSet)
  {
   payload.WithString("defaultEndpoint", m_defaultEndpoint);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", WebExperienceStatusMapper::GetNameForWebExperienceStatus(m_status));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_webExperienceIdHasBeenSet)
  {
   payload.WithString("webExperienceId", m_webExperienceId);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
