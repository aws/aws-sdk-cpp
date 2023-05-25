/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/ResourceShare.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RAM
{
namespace Model
{

ResourceShare::ResourceShare() : 
    m_resourceShareArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_owningAccountIdHasBeenSet(false),
    m_allowExternalPrincipals(false),
    m_allowExternalPrincipalsHasBeenSet(false),
    m_status(ResourceShareStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_featureSet(ResourceShareFeatureSet::NOT_SET),
    m_featureSetHasBeenSet(false)
{
}

ResourceShare::ResourceShare(JsonView jsonValue) : 
    m_resourceShareArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_owningAccountIdHasBeenSet(false),
    m_allowExternalPrincipals(false),
    m_allowExternalPrincipalsHasBeenSet(false),
    m_status(ResourceShareStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_featureSet(ResourceShareFeatureSet::NOT_SET),
    m_featureSetHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceShare& ResourceShare::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceShareArn"))
  {
    m_resourceShareArn = jsonValue.GetString("resourceShareArn");

    m_resourceShareArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owningAccountId"))
  {
    m_owningAccountId = jsonValue.GetString("owningAccountId");

    m_owningAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowExternalPrincipals"))
  {
    m_allowExternalPrincipals = jsonValue.GetBool("allowExternalPrincipals");

    m_allowExternalPrincipalsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ResourceShareStatusMapper::GetResourceShareStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("featureSet"))
  {
    m_featureSet = ResourceShareFeatureSetMapper::GetResourceShareFeatureSetForName(jsonValue.GetString("featureSet"));

    m_featureSetHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceShare::Jsonize() const
{
  JsonValue payload;

  if(m_resourceShareArnHasBeenSet)
  {
   payload.WithString("resourceShareArn", m_resourceShareArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_owningAccountIdHasBeenSet)
  {
   payload.WithString("owningAccountId", m_owningAccountId);

  }

  if(m_allowExternalPrincipalsHasBeenSet)
  {
   payload.WithBool("allowExternalPrincipals", m_allowExternalPrincipals);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ResourceShareStatusMapper::GetNameForResourceShareStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_featureSetHasBeenSet)
  {
   payload.WithString("featureSet", ResourceShareFeatureSetMapper::GetNameForResourceShareFeatureSet(m_featureSet));
  }

  return payload;
}

} // namespace Model
} // namespace RAM
} // namespace Aws
