/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/CanaryRun.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

CanaryRun::CanaryRun(JsonView jsonValue)
{
  *this = jsonValue;
}

CanaryRun& CanaryRun::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScheduledRunId"))
  {
    m_scheduledRunId = jsonValue.GetString("ScheduledRunId");
    m_scheduledRunIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetryAttempt"))
  {
    m_retryAttempt = jsonValue.GetInteger("RetryAttempt");
    m_retryAttemptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Timeline"))
  {
    m_timeline = jsonValue.GetObject("Timeline");
    m_timelineHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ArtifactS3Location"))
  {
    m_artifactS3Location = jsonValue.GetString("ArtifactS3Location");
    m_artifactS3LocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DryRunConfig"))
  {
    m_dryRunConfig = jsonValue.GetObject("DryRunConfig");
    m_dryRunConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BrowserType"))
  {
    m_browserType = BrowserTypeMapper::GetBrowserTypeForName(jsonValue.GetString("BrowserType"));
    m_browserTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue CanaryRun::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_scheduledRunIdHasBeenSet)
  {
   payload.WithString("ScheduledRunId", m_scheduledRunId);

  }

  if(m_retryAttemptHasBeenSet)
  {
   payload.WithInteger("RetryAttempt", m_retryAttempt);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_timelineHasBeenSet)
  {
   payload.WithObject("Timeline", m_timeline.Jsonize());

  }

  if(m_artifactS3LocationHasBeenSet)
  {
   payload.WithString("ArtifactS3Location", m_artifactS3Location);

  }

  if(m_dryRunConfigHasBeenSet)
  {
   payload.WithObject("DryRunConfig", m_dryRunConfig.Jsonize());

  }

  if(m_browserTypeHasBeenSet)
  {
   payload.WithString("BrowserType", BrowserTypeMapper::GetNameForBrowserType(m_browserType));
  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
