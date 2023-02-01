/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/OutputGroupDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

OutputGroupDetail::OutputGroupDetail() : 
    m_outputDetailsHasBeenSet(false)
{
}

OutputGroupDetail::OutputGroupDetail(JsonView jsonValue) : 
    m_outputDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

OutputGroupDetail& OutputGroupDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("outputDetails"))
  {
    Aws::Utils::Array<JsonView> outputDetailsJsonList = jsonValue.GetArray("outputDetails");
    for(unsigned outputDetailsIndex = 0; outputDetailsIndex < outputDetailsJsonList.GetLength(); ++outputDetailsIndex)
    {
      m_outputDetails.push_back(outputDetailsJsonList[outputDetailsIndex].AsObject());
    }
    m_outputDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputGroupDetail::Jsonize() const
{
  JsonValue payload;

  if(m_outputDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputDetailsJsonList(m_outputDetails.size());
   for(unsigned outputDetailsIndex = 0; outputDetailsIndex < outputDetailsJsonList.GetLength(); ++outputDetailsIndex)
   {
     outputDetailsJsonList[outputDetailsIndex].AsObject(m_outputDetails[outputDetailsIndex].Jsonize());
   }
   payload.WithArray("outputDetails", std::move(outputDetailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
