/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeEcsClustersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEcsClustersResult::DescribeEcsClustersResult()
{
}

DescribeEcsClustersResult::DescribeEcsClustersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEcsClustersResult& DescribeEcsClustersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EcsClusters"))
  {
    Aws::Utils::Array<JsonView> ecsClustersJsonList = jsonValue.GetArray("EcsClusters");
    for(unsigned ecsClustersIndex = 0; ecsClustersIndex < ecsClustersJsonList.GetLength(); ++ecsClustersIndex)
    {
      m_ecsClusters.push_back(ecsClustersJsonList[ecsClustersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
