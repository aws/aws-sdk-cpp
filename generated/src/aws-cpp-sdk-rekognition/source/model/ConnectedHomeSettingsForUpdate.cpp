/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ConnectedHomeSettingsForUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

ConnectedHomeSettingsForUpdate::ConnectedHomeSettingsForUpdate() : 
    m_labelsHasBeenSet(false),
    m_minConfidence(0.0),
    m_minConfidenceHasBeenSet(false)
{
}

ConnectedHomeSettingsForUpdate::ConnectedHomeSettingsForUpdate(JsonView jsonValue) : 
    m_labelsHasBeenSet(false),
    m_minConfidence(0.0),
    m_minConfidenceHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectedHomeSettingsForUpdate& ConnectedHomeSettingsForUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Labels"))
  {
    Aws::Utils::Array<JsonView> labelsJsonList = jsonValue.GetArray("Labels");
    for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
    {
      m_labels.push_back(labelsJsonList[labelsIndex].AsString());
    }
    m_labelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinConfidence"))
  {
    m_minConfidence = jsonValue.GetDouble("MinConfidence");

    m_minConfidenceHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectedHomeSettingsForUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_labelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelsJsonList(m_labels.size());
   for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
   {
     labelsJsonList[labelsIndex].AsString(m_labels[labelsIndex]);
   }
   payload.WithArray("Labels", std::move(labelsJsonList));

  }

  if(m_minConfidenceHasBeenSet)
  {
   payload.WithDouble("MinConfidence", m_minConfidence);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
