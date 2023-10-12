/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/AdapterOverview.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

AdapterOverview::AdapterOverview() : 
    m_adapterIdHasBeenSet(false),
    m_adapterNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_featureTypesHasBeenSet(false)
{
}

AdapterOverview::AdapterOverview(JsonView jsonValue) : 
    m_adapterIdHasBeenSet(false),
    m_adapterNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_featureTypesHasBeenSet(false)
{
  *this = jsonValue;
}

AdapterOverview& AdapterOverview::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdapterId"))
  {
    m_adapterId = jsonValue.GetString("AdapterId");

    m_adapterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdapterName"))
  {
    m_adapterName = jsonValue.GetString("AdapterName");

    m_adapterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureTypes"))
  {
    Aws::Utils::Array<JsonView> featureTypesJsonList = jsonValue.GetArray("FeatureTypes");
    for(unsigned featureTypesIndex = 0; featureTypesIndex < featureTypesJsonList.GetLength(); ++featureTypesIndex)
    {
      m_featureTypes.push_back(FeatureTypeMapper::GetFeatureTypeForName(featureTypesJsonList[featureTypesIndex].AsString()));
    }
    m_featureTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue AdapterOverview::Jsonize() const
{
  JsonValue payload;

  if(m_adapterIdHasBeenSet)
  {
   payload.WithString("AdapterId", m_adapterId);

  }

  if(m_adapterNameHasBeenSet)
  {
   payload.WithString("AdapterName", m_adapterName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_featureTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featureTypesJsonList(m_featureTypes.size());
   for(unsigned featureTypesIndex = 0; featureTypesIndex < featureTypesJsonList.GetLength(); ++featureTypesIndex)
   {
     featureTypesJsonList[featureTypesIndex].AsString(FeatureTypeMapper::GetNameForFeatureType(m_featureTypes[featureTypesIndex]));
   }
   payload.WithArray("FeatureTypes", std::move(featureTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
