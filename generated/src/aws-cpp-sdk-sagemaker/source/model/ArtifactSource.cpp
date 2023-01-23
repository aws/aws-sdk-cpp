/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ArtifactSource.h>
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

ArtifactSource::ArtifactSource() : 
    m_sourceUriHasBeenSet(false),
    m_sourceTypesHasBeenSet(false)
{
}

ArtifactSource::ArtifactSource(JsonView jsonValue) : 
    m_sourceUriHasBeenSet(false),
    m_sourceTypesHasBeenSet(false)
{
  *this = jsonValue;
}

ArtifactSource& ArtifactSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceUri"))
  {
    m_sourceUri = jsonValue.GetString("SourceUri");

    m_sourceUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceTypes"))
  {
    Aws::Utils::Array<JsonView> sourceTypesJsonList = jsonValue.GetArray("SourceTypes");
    for(unsigned sourceTypesIndex = 0; sourceTypesIndex < sourceTypesJsonList.GetLength(); ++sourceTypesIndex)
    {
      m_sourceTypes.push_back(sourceTypesJsonList[sourceTypesIndex].AsObject());
    }
    m_sourceTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue ArtifactSource::Jsonize() const
{
  JsonValue payload;

  if(m_sourceUriHasBeenSet)
  {
   payload.WithString("SourceUri", m_sourceUri);

  }

  if(m_sourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceTypesJsonList(m_sourceTypes.size());
   for(unsigned sourceTypesIndex = 0; sourceTypesIndex < sourceTypesJsonList.GetLength(); ++sourceTypesIndex)
   {
     sourceTypesJsonList[sourceTypesIndex].AsObject(m_sourceTypes[sourceTypesIndex].Jsonize());
   }
   payload.WithArray("SourceTypes", std::move(sourceTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
