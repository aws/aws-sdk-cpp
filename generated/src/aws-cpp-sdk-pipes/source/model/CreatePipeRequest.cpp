/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/CreatePipeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pipes::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreatePipeRequest::SerializePayload() const
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

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  if(m_sourceParametersHasBeenSet)
  {
   payload.WithObject("SourceParameters", m_sourceParameters.Jsonize());

  }

  if(m_enrichmentHasBeenSet)
  {
   payload.WithString("Enrichment", m_enrichment);

  }

  if(m_enrichmentParametersHasBeenSet)
  {
   payload.WithObject("EnrichmentParameters", m_enrichmentParameters.Jsonize());

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  if(m_targetParametersHasBeenSet)
  {
   payload.WithObject("TargetParameters", m_targetParameters.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_logConfigurationHasBeenSet)
  {
   payload.WithObject("LogConfiguration", m_logConfiguration.Jsonize());

  }

  if(m_kmsKeyIdentifierHasBeenSet)
  {
   payload.WithString("KmsKeyIdentifier", m_kmsKeyIdentifier);

  }

  return payload.View().WriteReadable();
}




