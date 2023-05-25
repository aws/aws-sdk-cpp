/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/MonitoringNetworkConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

MonitoringNetworkConfig::MonitoringNetworkConfig() : 
    m_enableInterContainerTrafficEncryption(false),
    m_enableInterContainerTrafficEncryptionHasBeenSet(false),
    m_enableNetworkIsolation(false),
    m_enableNetworkIsolationHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
}

MonitoringNetworkConfig::MonitoringNetworkConfig(JsonView jsonValue) : 
    m_enableInterContainerTrafficEncryption(false),
    m_enableInterContainerTrafficEncryptionHasBeenSet(false),
    m_enableNetworkIsolation(false),
    m_enableNetworkIsolationHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
  *this = jsonValue;
}

MonitoringNetworkConfig& MonitoringNetworkConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableInterContainerTrafficEncryption"))
  {
    m_enableInterContainerTrafficEncryption = jsonValue.GetBool("EnableInterContainerTrafficEncryption");

    m_enableInterContainerTrafficEncryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableNetworkIsolation"))
  {
    m_enableNetworkIsolation = jsonValue.GetBool("EnableNetworkIsolation");

    m_enableNetworkIsolationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");

    m_vpcConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue MonitoringNetworkConfig::Jsonize() const
{
  JsonValue payload;

  if(m_enableInterContainerTrafficEncryptionHasBeenSet)
  {
   payload.WithBool("EnableInterContainerTrafficEncryption", m_enableInterContainerTrafficEncryption);

  }

  if(m_enableNetworkIsolationHasBeenSet)
  {
   payload.WithBool("EnableNetworkIsolation", m_enableNetworkIsolation);

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
