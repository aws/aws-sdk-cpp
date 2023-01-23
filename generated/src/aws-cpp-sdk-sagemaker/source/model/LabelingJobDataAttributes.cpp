/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/LabelingJobDataAttributes.h>
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

LabelingJobDataAttributes::LabelingJobDataAttributes() : 
    m_contentClassifiersHasBeenSet(false)
{
}

LabelingJobDataAttributes::LabelingJobDataAttributes(JsonView jsonValue) : 
    m_contentClassifiersHasBeenSet(false)
{
  *this = jsonValue;
}

LabelingJobDataAttributes& LabelingJobDataAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContentClassifiers"))
  {
    Aws::Utils::Array<JsonView> contentClassifiersJsonList = jsonValue.GetArray("ContentClassifiers");
    for(unsigned contentClassifiersIndex = 0; contentClassifiersIndex < contentClassifiersJsonList.GetLength(); ++contentClassifiersIndex)
    {
      m_contentClassifiers.push_back(ContentClassifierMapper::GetContentClassifierForName(contentClassifiersJsonList[contentClassifiersIndex].AsString()));
    }
    m_contentClassifiersHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelingJobDataAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_contentClassifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contentClassifiersJsonList(m_contentClassifiers.size());
   for(unsigned contentClassifiersIndex = 0; contentClassifiersIndex < contentClassifiersJsonList.GetLength(); ++contentClassifiersIndex)
   {
     contentClassifiersJsonList[contentClassifiersIndex].AsString(ContentClassifierMapper::GetNameForContentClassifier(m_contentClassifiers[contentClassifiersIndex]));
   }
   payload.WithArray("ContentClassifiers", std::move(contentClassifiersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
