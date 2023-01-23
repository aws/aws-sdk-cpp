/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchEnableStandardsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchEnableStandardsResult::BatchEnableStandardsResult()
{
}

BatchEnableStandardsResult::BatchEnableStandardsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchEnableStandardsResult& BatchEnableStandardsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StandardsSubscriptions"))
  {
    Aws::Utils::Array<JsonView> standardsSubscriptionsJsonList = jsonValue.GetArray("StandardsSubscriptions");
    for(unsigned standardsSubscriptionsIndex = 0; standardsSubscriptionsIndex < standardsSubscriptionsJsonList.GetLength(); ++standardsSubscriptionsIndex)
    {
      m_standardsSubscriptions.push_back(standardsSubscriptionsJsonList[standardsSubscriptionsIndex].AsObject());
    }
  }



  return *this;
}
