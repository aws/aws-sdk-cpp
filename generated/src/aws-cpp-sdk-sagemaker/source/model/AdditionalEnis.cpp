/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AdditionalEnis.h>
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

AdditionalEnis::AdditionalEnis(JsonView jsonValue)
{
  *this = jsonValue;
}

AdditionalEnis& AdditionalEnis::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EfaEnis"))
  {
    Aws::Utils::Array<JsonView> efaEnisJsonList = jsonValue.GetArray("EfaEnis");
    for(unsigned efaEnisIndex = 0; efaEnisIndex < efaEnisJsonList.GetLength(); ++efaEnisIndex)
    {
      m_efaEnis.push_back(efaEnisJsonList[efaEnisIndex].AsString());
    }
    m_efaEnisHasBeenSet = true;
  }
  return *this;
}

JsonValue AdditionalEnis::Jsonize() const
{
  JsonValue payload;

  if(m_efaEnisHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> efaEnisJsonList(m_efaEnis.size());
   for(unsigned efaEnisIndex = 0; efaEnisIndex < efaEnisJsonList.GetLength(); ++efaEnisIndex)
   {
     efaEnisJsonList[efaEnisIndex].AsString(m_efaEnis[efaEnisIndex]);
   }
   payload.WithArray("EfaEnis", std::move(efaEnisJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
