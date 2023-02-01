/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeOperatingSystemsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeOperatingSystemsResult::DescribeOperatingSystemsResult()
{
}

DescribeOperatingSystemsResult::DescribeOperatingSystemsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeOperatingSystemsResult& DescribeOperatingSystemsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OperatingSystems"))
  {
    Aws::Utils::Array<JsonView> operatingSystemsJsonList = jsonValue.GetArray("OperatingSystems");
    for(unsigned operatingSystemsIndex = 0; operatingSystemsIndex < operatingSystemsJsonList.GetLength(); ++operatingSystemsIndex)
    {
      m_operatingSystems.push_back(operatingSystemsJsonList[operatingSystemsIndex].AsObject());
    }
  }



  return *this;
}
