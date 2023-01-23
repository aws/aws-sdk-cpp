/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeElasticIpsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeElasticIpsResult::DescribeElasticIpsResult()
{
}

DescribeElasticIpsResult::DescribeElasticIpsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeElasticIpsResult& DescribeElasticIpsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ElasticIps"))
  {
    Aws::Utils::Array<JsonView> elasticIpsJsonList = jsonValue.GetArray("ElasticIps");
    for(unsigned elasticIpsIndex = 0; elasticIpsIndex < elasticIpsJsonList.GetLength(); ++elasticIpsIndex)
    {
      m_elasticIps.push_back(elasticIpsJsonList[elasticIpsIndex].AsObject());
    }
  }



  return *this;
}
