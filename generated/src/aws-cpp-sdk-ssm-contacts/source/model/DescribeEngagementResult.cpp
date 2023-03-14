/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/DescribeEngagementResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEngagementResult::DescribeEngagementResult()
{
}

DescribeEngagementResult::DescribeEngagementResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEngagementResult& DescribeEngagementResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ContactArn"))
  {
    m_contactArn = jsonValue.GetString("ContactArn");

  }

  if(jsonValue.ValueExists("EngagementArn"))
  {
    m_engagementArn = jsonValue.GetString("EngagementArn");

  }

  if(jsonValue.ValueExists("Sender"))
  {
    m_sender = jsonValue.GetString("Sender");

  }

  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetString("Subject");

  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

  }

  if(jsonValue.ValueExists("PublicSubject"))
  {
    m_publicSubject = jsonValue.GetString("PublicSubject");

  }

  if(jsonValue.ValueExists("PublicContent"))
  {
    m_publicContent = jsonValue.GetString("PublicContent");

  }

  if(jsonValue.ValueExists("IncidentId"))
  {
    m_incidentId = jsonValue.GetString("IncidentId");

  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

  }

  if(jsonValue.ValueExists("StopTime"))
  {
    m_stopTime = jsonValue.GetDouble("StopTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
