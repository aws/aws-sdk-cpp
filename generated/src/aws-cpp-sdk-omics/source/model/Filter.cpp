/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/Filter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

Filter::Filter() : 
    m_resourceArnsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

Filter::Filter(JsonView jsonValue) : 
    m_resourceArnsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

Filter& Filter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceArns"))
  {
    Aws::Utils::Array<JsonView> resourceArnsJsonList = jsonValue.GetArray("resourceArns");
    for(unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex)
    {
      m_resourceArns.push_back(resourceArnsJsonList[resourceArnsIndex].AsString());
    }
    m_resourceArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    Aws::Utils::Array<JsonView> statusJsonList = jsonValue.GetArray("status");
    for(unsigned statusIndex = 0; statusIndex < statusJsonList.GetLength(); ++statusIndex)
    {
      m_status.push_back(ShareStatusMapper::GetShareStatusForName(statusJsonList[statusIndex].AsString()));
    }
    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue Filter::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceArnsJsonList(m_resourceArns.size());
   for(unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex)
   {
     resourceArnsJsonList[resourceArnsIndex].AsString(m_resourceArns[resourceArnsIndex]);
   }
   payload.WithArray("resourceArns", std::move(resourceArnsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusJsonList(m_status.size());
   for(unsigned statusIndex = 0; statusIndex < statusJsonList.GetLength(); ++statusIndex)
   {
     statusJsonList[statusIndex].AsString(ShareStatusMapper::GetNameForShareStatus(m_status[statusIndex]));
   }
   payload.WithArray("status", std::move(statusJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
