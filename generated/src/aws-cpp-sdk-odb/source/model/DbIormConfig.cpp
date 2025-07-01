/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/DbIormConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace odb
{
namespace Model
{

DbIormConfig::DbIormConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

DbIormConfig& DbIormConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dbName"))
  {
    m_dbName = jsonValue.GetString("dbName");
    m_dbNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("flashCacheLimit"))
  {
    m_flashCacheLimit = jsonValue.GetString("flashCacheLimit");
    m_flashCacheLimitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("share"))
  {
    m_share = jsonValue.GetInteger("share");
    m_shareHasBeenSet = true;
  }
  return *this;
}

JsonValue DbIormConfig::Jsonize() const
{
  JsonValue payload;

  if(m_dbNameHasBeenSet)
  {
   payload.WithString("dbName", m_dbName);

  }

  if(m_flashCacheLimitHasBeenSet)
  {
   payload.WithString("flashCacheLimit", m_flashCacheLimit);

  }

  if(m_shareHasBeenSet)
  {
   payload.WithInteger("share", m_share);

  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
