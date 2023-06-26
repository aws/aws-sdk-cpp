/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/DataCollectionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

DataCollectionDetails::DataCollectionDetails() : 
    m_completionTimeHasBeenSet(false),
    m_failed(0),
    m_failedHasBeenSet(false),
    m_inProgress(0),
    m_inProgressHasBeenSet(false),
    m_servers(0),
    m_serversHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(AssessmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_success(0),
    m_successHasBeenSet(false)
{
}

DataCollectionDetails::DataCollectionDetails(JsonView jsonValue) : 
    m_completionTimeHasBeenSet(false),
    m_failed(0),
    m_failedHasBeenSet(false),
    m_inProgress(0),
    m_inProgressHasBeenSet(false),
    m_servers(0),
    m_serversHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(AssessmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_success(0),
    m_successHasBeenSet(false)
{
  *this = jsonValue;
}

DataCollectionDetails& DataCollectionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("completionTime"))
  {
    m_completionTime = jsonValue.GetDouble("completionTime");

    m_completionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failed"))
  {
    m_failed = jsonValue.GetInteger("failed");

    m_failedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inProgress"))
  {
    m_inProgress = jsonValue.GetInteger("inProgress");

    m_inProgressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("servers"))
  {
    m_servers = jsonValue.GetInteger("servers");

    m_serversHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AssessmentStatusMapper::GetAssessmentStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("success"))
  {
    m_success = jsonValue.GetInteger("success");

    m_successHasBeenSet = true;
  }

  return *this;
}

JsonValue DataCollectionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_completionTimeHasBeenSet)
  {
   payload.WithDouble("completionTime", m_completionTime.SecondsWithMSPrecision());
  }

  if(m_failedHasBeenSet)
  {
   payload.WithInteger("failed", m_failed);

  }

  if(m_inProgressHasBeenSet)
  {
   payload.WithInteger("inProgress", m_inProgress);

  }

  if(m_serversHasBeenSet)
  {
   payload.WithInteger("servers", m_servers);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AssessmentStatusMapper::GetNameForAssessmentStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_successHasBeenSet)
  {
   payload.WithInteger("success", m_success);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
