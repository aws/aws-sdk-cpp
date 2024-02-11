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
    m_enableOnlineStoreHasBeenSet(false),
    m_ttlDurationHasBeenSet(false),
    m_storageType(StorageType::NOT_SET),
    m_storageTypeHasBeenSet(false)
{
}

OnlineStoreConfig::OnlineStoreConfig(JsonView jsonValue) : 
    m_securityConfigHasBeenSet(false),
    m_enableOnlineStore(false),
    m_enableOnlineStoreHasBeenSet(false),
    m_ttlDurationHasBeenSet(false),
    m_storageType(StorageType::NOT_SET),
    m_storageTypeHasBeenSet(false)
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

  if(jsonValue.ValueExists("TtlDuration"))
  {
    m_ttlDuration = jsonValue.GetObject("TtlDuration");

    m_ttlDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageType"))
  {
    m_storageType = StorageTypeMapper::GetStorageTypeForName(jsonValue.GetString("StorageType"));

    m_storageTypeHasBeenSet = true;
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

  if(m_ttlDurationHasBeenSet)
  {
   payload.WithObject("TtlDuration", m_ttlDuration.Jsonize());

  }

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("StorageType", StorageTypeMapper::GetNameForStorageType(m_storageType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
