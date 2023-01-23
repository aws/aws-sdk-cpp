/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DescribeProjectVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeProjectVersionsResult::DescribeProjectVersionsResult()
{
}

DescribeProjectVersionsResult::DescribeProjectVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeProjectVersionsResult& DescribeProjectVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProjectVersionDescriptions"))
  {
    Aws::Utils::Array<JsonView> projectVersionDescriptionsJsonList = jsonValue.GetArray("ProjectVersionDescriptions");
    for(unsigned projectVersionDescriptionsIndex = 0; projectVersionDescriptionsIndex < projectVersionDescriptionsJsonList.GetLength(); ++projectVersionDescriptionsIndex)
    {
      m_projectVersionDescriptions.push_back(projectVersionDescriptionsJsonList[projectVersionDescriptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
