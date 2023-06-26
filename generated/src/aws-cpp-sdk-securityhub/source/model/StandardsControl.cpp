/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/StandardsControl.h>
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

StandardsControl::StandardsControl() : 
    m_standardsControlArnHasBeenSet(false),
    m_controlStatus(ControlStatus::NOT_SET),
    m_controlStatusHasBeenSet(false),
    m_disabledReasonHasBeenSet(false),
    m_controlStatusUpdatedAtHasBeenSet(false),
    m_controlIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_remediationUrlHasBeenSet(false),
    m_severityRating(SeverityRating::NOT_SET),
    m_severityRatingHasBeenSet(false),
    m_relatedRequirementsHasBeenSet(false)
{
}

StandardsControl::StandardsControl(JsonView jsonValue) : 
    m_standardsControlArnHasBeenSet(false),
    m_controlStatus(ControlStatus::NOT_SET),
    m_controlStatusHasBeenSet(false),
    m_disabledReasonHasBeenSet(false),
    m_controlStatusUpdatedAtHasBeenSet(false),
    m_controlIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_remediationUrlHasBeenSet(false),
    m_severityRating(SeverityRating::NOT_SET),
    m_severityRatingHasBeenSet(false),
    m_relatedRequirementsHasBeenSet(false)
{
  *this = jsonValue;
}

StandardsControl& StandardsControl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StandardsControlArn"))
  {
    m_standardsControlArn = jsonValue.GetString("StandardsControlArn");

    m_standardsControlArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ControlStatus"))
  {
    m_controlStatus = ControlStatusMapper::GetControlStatusForName(jsonValue.GetString("ControlStatus"));

    m_controlStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisabledReason"))
  {
    m_disabledReason = jsonValue.GetString("DisabledReason");

    m_disabledReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ControlStatusUpdatedAt"))
  {
    m_controlStatusUpdatedAt = jsonValue.GetString("ControlStatusUpdatedAt");

    m_controlStatusUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ControlId"))
  {
    m_controlId = jsonValue.GetString("ControlId");

    m_controlIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("RelatedRequirements"))
  {
    Aws::Utils::Array<JsonView> relatedRequirementsJsonList = jsonValue.GetArray("RelatedRequirements");
    for(unsigned relatedRequirementsIndex = 0; relatedRequirementsIndex < relatedRequirementsJsonList.GetLength(); ++relatedRequirementsIndex)
    {
      m_relatedRequirements.push_back(relatedRequirementsJsonList[relatedRequirementsIndex].AsString());
    }
    m_relatedRequirementsHasBeenSet = true;
  }

  return *this;
}

JsonValue StandardsControl::Jsonize() const
{
  JsonValue payload;

  if(m_standardsControlArnHasBeenSet)
  {
   payload.WithString("StandardsControlArn", m_standardsControlArn);

  }

  if(m_controlStatusHasBeenSet)
  {
   payload.WithString("ControlStatus", ControlStatusMapper::GetNameForControlStatus(m_controlStatus));
  }

  if(m_disabledReasonHasBeenSet)
  {
   payload.WithString("DisabledReason", m_disabledReason);

  }

  if(m_controlStatusUpdatedAtHasBeenSet)
  {
   payload.WithString("ControlStatusUpdatedAt", m_controlStatusUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_controlIdHasBeenSet)
  {
   payload.WithString("ControlId", m_controlId);

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

  if(m_relatedRequirementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relatedRequirementsJsonList(m_relatedRequirements.size());
   for(unsigned relatedRequirementsIndex = 0; relatedRequirementsIndex < relatedRequirementsJsonList.GetLength(); ++relatedRequirementsIndex)
   {
     relatedRequirementsJsonList[relatedRequirementsIndex].AsString(m_relatedRequirements[relatedRequirementsIndex]);
   }
   payload.WithArray("RelatedRequirements", std::move(relatedRequirementsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
