/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DescribeProjectsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeProjectsResult::DescribeProjectsResult()
{
}

DescribeProjectsResult::DescribeProjectsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeProjectsResult& DescribeProjectsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProjectDescriptions"))
  {
    Aws::Utils::Array<JsonView> projectDescriptionsJsonList = jsonValue.GetArray("ProjectDescriptions");
    for(unsigned projectDescriptionsIndex = 0; projectDescriptionsIndex < projectDescriptionsJsonList.GetLength(); ++projectDescriptionsIndex)
    {
      m_projectDescriptions.push_back(projectDescriptionsJsonList[projectDescriptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
