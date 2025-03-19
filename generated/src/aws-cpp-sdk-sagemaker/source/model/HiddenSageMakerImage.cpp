/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HiddenSageMakerImage.h>
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

HiddenSageMakerImage::HiddenSageMakerImage(JsonView jsonValue)
{
  *this = jsonValue;
}

HiddenSageMakerImage& HiddenSageMakerImage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SageMakerImageName"))
  {
    m_sageMakerImageName = SageMakerImageNameMapper::GetSageMakerImageNameForName(jsonValue.GetString("SageMakerImageName"));
    m_sageMakerImageNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VersionAliases"))
  {
    Aws::Utils::Array<JsonView> versionAliasesJsonList = jsonValue.GetArray("VersionAliases");
    for(unsigned versionAliasesIndex = 0; versionAliasesIndex < versionAliasesJsonList.GetLength(); ++versionAliasesIndex)
    {
      m_versionAliases.push_back(versionAliasesJsonList[versionAliasesIndex].AsString());
    }
    m_versionAliasesHasBeenSet = true;
  }
  return *this;
}

JsonValue HiddenSageMakerImage::Jsonize() const
{
  JsonValue payload;

  if(m_sageMakerImageNameHasBeenSet)
  {
   payload.WithString("SageMakerImageName", SageMakerImageNameMapper::GetNameForSageMakerImageName(m_sageMakerImageName));
  }

  if(m_versionAliasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> versionAliasesJsonList(m_versionAliases.size());
   for(unsigned versionAliasesIndex = 0; versionAliasesIndex < versionAliasesJsonList.GetLength(); ++versionAliasesIndex)
   {
     versionAliasesJsonList[versionAliasesIndex].AsString(m_versionAliases[versionAliasesIndex]);
   }
   payload.WithArray("VersionAliases", std::move(versionAliasesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
