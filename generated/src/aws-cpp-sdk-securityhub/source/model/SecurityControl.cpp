/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/SecurityControl.h>
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

SecurityControl::SecurityControl() : 
    m_securityControlIdHasBeenSet(false),
    m_securityControlArnHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_remediationUrlHasBeenSet(false),
    m_severityRating(SeverityRating::NOT_SET),
    m_severityRatingHasBeenSet(false),
    m_securityControlStatus(ControlStatus::NOT_SET),
    m_securityControlStatusHasBeenSet(false),
    m_updateStatus(UpdateStatus::NOT_SET),
    m_updateStatusHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_lastUpdateReasonHasBeenSet(false)
{
}

SecurityControl::SecurityControl(JsonView jsonValue) : 
    m_securityControlIdHasBeenSet(false),
    m_securityControlArnHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_remediationUrlHasBeenSet(false),
    m_severityRating(SeverityRating::NOT_SET),
    m_severityRatingHasBeenSet(false),
    m_securityControlStatus(ControlStatus::NOT_SET),
    m_securityControlStatusHasBeenSet(false),
    m_updateStatus(UpdateStatus::NOT_SET),
    m_updateStatusHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_lastUpdateReasonHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityControl& SecurityControl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecurityControlId"))
  {
    m_securityControlId = jsonValue.GetString("SecurityControlId");

    m_securityControlIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityControlArn"))
  {
    m_securityControlArn = jsonValue.GetString("SecurityControlArn");

    m_securityControlArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("SecurityControlStatus"))
  {
    m_securityControlStatus = ControlStatusMapper::GetControlStatusForName(jsonValue.GetString("SecurityControlStatus"));

    m_securityControlStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateStatus"))
  {
    m_updateStatus = UpdateStatusMapper::GetUpdateStatusForName(jsonValue.GetString("UpdateStatus"));

    m_updateStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsObject();
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateReason"))
  {
    m_lastUpdateReason = jsonValue.GetString("LastUpdateReason");

    m_lastUpdateReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityControl::Jsonize() const
{
  JsonValue payload;

  if(m_securityControlIdHasBeenSet)
  {
   payload.WithString("SecurityControlId", m_securityControlId);

  }

  if(m_securityControlArnHasBeenSet)
  {
   payload.WithString("SecurityControlArn", m_securityControlArn);

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

  if(m_securityControlStatusHasBeenSet)
  {
   payload.WithString("SecurityControlStatus", ControlStatusMapper::GetNameForControlStatus(m_securityControlStatus));
  }

  if(m_updateStatusHasBeenSet)
  {
   payload.WithString("UpdateStatus", UpdateStatusMapper::GetNameForUpdateStatus(m_updateStatus));
  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithObject(parametersItem.first, parametersItem.second.Jsonize());
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_lastUpdateReasonHasBeenSet)
  {
   payload.WithString("LastUpdateReason", m_lastUpdateReason);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
