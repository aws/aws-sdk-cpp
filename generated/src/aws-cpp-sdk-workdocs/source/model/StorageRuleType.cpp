/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/StorageRuleType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

StorageRuleType::StorageRuleType(JsonView jsonValue)
{
  *this = jsonValue;
}

StorageRuleType& StorageRuleType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StorageAllocatedInBytes"))
  {
    m_storageAllocatedInBytes = jsonValue.GetInt64("StorageAllocatedInBytes");
    m_storageAllocatedInBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StorageType"))
  {
    m_storageType = StorageTypeMapper::GetStorageTypeForName(jsonValue.GetString("StorageType"));
    m_storageTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue StorageRuleType::Jsonize() const
{
  JsonValue payload;

  if(m_storageAllocatedInBytesHasBeenSet)
  {
   payload.WithInt64("StorageAllocatedInBytes", m_storageAllocatedInBytes);

  }

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("StorageType", StorageTypeMapper::GetNameForStorageType(m_storageType));
  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
