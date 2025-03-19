/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-scep/model/MobileDeviceManagement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorScep
{
namespace Model
{

MobileDeviceManagement::MobileDeviceManagement(JsonView jsonValue)
{
  *this = jsonValue;
}

MobileDeviceManagement& MobileDeviceManagement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Intune"))
  {
    m_intune = jsonValue.GetObject("Intune");
    m_intuneHasBeenSet = true;
  }
  return *this;
}

JsonValue MobileDeviceManagement::Jsonize() const
{
  JsonValue payload;

  if(m_intuneHasBeenSet)
  {
   payload.WithObject("Intune", m_intune.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
