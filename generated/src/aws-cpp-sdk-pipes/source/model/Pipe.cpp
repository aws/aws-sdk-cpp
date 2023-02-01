/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/Pipe.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

Pipe::Pipe() : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_currentState(PipeState::NOT_SET),
    m_currentStateHasBeenSet(false),
    m_desiredState(RequestedPipeState::NOT_SET),
    m_desiredStateHasBeenSet(false),
    m_enrichmentHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

Pipe::Pipe(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_currentState(PipeState::NOT_SET),
    m_currentStateHasBeenSet(false),
    m_desiredState(RequestedPipeState::NOT_SET),
    m_desiredStateHasBeenSet(false),
    m_enrichmentHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_targetHasBeenSet(false)
{
  *this = jsonValue;
}

Pipe& Pipe::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentState"))
  {
    m_currentState = PipeStateMapper::GetPipeStateForName(jsonValue.GetString("CurrentState"));

    m_currentStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DesiredState"))
  {
    m_desiredState = RequestedPipeStateMapper::GetRequestedPipeStateForName(jsonValue.GetString("DesiredState"));

    m_desiredStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enrichment"))
  {
    m_enrichment = jsonValue.GetString("Enrichment");

    m_enrichmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");

    m_stateReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");

    m_targetHasBeenSet = true;
  }

  return *this;
}

JsonValue Pipe::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_currentStateHasBeenSet)
  {
   payload.WithString("CurrentState", PipeStateMapper::GetNameForPipeState(m_currentState));
  }

  if(m_desiredStateHasBeenSet)
  {
   payload.WithString("DesiredState", RequestedPipeStateMapper::GetNameForRequestedPipeState(m_desiredState));
  }

  if(m_enrichmentHasBeenSet)
  {
   payload.WithString("Enrichment", m_enrichment);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  if(m_stateReasonHasBeenSet)
  {
   payload.WithString("StateReason", m_stateReason);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
