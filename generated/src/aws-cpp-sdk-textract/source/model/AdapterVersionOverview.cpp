/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/AdapterVersionOverview.h>
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

AdapterVersionOverview::AdapterVersionOverview() : 
    m_adapterIdHasBeenSet(false),
    m_adapterVersionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_featureTypesHasBeenSet(false),
    m_status(AdapterVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

AdapterVersionOverview::AdapterVersionOverview(JsonView jsonValue) : 
    m_adapterIdHasBeenSet(false),
    m_adapterVersionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_featureTypesHasBeenSet(false),
    m_status(AdapterVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

AdapterVersionOverview& AdapterVersionOverview::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdapterId"))
  {
    m_adapterId = jsonValue.GetString("AdapterId");

    m_adapterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdapterVersion"))
  {
    m_adapterVersion = jsonValue.GetString("AdapterVersion");

    m_adapterVersionHasBeenSet = true;
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

  if(jsonValue.ValueExists("Status"))
  {
    m_status = AdapterVersionStatusMapper::GetAdapterVersionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue AdapterVersionOverview::Jsonize() const
{
  JsonValue payload;

  if(m_adapterIdHasBeenSet)
  {
   payload.WithString("AdapterId", m_adapterId);

  }

  if(m_adapterVersionHasBeenSet)
  {
   payload.WithString("AdapterVersion", m_adapterVersion);

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

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", AdapterVersionStatusMapper::GetNameForAdapterVersionStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
