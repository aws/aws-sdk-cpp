/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ListIAMPolicyAssignmentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIAMPolicyAssignmentsResult::ListIAMPolicyAssignmentsResult() : 
    m_status(0)
{
}

ListIAMPolicyAssignmentsResult::ListIAMPolicyAssignmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(0)
{
  *this = result;
}

ListIAMPolicyAssignmentsResult& ListIAMPolicyAssignmentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IAMPolicyAssignments"))
  {
    Aws::Utils::Array<JsonView> iAMPolicyAssignmentsJsonList = jsonValue.GetArray("IAMPolicyAssignments");
    for(unsigned iAMPolicyAssignmentsIndex = 0; iAMPolicyAssignmentsIndex < iAMPolicyAssignmentsJsonList.GetLength(); ++iAMPolicyAssignmentsIndex)
    {
      m_iAMPolicyAssignments.push_back(iAMPolicyAssignmentsJsonList[iAMPolicyAssignmentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

  }



  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
