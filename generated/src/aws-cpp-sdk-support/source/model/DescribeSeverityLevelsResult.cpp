/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/DescribeSeverityLevelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSeverityLevelsResult::DescribeSeverityLevelsResult()
{
}

DescribeSeverityLevelsResult::DescribeSeverityLevelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSeverityLevelsResult& DescribeSeverityLevelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("severityLevels"))
  {
    Aws::Utils::Array<JsonView> severityLevelsJsonList = jsonValue.GetArray("severityLevels");
    for(unsigned severityLevelsIndex = 0; severityLevelsIndex < severityLevelsJsonList.GetLength(); ++severityLevelsIndex)
    {
      m_severityLevels.push_back(severityLevelsJsonList[severityLevelsIndex].AsObject());
    }
  }



  return *this;
}
