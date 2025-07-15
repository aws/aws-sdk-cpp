/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3vectors/model/VectorData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Vectors
{
namespace Model
{

VectorData::VectorData(JsonView jsonValue)
{
  *this = jsonValue;
}

VectorData& VectorData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("float32"))
  {
    Aws::Utils::Array<JsonView> float32JsonList = jsonValue.GetArray("float32");
    for(unsigned float32Index = 0; float32Index < float32JsonList.GetLength(); ++float32Index)
    {
      m_float32.push_back(float32JsonList[float32Index].AsDouble());
    }
    m_float32HasBeenSet = true;
  }
  return *this;
}

JsonValue VectorData::Jsonize() const
{
  JsonValue payload;

  if(m_float32HasBeenSet)
  {
   Aws::Utils::Array<JsonValue> float32JsonList(m_float32.size());
   for(unsigned float32Index = 0; float32Index < float32JsonList.GetLength(); ++float32Index)
   {
     float32JsonList[float32Index].AsDouble(m_float32[float32Index]);
   }
   payload.WithArray("float32", std::move(float32JsonList));

  }

  return payload;
}

} // namespace Model
} // namespace S3Vectors
} // namespace Aws
