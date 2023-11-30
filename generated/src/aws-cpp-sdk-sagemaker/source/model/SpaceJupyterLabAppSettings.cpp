/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SpaceJupyterLabAppSettings.h>
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

SpaceJupyterLabAppSettings::SpaceJupyterLabAppSettings() : 
    m_defaultResourceSpecHasBeenSet(false),
    m_codeRepositoriesHasBeenSet(false)
{
}

SpaceJupyterLabAppSettings::SpaceJupyterLabAppSettings(JsonView jsonValue) : 
    m_defaultResourceSpecHasBeenSet(false),
    m_codeRepositoriesHasBeenSet(false)
{
  *this = jsonValue;
}

SpaceJupyterLabAppSettings& SpaceJupyterLabAppSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultResourceSpec"))
  {
    m_defaultResourceSpec = jsonValue.GetObject("DefaultResourceSpec");

    m_defaultResourceSpecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeRepositories"))
  {
    Aws::Utils::Array<JsonView> codeRepositoriesJsonList = jsonValue.GetArray("CodeRepositories");
    for(unsigned codeRepositoriesIndex = 0; codeRepositoriesIndex < codeRepositoriesJsonList.GetLength(); ++codeRepositoriesIndex)
    {
      m_codeRepositories.push_back(codeRepositoriesJsonList[codeRepositoriesIndex].AsObject());
    }
    m_codeRepositoriesHasBeenSet = true;
  }

  return *this;
}

JsonValue SpaceJupyterLabAppSettings::Jsonize() const
{
  JsonValue payload;

  if(m_defaultResourceSpecHasBeenSet)
  {
   payload.WithObject("DefaultResourceSpec", m_defaultResourceSpec.Jsonize());

  }

  if(m_codeRepositoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> codeRepositoriesJsonList(m_codeRepositories.size());
   for(unsigned codeRepositoriesIndex = 0; codeRepositoriesIndex < codeRepositoriesJsonList.GetLength(); ++codeRepositoriesIndex)
   {
     codeRepositoriesJsonList[codeRepositoriesIndex].AsObject(m_codeRepositories[codeRepositoriesIndex].Jsonize());
   }
   payload.WithArray("CodeRepositories", std::move(codeRepositoriesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
