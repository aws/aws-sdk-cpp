/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ListAppAssessmentComplianceDriftsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAppAssessmentComplianceDriftsResult::ListAppAssessmentComplianceDriftsResult()
{
}

ListAppAssessmentComplianceDriftsResult::ListAppAssessmentComplianceDriftsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAppAssessmentComplianceDriftsResult& ListAppAssessmentComplianceDriftsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("complianceDrifts"))
  {
    Aws::Utils::Array<JsonView> complianceDriftsJsonList = jsonValue.GetArray("complianceDrifts");
    for(unsigned complianceDriftsIndex = 0; complianceDriftsIndex < complianceDriftsJsonList.GetLength(); ++complianceDriftsIndex)
    {
      m_complianceDrifts.push_back(complianceDriftsJsonList[complianceDriftsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
