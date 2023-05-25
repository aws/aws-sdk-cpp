/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/DataStorage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{

DataStorage::DataStorage() : 
    m_cwLogHasBeenSet(false)
{
}

DataStorage::DataStorage(JsonView jsonValue) : 
    m_cwLogHasBeenSet(false)
{
  *this = jsonValue;
}

DataStorage& DataStorage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CwLog"))
  {
    m_cwLog = jsonValue.GetObject("CwLog");

    m_cwLogHasBeenSet = true;
  }

  return *this;
}

JsonValue DataStorage::Jsonize() const
{
  JsonValue payload;

  if(m_cwLogHasBeenSet)
  {
   payload.WithObject("CwLog", m_cwLog.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
