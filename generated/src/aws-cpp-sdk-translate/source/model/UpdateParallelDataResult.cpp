/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/UpdateParallelDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Translate::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateParallelDataResult::UpdateParallelDataResult() : 
    m_status(ParallelDataStatus::NOT_SET),
    m_latestUpdateAttemptStatus(ParallelDataStatus::NOT_SET)
{
}

UpdateParallelDataResult::UpdateParallelDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ParallelDataStatus::NOT_SET),
    m_latestUpdateAttemptStatus(ParallelDataStatus::NOT_SET)
{
  *this = result;
}

UpdateParallelDataResult& UpdateParallelDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ParallelDataStatusMapper::GetParallelDataStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("LatestUpdateAttemptStatus"))
  {
    m_latestUpdateAttemptStatus = ParallelDataStatusMapper::GetParallelDataStatusForName(jsonValue.GetString("LatestUpdateAttemptStatus"));

  }

  if(jsonValue.ValueExists("LatestUpdateAttemptAt"))
  {
    m_latestUpdateAttemptAt = jsonValue.GetDouble("LatestUpdateAttemptAt");

  }



  return *this;
}
