/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/GetTargetGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::VPCLattice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTargetGroupResult::GetTargetGroupResult() : 
    m_status(TargetGroupStatus::NOT_SET),
    m_type(TargetGroupType::NOT_SET)
{
}

GetTargetGroupResult::GetTargetGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(TargetGroupStatus::NOT_SET),
    m_type(TargetGroupType::NOT_SET)
{
  *this = result;
}

GetTargetGroupResult& GetTargetGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("config"))
  {
    m_config = jsonValue.GetObject("config");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = jsonValue.GetString("failureCode");

  }

  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("serviceArns"))
  {
    Aws::Utils::Array<JsonView> serviceArnsJsonList = jsonValue.GetArray("serviceArns");
    for(unsigned serviceArnsIndex = 0; serviceArnsIndex < serviceArnsJsonList.GetLength(); ++serviceArnsIndex)
    {
      m_serviceArns.push_back(serviceArnsJsonList[serviceArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TargetGroupStatusMapper::GetTargetGroupStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = TargetGroupTypeMapper::GetTargetGroupTypeForName(jsonValue.GetString("type"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
