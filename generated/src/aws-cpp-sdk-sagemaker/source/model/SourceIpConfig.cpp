/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SourceIpConfig.h>
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

SourceIpConfig::SourceIpConfig() : 
    m_cidrsHasBeenSet(false)
{
}

SourceIpConfig::SourceIpConfig(JsonView jsonValue) : 
    m_cidrsHasBeenSet(false)
{
  *this = jsonValue;
}

SourceIpConfig& SourceIpConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Cidrs"))
  {
    Aws::Utils::Array<JsonView> cidrsJsonList = jsonValue.GetArray("Cidrs");
    for(unsigned cidrsIndex = 0; cidrsIndex < cidrsJsonList.GetLength(); ++cidrsIndex)
    {
      m_cidrs.push_back(cidrsJsonList[cidrsIndex].AsString());
    }
    m_cidrsHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceIpConfig::Jsonize() const
{
  JsonValue payload;

  if(m_cidrsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cidrsJsonList(m_cidrs.size());
   for(unsigned cidrsIndex = 0; cidrsIndex < cidrsJsonList.GetLength(); ++cidrsIndex)
   {
     cidrsJsonList[cidrsIndex].AsString(m_cidrs[cidrsIndex]);
   }
   payload.WithArray("Cidrs", std::move(cidrsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
