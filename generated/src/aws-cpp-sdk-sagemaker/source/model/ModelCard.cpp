/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelCard.h>
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

ModelCard::ModelCard() : 
    m_modelCardArnHasBeenSet(false),
    m_modelCardNameHasBeenSet(false),
    m_modelCardVersion(0),
    m_modelCardVersionHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_modelCardStatus(ModelCardStatus::NOT_SET),
    m_modelCardStatusHasBeenSet(false),
    m_securityConfigHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_riskRatingHasBeenSet(false)
{
}

ModelCard::ModelCard(JsonView jsonValue) : 
    m_modelCardArnHasBeenSet(false),
    m_modelCardNameHasBeenSet(false),
    m_modelCardVersion(0),
    m_modelCardVersionHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_modelCardStatus(ModelCardStatus::NOT_SET),
    m_modelCardStatusHasBeenSet(false),
    m_securityConfigHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_riskRatingHasBeenSet(false)
{
  *this = jsonValue;
}

ModelCard& ModelCard::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelCardArn"))
  {
    m_modelCardArn = jsonValue.GetString("ModelCardArn");

    m_modelCardArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelCardName"))
  {
    m_modelCardName = jsonValue.GetString("ModelCardName");

    m_modelCardNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelCardVersion"))
  {
    m_modelCardVersion = jsonValue.GetInteger("ModelCardVersion");

    m_modelCardVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelCardStatus"))
  {
    m_modelCardStatus = ModelCardStatusMapper::GetModelCardStatusForName(jsonValue.GetString("ModelCardStatus"));

    m_modelCardStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityConfig"))
  {
    m_securityConfig = jsonValue.GetObject("SecurityConfig");

    m_securityConfigHasBeenSet = true;
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

  if(jsonValue.ValueExists("ModelId"))
  {
    m_modelId = jsonValue.GetString("ModelId");

    m_modelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RiskRating"))
  {
    m_riskRating = jsonValue.GetString("RiskRating");

    m_riskRatingHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelCard::Jsonize() const
{
  JsonValue payload;

  if(m_modelCardArnHasBeenSet)
  {
   payload.WithString("ModelCardArn", m_modelCardArn);

  }

  if(m_modelCardNameHasBeenSet)
  {
   payload.WithString("ModelCardName", m_modelCardName);

  }

  if(m_modelCardVersionHasBeenSet)
  {
   payload.WithInteger("ModelCardVersion", m_modelCardVersion);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_modelCardStatusHasBeenSet)
  {
   payload.WithString("ModelCardStatus", ModelCardStatusMapper::GetNameForModelCardStatus(m_modelCardStatus));
  }

  if(m_securityConfigHasBeenSet)
  {
   payload.WithObject("SecurityConfig", m_securityConfig.Jsonize());

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

  if(m_modelIdHasBeenSet)
  {
   payload.WithString("ModelId", m_modelId);

  }

  if(m_riskRatingHasBeenSet)
  {
   payload.WithString("RiskRating", m_riskRating);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
