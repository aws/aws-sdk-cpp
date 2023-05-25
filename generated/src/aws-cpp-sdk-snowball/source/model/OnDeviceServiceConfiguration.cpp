/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/OnDeviceServiceConfiguration.h>
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

OnDeviceServiceConfiguration::OnDeviceServiceConfiguration() : 
    m_nFSOnDeviceServiceHasBeenSet(false),
    m_tGWOnDeviceServiceHasBeenSet(false),
    m_eKSOnDeviceServiceHasBeenSet(false)
{
}

OnDeviceServiceConfiguration::OnDeviceServiceConfiguration(JsonView jsonValue) : 
    m_nFSOnDeviceServiceHasBeenSet(false),
    m_tGWOnDeviceServiceHasBeenSet(false),
    m_eKSOnDeviceServiceHasBeenSet(false)
{
  *this = jsonValue;
}

OnDeviceServiceConfiguration& OnDeviceServiceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NFSOnDeviceService"))
  {
    m_nFSOnDeviceService = jsonValue.GetObject("NFSOnDeviceService");

    m_nFSOnDeviceServiceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TGWOnDeviceService"))
  {
    m_tGWOnDeviceService = jsonValue.GetObject("TGWOnDeviceService");

    m_tGWOnDeviceServiceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EKSOnDeviceService"))
  {
    m_eKSOnDeviceService = jsonValue.GetObject("EKSOnDeviceService");

    m_eKSOnDeviceServiceHasBeenSet = true;
  }

  return *this;
}

JsonValue OnDeviceServiceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nFSOnDeviceServiceHasBeenSet)
  {
   payload.WithObject("NFSOnDeviceService", m_nFSOnDeviceService.Jsonize());

  }

  if(m_tGWOnDeviceServiceHasBeenSet)
  {
   payload.WithObject("TGWOnDeviceService", m_tGWOnDeviceService.Jsonize());

  }

  if(m_eKSOnDeviceServiceHasBeenSet)
  {
   payload.WithObject("EKSOnDeviceService", m_eKSOnDeviceService.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
