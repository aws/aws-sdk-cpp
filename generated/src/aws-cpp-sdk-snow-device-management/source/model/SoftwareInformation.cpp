/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/SoftwareInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SnowDeviceManagement
{
namespace Model
{

SoftwareInformation::SoftwareInformation() : 
    m_installStateHasBeenSet(false),
    m_installedVersionHasBeenSet(false),
    m_installingVersionHasBeenSet(false)
{
}

SoftwareInformation::SoftwareInformation(JsonView jsonValue) : 
    m_installStateHasBeenSet(false),
    m_installedVersionHasBeenSet(false),
    m_installingVersionHasBeenSet(false)
{
  *this = jsonValue;
}

SoftwareInformation& SoftwareInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("installState"))
  {
    m_installState = jsonValue.GetString("installState");

    m_installStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("installedVersion"))
  {
    m_installedVersion = jsonValue.GetString("installedVersion");

    m_installedVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("installingVersion"))
  {
    m_installingVersion = jsonValue.GetString("installingVersion");

    m_installingVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue SoftwareInformation::Jsonize() const
{
  JsonValue payload;

  if(m_installStateHasBeenSet)
  {
   payload.WithString("installState", m_installState);

  }

  if(m_installedVersionHasBeenSet)
  {
   payload.WithString("installedVersion", m_installedVersion);

  }

  if(m_installingVersionHasBeenSet)
  {
   payload.WithString("installingVersion", m_installingVersion);

  }

  return payload;
}

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
