/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/GetSamplingRulesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSamplingRulesResult::GetSamplingRulesResult()
{
}

GetSamplingRulesResult::GetSamplingRulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSamplingRulesResult& GetSamplingRulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SamplingRuleRecords"))
  {
    Aws::Utils::Array<JsonView> samplingRuleRecordsJsonList = jsonValue.GetArray("SamplingRuleRecords");
    for(unsigned samplingRuleRecordsIndex = 0; samplingRuleRecordsIndex < samplingRuleRecordsJsonList.GetLength(); ++samplingRuleRecordsIndex)
    {
      m_samplingRuleRecords.push_back(samplingRuleRecordsJsonList[samplingRuleRecordsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
