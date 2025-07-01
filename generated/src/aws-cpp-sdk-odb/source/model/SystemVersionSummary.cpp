/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/SystemVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace odb
{
namespace Model
{

SystemVersionSummary::SystemVersionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

SystemVersionSummary& SystemVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("giVersion"))
  {
    m_giVersion = jsonValue.GetString("giVersion");
    m_giVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shape"))
  {
    m_shape = jsonValue.GetString("shape");
    m_shapeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("systemVersions"))
  {
    Aws::Utils::Array<JsonView> systemVersionsJsonList = jsonValue.GetArray("systemVersions");
    for(unsigned systemVersionsIndex = 0; systemVersionsIndex < systemVersionsJsonList.GetLength(); ++systemVersionsIndex)
    {
      m_systemVersions.push_back(systemVersionsJsonList[systemVersionsIndex].AsString());
    }
    m_systemVersionsHasBeenSet = true;
  }
  return *this;
}

JsonValue SystemVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_giVersionHasBeenSet)
  {
   payload.WithString("giVersion", m_giVersion);

  }

  if(m_shapeHasBeenSet)
  {
   payload.WithString("shape", m_shape);

  }

  if(m_systemVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> systemVersionsJsonList(m_systemVersions.size());
   for(unsigned systemVersionsIndex = 0; systemVersionsIndex < systemVersionsJsonList.GetLength(); ++systemVersionsIndex)
   {
     systemVersionsJsonList[systemVersionsIndex].AsString(m_systemVersions[systemVersionsIndex]);
   }
   payload.WithArray("systemVersions", std::move(systemVersionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
