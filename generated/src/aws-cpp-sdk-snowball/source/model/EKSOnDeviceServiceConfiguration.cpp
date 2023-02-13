/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/EKSOnDeviceServiceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

EKSOnDeviceServiceConfiguration::EKSOnDeviceServiceConfiguration() : 
    m_kubernetesVersionHasBeenSet(false),
    m_eKSAnywhereVersionHasBeenSet(false)
{
}

EKSOnDeviceServiceConfiguration::EKSOnDeviceServiceConfiguration(JsonView jsonValue) : 
    m_kubernetesVersionHasBeenSet(false),
    m_eKSAnywhereVersionHasBeenSet(false)
{
  *this = jsonValue;
}

EKSOnDeviceServiceConfiguration& EKSOnDeviceServiceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KubernetesVersion"))
  {
    m_kubernetesVersion = jsonValue.GetString("KubernetesVersion");

    m_kubernetesVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EKSAnywhereVersion"))
  {
    m_eKSAnywhereVersion = jsonValue.GetString("EKSAnywhereVersion");

    m_eKSAnywhereVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue EKSOnDeviceServiceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_kubernetesVersionHasBeenSet)
  {
   payload.WithString("KubernetesVersion", m_kubernetesVersion);

  }

  if(m_eKSAnywhereVersionHasBeenSet)
  {
   payload.WithString("EKSAnywhereVersion", m_eKSAnywhereVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
