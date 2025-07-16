/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/GetOriginEndpointPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::mediapackagev2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetOriginEndpointPolicyResult::GetOriginEndpointPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetOriginEndpointPolicyResult& GetOriginEndpointPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChannelGroupName"))
  {
    m_channelGroupName = jsonValue.GetString("ChannelGroupName");
    m_channelGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChannelName"))
  {
    m_channelName = jsonValue.GetString("ChannelName");
    m_channelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OriginEndpointName"))
  {
    m_originEndpointName = jsonValue.GetString("OriginEndpointName");
    m_originEndpointNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Policy"))
  {
    m_policy = jsonValue.GetString("Policy");
    m_policyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CdnAuthConfiguration"))
  {
    m_cdnAuthConfiguration = jsonValue.GetObject("CdnAuthConfiguration");
    m_cdnAuthConfigurationHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
