/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/SensitiveDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

SensitiveDataResult::SensitiveDataResult() : 
    m_categoryHasBeenSet(false),
    m_detectionsHasBeenSet(false),
    m_totalCount(0),
    m_totalCountHasBeenSet(false)
{
}

SensitiveDataResult::SensitiveDataResult(JsonView jsonValue) : 
    m_categoryHasBeenSet(false),
    m_detectionsHasBeenSet(false),
    m_totalCount(0),
    m_totalCountHasBeenSet(false)
{
  *this = jsonValue;
}

SensitiveDataResult& SensitiveDataResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Category"))
  {
    m_category = jsonValue.GetString("Category");

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Detections"))
  {
    Aws::Utils::Array<JsonView> detectionsJsonList = jsonValue.GetArray("Detections");
    for(unsigned detectionsIndex = 0; detectionsIndex < detectionsJsonList.GetLength(); ++detectionsIndex)
    {
      m_detections.push_back(detectionsJsonList[detectionsIndex].AsObject());
    }
    m_detectionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalCount"))
  {
    m_totalCount = jsonValue.GetInt64("TotalCount");

    m_totalCountHasBeenSet = true;
  }

  return *this;
}

JsonValue SensitiveDataResult::Jsonize() const
{
  JsonValue payload;

  if(m_categoryHasBeenSet)
  {
   payload.WithString("Category", m_category);

  }

  if(m_detectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> detectionsJsonList(m_detections.size());
   for(unsigned detectionsIndex = 0; detectionsIndex < detectionsJsonList.GetLength(); ++detectionsIndex)
   {
     detectionsJsonList[detectionsIndex].AsObject(m_detections[detectionsIndex].Jsonize());
   }
   payload.WithArray("Detections", std::move(detectionsJsonList));

  }

  if(m_totalCountHasBeenSet)
  {
   payload.WithInt64("TotalCount", m_totalCount);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
