/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ImportResourcesToDraftAppVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ImportResourcesToDraftAppVersionResult::ImportResourcesToDraftAppVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ImportResourcesToDraftAppVersionResult& ImportResourcesToDraftAppVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("appArn"))
  {
    m_appArn = jsonValue.GetString("appArn");
    m_appArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("appVersion"))
  {
    m_appVersion = jsonValue.GetString("appVersion");
    m_appVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eksSources"))
  {
    Aws::Utils::Array<JsonView> eksSourcesJsonList = jsonValue.GetArray("eksSources");
    for(unsigned eksSourcesIndex = 0; eksSourcesIndex < eksSourcesJsonList.GetLength(); ++eksSourcesIndex)
    {
      m_eksSources.push_back(eksSourcesJsonList[eksSourcesIndex].AsObject());
    }
    m_eksSourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceArns"))
  {
    Aws::Utils::Array<JsonView> sourceArnsJsonList = jsonValue.GetArray("sourceArns");
    for(unsigned sourceArnsIndex = 0; sourceArnsIndex < sourceArnsJsonList.GetLength(); ++sourceArnsIndex)
    {
      m_sourceArns.push_back(sourceArnsJsonList[sourceArnsIndex].AsString());
    }
    m_sourceArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ResourceImportStatusTypeMapper::GetResourceImportStatusTypeForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("terraformSources"))
  {
    Aws::Utils::Array<JsonView> terraformSourcesJsonList = jsonValue.GetArray("terraformSources");
    for(unsigned terraformSourcesIndex = 0; terraformSourcesIndex < terraformSourcesJsonList.GetLength(); ++terraformSourcesIndex)
    {
      m_terraformSources.push_back(terraformSourcesJsonList[terraformSourcesIndex].AsObject());
    }
    m_terraformSourcesHasBeenSet = true;
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
