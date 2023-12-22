/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/TransportMediaInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

TransportMediaInfo::TransportMediaInfo() : 
    m_programsHasBeenSet(false)
{
}

TransportMediaInfo::TransportMediaInfo(JsonView jsonValue) : 
    m_programsHasBeenSet(false)
{
  *this = jsonValue;
}

TransportMediaInfo& TransportMediaInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("programs"))
  {
    Aws::Utils::Array<JsonView> programsJsonList = jsonValue.GetArray("programs");
    for(unsigned programsIndex = 0; programsIndex < programsJsonList.GetLength(); ++programsIndex)
    {
      m_programs.push_back(programsJsonList[programsIndex].AsObject());
    }
    m_programsHasBeenSet = true;
  }

  return *this;
}

JsonValue TransportMediaInfo::Jsonize() const
{
  JsonValue payload;

  if(m_programsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> programsJsonList(m_programs.size());
   for(unsigned programsIndex = 0; programsIndex < programsJsonList.GetLength(); ++programsIndex)
   {
     programsJsonList[programsIndex].AsObject(m_programs[programsIndex].Jsonize());
   }
   payload.WithArray("programs", std::move(programsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
