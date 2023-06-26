/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Trial.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

Trial::Trial() : 
    m_trialNameHasBeenSet(false),
    m_trialArnHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_experimentNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_metadataPropertiesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_trialComponentSummariesHasBeenSet(false)
{
}

Trial::Trial(JsonView jsonValue) : 
    m_trialNameHasBeenSet(false),
    m_trialArnHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_experimentNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_metadataPropertiesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_trialComponentSummariesHasBeenSet(false)
{
  *this = jsonValue;
}

Trial& Trial::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrialName"))
  {
    m_trialName = jsonValue.GetString("TrialName");

    m_trialNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrialArn"))
  {
    m_trialArn = jsonValue.GetString("TrialArn");

    m_trialArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExperimentName"))
  {
    m_experimentName = jsonValue.GetString("ExperimentName");

    m_experimentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetObject("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetObject("LastModifiedBy");

    m_lastModifiedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetadataProperties"))
  {
    m_metadataProperties = jsonValue.GetObject("MetadataProperties");

    m_metadataPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrialComponentSummaries"))
  {
    Aws::Utils::Array<JsonView> trialComponentSummariesJsonList = jsonValue.GetArray("TrialComponentSummaries");
    for(unsigned trialComponentSummariesIndex = 0; trialComponentSummariesIndex < trialComponentSummariesJsonList.GetLength(); ++trialComponentSummariesIndex)
    {
      m_trialComponentSummaries.push_back(trialComponentSummariesJsonList[trialComponentSummariesIndex].AsObject());
    }
    m_trialComponentSummariesHasBeenSet = true;
  }

  return *this;
}

JsonValue Trial::Jsonize() const
{
  JsonValue payload;

  if(m_trialNameHasBeenSet)
  {
   payload.WithString("TrialName", m_trialName);

  }

  if(m_trialArnHasBeenSet)
  {
   payload.WithString("TrialArn", m_trialArn);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_experimentNameHasBeenSet)
  {
   payload.WithString("ExperimentName", m_experimentName);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithObject("LastModifiedBy", m_lastModifiedBy.Jsonize());

  }

  if(m_metadataPropertiesHasBeenSet)
  {
   payload.WithObject("MetadataProperties", m_metadataProperties.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_trialComponentSummariesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> trialComponentSummariesJsonList(m_trialComponentSummaries.size());
   for(unsigned trialComponentSummariesIndex = 0; trialComponentSummariesIndex < trialComponentSummariesJsonList.GetLength(); ++trialComponentSummariesIndex)
   {
     trialComponentSummariesJsonList[trialComponentSummariesIndex].AsObject(m_trialComponentSummaries[trialComponentSummariesIndex].Jsonize());
   }
   payload.WithArray("TrialComponentSummaries", std::move(trialComponentSummariesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
