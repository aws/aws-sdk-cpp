/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworkscm/model/DescribeNodeAssociationStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OpsWorksCM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeNodeAssociationStatusResult::DescribeNodeAssociationStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeNodeAssociationStatusResult& DescribeNodeAssociationStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NodeAssociationStatus"))
  {
    m_nodeAssociationStatus = NodeAssociationStatusMapper::GetNodeAssociationStatusForName(jsonValue.GetString("NodeAssociationStatus"));
    m_nodeAssociationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EngineAttributes"))
  {
    Aws::Utils::Array<JsonView> engineAttributesJsonList = jsonValue.GetArray("EngineAttributes");
    for(unsigned engineAttributesIndex = 0; engineAttributesIndex < engineAttributesJsonList.GetLength(); ++engineAttributesIndex)
    {
      m_engineAttributes.push_back(engineAttributesJsonList[engineAttributesIndex].AsObject());
    }
    m_engineAttributesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
