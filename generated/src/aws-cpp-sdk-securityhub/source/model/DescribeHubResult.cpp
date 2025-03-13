/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/DescribeHubResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeHubResult::DescribeHubResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeHubResult& DescribeHubResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HubArn"))
  {
    m_hubArn = jsonValue.GetString("HubArn");
    m_hubArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubscribedAt"))
  {
    m_subscribedAt = jsonValue.GetString("SubscribedAt");
    m_subscribedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoEnableControls"))
  {
    m_autoEnableControls = jsonValue.GetBool("AutoEnableControls");
    m_autoEnableControlsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ControlFindingGenerator"))
  {
    m_controlFindingGenerator = ControlFindingGeneratorMapper::GetControlFindingGeneratorForName(jsonValue.GetString("ControlFindingGenerator"));
    m_controlFindingGeneratorHasBeenSet = true;
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
