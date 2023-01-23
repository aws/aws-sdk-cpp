/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/KernelGatewayImageConfig.h>
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

KernelGatewayImageConfig::KernelGatewayImageConfig() : 
    m_kernelSpecsHasBeenSet(false),
    m_fileSystemConfigHasBeenSet(false)
{
}

KernelGatewayImageConfig::KernelGatewayImageConfig(JsonView jsonValue) : 
    m_kernelSpecsHasBeenSet(false),
    m_fileSystemConfigHasBeenSet(false)
{
  *this = jsonValue;
}

KernelGatewayImageConfig& KernelGatewayImageConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KernelSpecs"))
  {
    Aws::Utils::Array<JsonView> kernelSpecsJsonList = jsonValue.GetArray("KernelSpecs");
    for(unsigned kernelSpecsIndex = 0; kernelSpecsIndex < kernelSpecsJsonList.GetLength(); ++kernelSpecsIndex)
    {
      m_kernelSpecs.push_back(kernelSpecsJsonList[kernelSpecsIndex].AsObject());
    }
    m_kernelSpecsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemConfig"))
  {
    m_fileSystemConfig = jsonValue.GetObject("FileSystemConfig");

    m_fileSystemConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue KernelGatewayImageConfig::Jsonize() const
{
  JsonValue payload;

  if(m_kernelSpecsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> kernelSpecsJsonList(m_kernelSpecs.size());
   for(unsigned kernelSpecsIndex = 0; kernelSpecsIndex < kernelSpecsJsonList.GetLength(); ++kernelSpecsIndex)
   {
     kernelSpecsJsonList[kernelSpecsIndex].AsObject(m_kernelSpecs[kernelSpecsIndex].Jsonize());
   }
   payload.WithArray("KernelSpecs", std::move(kernelSpecsJsonList));

  }

  if(m_fileSystemConfigHasBeenSet)
  {
   payload.WithObject("FileSystemConfig", m_fileSystemConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
