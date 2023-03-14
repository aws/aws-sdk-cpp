/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/CreatePrefetchScheduleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreatePrefetchScheduleResult::CreatePrefetchScheduleResult()
{
}

CreatePrefetchScheduleResult::CreatePrefetchScheduleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreatePrefetchScheduleResult& CreatePrefetchScheduleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Consumption"))
  {
    m_consumption = jsonValue.GetObject("Consumption");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("PlaybackConfigurationName"))
  {
    m_playbackConfigurationName = jsonValue.GetString("PlaybackConfigurationName");

  }

  if(jsonValue.ValueExists("Retrieval"))
  {
    m_retrieval = jsonValue.GetObject("Retrieval");

  }

  if(jsonValue.ValueExists("StreamId"))
  {
    m_streamId = jsonValue.GetString("StreamId");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
