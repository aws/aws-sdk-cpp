/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/SecurityControlDefinition.h>
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

SecurityControlDefinition::SecurityControlDefinition() : 
    m_securityControlIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_remediationUrlHasBeenSet(false),
    m_severityRating(SeverityRating::NOT_SET),
    m_severityRatingHasBeenSet(false),
    m_currentRegionAvailability(RegionAvailabilityStatus::NOT_SET),
    m_currentRegionAvailabilityHasBeenSet(false)
{
}

SecurityControlDefinition::SecurityControlDefinition(JsonView jsonValue) : 
    m_securityControlIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_remediationUrlHasBeenSet(false),
    m_severityRating(SeverityRating::NOT_SET),
    m_severityRatingHasBeenSet(false),
    m_currentRegionAvailability(RegionAvailabilityStatus::NOT_SET),
    m_currentRegionAvailabilityHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityControlDefinition& SecurityControlDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecurityControlId"))
  {
    m_securityControlId = jsonValue.GetString("SecurityControlId");

    m_securityControlIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemediationUrl"))
  {
    m_remediationUrl = jsonValue.GetString("RemediationUrl");

    m_remediationUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SeverityRating"))
  {
    m_severityRating = SeverityRatingMapper::GetSeverityRatingForName(jsonValue.GetString("SeverityRating"));

    m_severityRatingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentRegionAvailability"))
  {
    m_currentRegionAvailability = RegionAvailabilityStatusMapper::GetRegionAvailabilityStatusForName(jsonValue.GetString("CurrentRegionAvailability"));

    m_currentRegionAvailabilityHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityControlDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_securityControlIdHasBeenSet)
  {
   payload.WithString("SecurityControlId", m_securityControlId);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_remediationUrlHasBeenSet)
  {
   payload.WithString("RemediationUrl", m_remediationUrl);

  }

  if(m_severityRatingHasBeenSet)
  {
   payload.WithString("SeverityRating", SeverityRatingMapper::GetNameForSeverityRating(m_severityRating));
  }

  if(m_currentRegionAvailabilityHasBeenSet)
  {
   payload.WithString("CurrentRegionAvailability", RegionAvailabilityStatusMapper::GetNameForRegionAvailabilityStatus(m_currentRegionAvailability));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
