/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/CreateApplicationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateApplicationResult::CreateApplicationResult()
{
}

CreateApplicationResult::CreateApplicationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateApplicationResult& CreateApplicationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("dataSources"))
  {
    Aws::Utils::Array<JsonView> dataSourcesJsonList = jsonValue.GetArray("dataSources");
    for(unsigned dataSourcesIndex = 0; dataSourcesIndex < dataSourcesJsonList.GetLength(); ++dataSourcesIndex)
    {
      m_dataSources.push_back(dataSourcesJsonList[dataSourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("iamIdentityCenterOptions"))
  {
    m_iamIdentityCenterOptions = jsonValue.GetObject("iamIdentityCenterOptions");

  }

  if(jsonValue.ValueExists("appConfigs"))
  {
    Aws::Utils::Array<JsonView> appConfigsJsonList = jsonValue.GetArray("appConfigs");
    for(unsigned appConfigsIndex = 0; appConfigsIndex < appConfigsJsonList.GetLength(); ++appConfigsIndex)
    {
      m_appConfigs.push_back(appConfigsJsonList[appConfigsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("tagList"))
  {
    Aws::Utils::Array<JsonView> tagListJsonList = jsonValue.GetArray("tagList");
    for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
    {
      m_tagList.push_back(tagListJsonList[tagListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
