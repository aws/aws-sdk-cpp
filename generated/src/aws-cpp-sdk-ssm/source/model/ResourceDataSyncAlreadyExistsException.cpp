/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ResourceDataSyncAlreadyExistsException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ResourceDataSyncAlreadyExistsException::ResourceDataSyncAlreadyExistsException() : 
    m_syncNameHasBeenSet(false)
{
}

ResourceDataSyncAlreadyExistsException::ResourceDataSyncAlreadyExistsException(JsonView jsonValue) : 
    m_syncNameHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDataSyncAlreadyExistsException& ResourceDataSyncAlreadyExistsException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SyncName"))
  {
    m_syncName = jsonValue.GetString("SyncName");

    m_syncNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDataSyncAlreadyExistsException::Jsonize() const
{
  JsonValue payload;

  if(m_syncNameHasBeenSet)
  {
   payload.WithString("SyncName", m_syncName);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
