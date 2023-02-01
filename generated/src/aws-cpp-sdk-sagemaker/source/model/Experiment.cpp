/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Experiment.h>
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

Experiment::Experiment() : 
    m_experimentNameHasBeenSet(false),
    m_experimentArnHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Experiment::Experiment(JsonView jsonValue) : 
    m_experimentNameHasBeenSet(false),
    m_experimentArnHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Experiment& Experiment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExperimentName"))
  {
    m_experimentName = jsonValue.GetString("ExperimentName");

    m_experimentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExperimentArn"))
  {
    m_experimentArn = jsonValue.GetString("ExperimentArn");

    m_experimentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetObject("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
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

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Experiment::Jsonize() const
{
  JsonValue payload;

  if(m_experimentNameHasBeenSet)
  {
   payload.WithString("ExperimentName", m_experimentName);

  }

  if(m_experimentArnHasBeenSet)
  {
   payload.WithString("ExperimentArn", m_experimentArn);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
