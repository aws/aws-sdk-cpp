/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/GetIndexResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetIndexResult::GetIndexResult() : 
    m_status(IndexStatus::NOT_SET)
{
}

GetIndexResult::GetIndexResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(IndexStatus::NOT_SET)
{
  *this = result;
}

GetIndexResult& GetIndexResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

  }

  if(jsonValue.ValueExists("capacityConfiguration"))
  {
    m_capacityConfiguration = jsonValue.GetObject("capacityConfiguration");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

  }

  if(jsonValue.ValueExists("documentAttributeConfigurations"))
  {
    Aws::Utils::Array<JsonView> documentAttributeConfigurationsJsonList = jsonValue.GetArray("documentAttributeConfigurations");
    for(unsigned documentAttributeConfigurationsIndex = 0; documentAttributeConfigurationsIndex < documentAttributeConfigurationsJsonList.GetLength(); ++documentAttributeConfigurationsIndex)
    {
      m_documentAttributeConfigurations.push_back(documentAttributeConfigurationsJsonList[documentAttributeConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");

  }

  if(jsonValue.ValueExists("indexArn"))
  {
    m_indexArn = jsonValue.GetString("indexArn");

  }

  if(jsonValue.ValueExists("indexId"))
  {
    m_indexId = jsonValue.GetString("indexId");

  }

  if(jsonValue.ValueExists("indexStatistics"))
  {
    m_indexStatistics = jsonValue.GetObject("indexStatistics");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = IndexStatusMapper::GetIndexStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
