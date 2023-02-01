/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/model/CreateScheduleGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Scheduler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateScheduleGroupResult::CreateScheduleGroupResult()
{
}

CreateScheduleGroupResult::CreateScheduleGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateScheduleGroupResult& CreateScheduleGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ScheduleGroupArn"))
  {
    m_scheduleGroupArn = jsonValue.GetString("ScheduleGroupArn");

  }



  return *this;
}
