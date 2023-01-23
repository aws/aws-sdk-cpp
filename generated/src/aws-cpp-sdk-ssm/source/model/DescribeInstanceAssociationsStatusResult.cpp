/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeInstanceAssociationsStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeInstanceAssociationsStatusResult::DescribeInstanceAssociationsStatusResult()
{
}

DescribeInstanceAssociationsStatusResult::DescribeInstanceAssociationsStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeInstanceAssociationsStatusResult& DescribeInstanceAssociationsStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InstanceAssociationStatusInfos"))
  {
    Aws::Utils::Array<JsonView> instanceAssociationStatusInfosJsonList = jsonValue.GetArray("InstanceAssociationStatusInfos");
    for(unsigned instanceAssociationStatusInfosIndex = 0; instanceAssociationStatusInfosIndex < instanceAssociationStatusInfosJsonList.GetLength(); ++instanceAssociationStatusInfosIndex)
    {
      m_instanceAssociationStatusInfos.push_back(instanceAssociationStatusInfosJsonList[instanceAssociationStatusInfosIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
