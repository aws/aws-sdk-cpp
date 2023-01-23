/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeServiceErrorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeServiceErrorsResult::DescribeServiceErrorsResult()
{
}

DescribeServiceErrorsResult::DescribeServiceErrorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeServiceErrorsResult& DescribeServiceErrorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ServiceErrors"))
  {
    Aws::Utils::Array<JsonView> serviceErrorsJsonList = jsonValue.GetArray("ServiceErrors");
    for(unsigned serviceErrorsIndex = 0; serviceErrorsIndex < serviceErrorsJsonList.GetLength(); ++serviceErrorsIndex)
    {
      m_serviceErrors.push_back(serviceErrorsJsonList[serviceErrorsIndex].AsObject());
    }
  }



  return *this;
}
