/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsPendingCloudWatchLogsExports.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsRdsPendingCloudWatchLogsExports::AwsRdsPendingCloudWatchLogsExports() : 
    m_logTypesToEnableHasBeenSet(false),
    m_logTypesToDisableHasBeenSet(false)
{
}

AwsRdsPendingCloudWatchLogsExports::AwsRdsPendingCloudWatchLogsExports(JsonView jsonValue) : 
    m_logTypesToEnableHasBeenSet(false),
    m_logTypesToDisableHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsPendingCloudWatchLogsExports& AwsRdsPendingCloudWatchLogsExports::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogTypesToEnable"))
  {
    Aws::Utils::Array<JsonView> logTypesToEnableJsonList = jsonValue.GetArray("LogTypesToEnable");
    for(unsigned logTypesToEnableIndex = 0; logTypesToEnableIndex < logTypesToEnableJsonList.GetLength(); ++logTypesToEnableIndex)
    {
      m_logTypesToEnable.push_back(logTypesToEnableJsonList[logTypesToEnableIndex].AsString());
    }
    m_logTypesToEnableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogTypesToDisable"))
  {
    Aws::Utils::Array<JsonView> logTypesToDisableJsonList = jsonValue.GetArray("LogTypesToDisable");
    for(unsigned logTypesToDisableIndex = 0; logTypesToDisableIndex < logTypesToDisableJsonList.GetLength(); ++logTypesToDisableIndex)
    {
      m_logTypesToDisable.push_back(logTypesToDisableJsonList[logTypesToDisableIndex].AsString());
    }
    m_logTypesToDisableHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsPendingCloudWatchLogsExports::Jsonize() const
{
  JsonValue payload;

  if(m_logTypesToEnableHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logTypesToEnableJsonList(m_logTypesToEnable.size());
   for(unsigned logTypesToEnableIndex = 0; logTypesToEnableIndex < logTypesToEnableJsonList.GetLength(); ++logTypesToEnableIndex)
   {
     logTypesToEnableJsonList[logTypesToEnableIndex].AsString(m_logTypesToEnable[logTypesToEnableIndex]);
   }
   payload.WithArray("LogTypesToEnable", std::move(logTypesToEnableJsonList));

  }

  if(m_logTypesToDisableHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logTypesToDisableJsonList(m_logTypesToDisable.size());
   for(unsigned logTypesToDisableIndex = 0; logTypesToDisableIndex < logTypesToDisableJsonList.GetLength(); ++logTypesToDisableIndex)
   {
     logTypesToDisableJsonList[logTypesToDisableIndex].AsString(m_logTypesToDisable[logTypesToDisableIndex]);
   }
   payload.WithArray("LogTypesToDisable", std::move(logTypesToDisableJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
