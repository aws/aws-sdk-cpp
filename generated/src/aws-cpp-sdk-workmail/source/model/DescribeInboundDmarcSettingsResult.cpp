/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/DescribeInboundDmarcSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeInboundDmarcSettingsResult::DescribeInboundDmarcSettingsResult() : 
    m_enforced(false)
{
}

DescribeInboundDmarcSettingsResult::DescribeInboundDmarcSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_enforced(false)
{
  *this = result;
}

DescribeInboundDmarcSettingsResult& DescribeInboundDmarcSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Enforced"))
  {
    m_enforced = jsonValue.GetBool("Enforced");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
