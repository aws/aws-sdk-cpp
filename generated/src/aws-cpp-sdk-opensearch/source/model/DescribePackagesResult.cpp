/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DescribePackagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePackagesResult::DescribePackagesResult()
{
}

DescribePackagesResult::DescribePackagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePackagesResult& DescribePackagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PackageDetailsList"))
  {
    Aws::Utils::Array<JsonView> packageDetailsListJsonList = jsonValue.GetArray("PackageDetailsList");
    for(unsigned packageDetailsListIndex = 0; packageDetailsListIndex < packageDetailsListJsonList.GetLength(); ++packageDetailsListIndex)
    {
      m_packageDetailsList.push_back(packageDetailsListJsonList[packageDetailsListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
