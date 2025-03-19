/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/DescribePageResult.h>
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

DescribePageResult::DescribePageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePageResult& DescribePageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PageArn"))
  {
    m_pageArn = jsonValue.GetString("PageArn");
    m_pageArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EngagementArn"))
  {
    m_engagementArn = jsonValue.GetString("EngagementArn");
    m_engagementArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContactArn"))
  {
    m_contactArn = jsonValue.GetString("ContactArn");
    m_contactArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Sender"))
  {
    m_sender = jsonValue.GetString("Sender");
    m_senderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetString("Subject");
    m_subjectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PublicSubject"))
  {
    m_publicSubject = jsonValue.GetString("PublicSubject");
    m_publicSubjectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PublicContent"))
  {
    m_publicContent = jsonValue.GetString("PublicContent");
    m_publicContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncidentId"))
  {
    m_incidentId = jsonValue.GetString("IncidentId");
    m_incidentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SentTime"))
  {
    m_sentTime = jsonValue.GetDouble("SentTime");
    m_sentTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReadTime"))
  {
    m_readTime = jsonValue.GetDouble("ReadTime");
    m_readTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeliveryTime"))
  {
    m_deliveryTime = jsonValue.GetDouble("DeliveryTime");
    m_deliveryTimeHasBeenSet = true;
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
