/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/FaultRootCauseEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

FaultRootCauseEntity::FaultRootCauseEntity() : 
    m_nameHasBeenSet(false),
    m_exceptionsHasBeenSet(false),
    m_remote(false),
    m_remoteHasBeenSet(false)
{
}

FaultRootCauseEntity::FaultRootCauseEntity(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_exceptionsHasBeenSet(false),
    m_remote(false),
    m_remoteHasBeenSet(false)
{
  *this = jsonValue;
}

FaultRootCauseEntity& FaultRootCauseEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Exceptions"))
  {
    Aws::Utils::Array<JsonView> exceptionsJsonList = jsonValue.GetArray("Exceptions");
    for(unsigned exceptionsIndex = 0; exceptionsIndex < exceptionsJsonList.GetLength(); ++exceptionsIndex)
    {
      m_exceptions.push_back(exceptionsJsonList[exceptionsIndex].AsObject());
    }
    m_exceptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Remote"))
  {
    m_remote = jsonValue.GetBool("Remote");

    m_remoteHasBeenSet = true;
  }

  return *this;
}

JsonValue FaultRootCauseEntity::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_exceptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exceptionsJsonList(m_exceptions.size());
   for(unsigned exceptionsIndex = 0; exceptionsIndex < exceptionsJsonList.GetLength(); ++exceptionsIndex)
   {
     exceptionsJsonList[exceptionsIndex].AsObject(m_exceptions[exceptionsIndex].Jsonize());
   }
   payload.WithArray("Exceptions", std::move(exceptionsJsonList));

  }

  if(m_remoteHasBeenSet)
  {
   payload.WithBool("Remote", m_remote);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
