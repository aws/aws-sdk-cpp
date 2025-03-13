/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/EstoniaAdditionalInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

EstoniaAdditionalInfo::EstoniaAdditionalInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

EstoniaAdditionalInfo& EstoniaAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("registryCommercialCode"))
  {
    m_registryCommercialCode = jsonValue.GetString("registryCommercialCode");
    m_registryCommercialCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue EstoniaAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_registryCommercialCodeHasBeenSet)
  {
   payload.WithString("registryCommercialCode", m_registryCommercialCode);

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
