/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/DataProtectionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

DataProtectionConfig::DataProtectionConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

DataProtectionConfig& DataProtectionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataProtections"))
  {
    Aws::Utils::Array<JsonView> dataProtectionsJsonList = jsonValue.GetArray("DataProtections");
    for(unsigned dataProtectionsIndex = 0; dataProtectionsIndex < dataProtectionsJsonList.GetLength(); ++dataProtectionsIndex)
    {
      m_dataProtections.push_back(dataProtectionsJsonList[dataProtectionsIndex].AsObject());
    }
    m_dataProtectionsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataProtectionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_dataProtectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataProtectionsJsonList(m_dataProtections.size());
   for(unsigned dataProtectionsIndex = 0; dataProtectionsIndex < dataProtectionsJsonList.GetLength(); ++dataProtectionsIndex)
   {
     dataProtectionsJsonList[dataProtectionsIndex].AsObject(m_dataProtections[dataProtectionsIndex].Jsonize());
   }
   payload.WithArray("DataProtections", std::move(dataProtectionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
