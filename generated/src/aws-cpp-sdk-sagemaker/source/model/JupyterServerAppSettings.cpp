/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/JupyterServerAppSettings.h>
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

JupyterServerAppSettings::JupyterServerAppSettings() : 
    m_defaultResourceSpecHasBeenSet(false),
    m_lifecycleConfigArnsHasBeenSet(false),
    m_codeRepositoriesHasBeenSet(false)
{
}

JupyterServerAppSettings::JupyterServerAppSettings(JsonView jsonValue) : 
    m_defaultResourceSpecHasBeenSet(false),
    m_lifecycleConfigArnsHasBeenSet(false),
    m_codeRepositoriesHasBeenSet(false)
{
  *this = jsonValue;
}

JupyterServerAppSettings& JupyterServerAppSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultResourceSpec"))
  {
    m_defaultResourceSpec = jsonValue.GetObject("DefaultResourceSpec");

    m_defaultResourceSpecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LifecycleConfigArns"))
  {
    Aws::Utils::Array<JsonView> lifecycleConfigArnsJsonList = jsonValue.GetArray("LifecycleConfigArns");
    for(unsigned lifecycleConfigArnsIndex = 0; lifecycleConfigArnsIndex < lifecycleConfigArnsJsonList.GetLength(); ++lifecycleConfigArnsIndex)
    {
      m_lifecycleConfigArns.push_back(lifecycleConfigArnsJsonList[lifecycleConfigArnsIndex].AsString());
    }
    m_lifecycleConfigArnsHasBeenSet = true;
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

JsonValue JupyterServerAppSettings::Jsonize() const
{
  JsonValue payload;

  if(m_defaultResourceSpecHasBeenSet)
  {
   payload.WithObject("DefaultResourceSpec", m_defaultResourceSpec.Jsonize());

  }

  if(m_lifecycleConfigArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lifecycleConfigArnsJsonList(m_lifecycleConfigArns.size());
   for(unsigned lifecycleConfigArnsIndex = 0; lifecycleConfigArnsIndex < lifecycleConfigArnsJsonList.GetLength(); ++lifecycleConfigArnsIndex)
   {
     lifecycleConfigArnsJsonList[lifecycleConfigArnsIndex].AsString(m_lifecycleConfigArns[lifecycleConfigArnsIndex]);
   }
   payload.WithArray("LifecycleConfigArns", std::move(lifecycleConfigArnsJsonList));

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
