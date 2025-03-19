/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/DescribeChangeSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MarketplaceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeChangeSetResult::DescribeChangeSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeChangeSetResult& DescribeChangeSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChangeSetId"))
  {
    m_changeSetId = jsonValue.GetString("ChangeSetId");
    m_changeSetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChangeSetArn"))
  {
    m_changeSetArn = jsonValue.GetString("ChangeSetArn");
    m_changeSetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChangeSetName"))
  {
    m_changeSetName = jsonValue.GetString("ChangeSetName");
    m_changeSetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Intent"))
  {
    m_intent = IntentMapper::GetIntentForName(jsonValue.GetString("Intent"));
    m_intentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetString("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ChangeStatusMapper::GetChangeStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureCode"))
  {
    m_failureCode = FailureCodeMapper::GetFailureCodeForName(jsonValue.GetString("FailureCode"));
    m_failureCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureDescription"))
  {
    m_failureDescription = jsonValue.GetString("FailureDescription");
    m_failureDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChangeSet"))
  {
    Aws::Utils::Array<JsonView> changeSetJsonList = jsonValue.GetArray("ChangeSet");
    for(unsigned changeSetIndex = 0; changeSetIndex < changeSetJsonList.GetLength(); ++changeSetIndex)
    {
      m_changeSet.push_back(changeSetJsonList[changeSetIndex].AsObject());
    }
    m_changeSetHasBeenSet = true;
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
