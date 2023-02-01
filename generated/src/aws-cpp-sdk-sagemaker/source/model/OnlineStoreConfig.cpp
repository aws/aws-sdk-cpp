/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/OnlineStoreConfig.h>
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

OnlineStoreConfig::OnlineStoreConfig() : 
    m_securityConfigHasBeenSet(false),
    m_enableOnlineStore(false),
    m_enableOnlineStoreHasBeenSet(false)
{
}

OnlineStoreConfig::OnlineStoreConfig(JsonView jsonValue) : 
    m_securityConfigHasBeenSet(false),
    m_enableOnlineStore(false),
    m_enableOnlineStoreHasBeenSet(false)
{
  *this = jsonValue;
}

OnlineStoreConfig& OnlineStoreConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecurityConfig"))
  {
    m_securityConfig = jsonValue.GetObject("SecurityConfig");

    m_securityConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableOnlineStore"))
  {
    m_enableOnlineStore = jsonValue.GetBool("EnableOnlineStore");

    m_enableOnlineStoreHasBeenSet = true;
  }

  return *this;
}

JsonValue OnlineStoreConfig::Jsonize() const
{
  JsonValue payload;

  if(m_securityConfigHasBeenSet)
  {
   payload.WithObject("SecurityConfig", m_securityConfig.Jsonize());

  }

  if(m_enableOnlineStoreHasBeenSet)
  {
   payload.WithBool("EnableOnlineStore", m_enableOnlineStore);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
