/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UpdateClusterSdkResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateClusterSdkResult::UpdateClusterSdkResult() : 
    m_clusterType(ClusterType::NOT_SET),
    m_state(ClusterState::NOT_SET)
{
}

UpdateClusterSdkResult::UpdateClusterSdkResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateClusterSdkResult()
{
  *this = result;
}

UpdateClusterSdkResult& UpdateClusterSdkResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("channelIds"))
  {
    Aws::Utils::Array<JsonView> channelIdsJsonList = jsonValue.GetArray("channelIds");
    for(unsigned channelIdsIndex = 0; channelIdsIndex < channelIdsJsonList.GetLength(); ++channelIdsIndex)
    {
      m_channelIds.push_back(channelIdsJsonList[channelIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("clusterType"))
  {
    m_clusterType = ClusterTypeMapper::GetClusterTypeForName(jsonValue.GetString("clusterType"));

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("networkSettings"))
  {
    m_networkSettings = jsonValue.GetObject("networkSettings");

  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = ClusterStateMapper::GetClusterStateForName(jsonValue.GetString("state"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
