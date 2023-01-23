/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb-session/model/IOUsage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDBSession
{
namespace Model
{

IOUsage::IOUsage() : 
    m_readIOs(0),
    m_readIOsHasBeenSet(false),
    m_writeIOs(0),
    m_writeIOsHasBeenSet(false)
{
}

IOUsage::IOUsage(JsonView jsonValue) : 
    m_readIOs(0),
    m_readIOsHasBeenSet(false),
    m_writeIOs(0),
    m_writeIOsHasBeenSet(false)
{
  *this = jsonValue;
}

IOUsage& IOUsage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReadIOs"))
  {
    m_readIOs = jsonValue.GetInt64("ReadIOs");

    m_readIOsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WriteIOs"))
  {
    m_writeIOs = jsonValue.GetInt64("WriteIOs");

    m_writeIOsHasBeenSet = true;
  }

  return *this;
}

JsonValue IOUsage::Jsonize() const
{
  JsonValue payload;

  if(m_readIOsHasBeenSet)
  {
   payload.WithInt64("ReadIOs", m_readIOs);

  }

  if(m_writeIOsHasBeenSet)
  {
   payload.WithInt64("WriteIOs", m_writeIOs);

  }

  return payload;
}

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
