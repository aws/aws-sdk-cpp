/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/UpdatePipeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pipes::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePipeRequest::UpdatePipeRequest() : 
    m_descriptionHasBeenSet(false),
    m_desiredState(RequestedPipeState::NOT_SET),
    m_desiredStateHasBeenSet(false),
    m_enrichmentHasBeenSet(false),
    m_enrichmentParametersHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_sourceParametersHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_targetParametersHasBeenSet(false)
{
}

Aws::String UpdatePipeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_desiredStateHasBeenSet)
  {
   payload.WithString("DesiredState", RequestedPipeStateMapper::GetNameForRequestedPipeState(m_desiredState));
  }

  if(m_enrichmentHasBeenSet)
  {
   payload.WithString("Enrichment", m_enrichment);

  }

  if(m_enrichmentParametersHasBeenSet)
  {
   payload.WithObject("EnrichmentParameters", m_enrichmentParameters.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_sourceParametersHasBeenSet)
  {
   payload.WithObject("SourceParameters", m_sourceParameters.Jsonize());

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  if(m_targetParametersHasBeenSet)
  {
   payload.WithObject("TargetParameters", m_targetParameters.Jsonize());

  }

  return payload.View().WriteReadable();
}




