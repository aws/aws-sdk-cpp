/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ImportResourcesToDraftAppVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ImportResourcesToDraftAppVersionResult::ImportResourcesToDraftAppVersionResult() : 
    m_status(ResourceImportStatusType::NOT_SET)
{
}

ImportResourcesToDraftAppVersionResult::ImportResourcesToDraftAppVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ResourceImportStatusType::NOT_SET)
{
  *this = result;
}

ImportResourcesToDraftAppVersionResult& ImportResourcesToDraftAppVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("appArn"))
  {
    m_appArn = jsonValue.GetString("appArn");

  }

  if(jsonValue.ValueExists("appVersion"))
  {
    m_appVersion = jsonValue.GetString("appVersion");

  }

  if(jsonValue.ValueExists("sourceArns"))
  {
    Aws::Utils::Array<JsonView> sourceArnsJsonList = jsonValue.GetArray("sourceArns");
    for(unsigned sourceArnsIndex = 0; sourceArnsIndex < sourceArnsJsonList.GetLength(); ++sourceArnsIndex)
    {
      m_sourceArns.push_back(sourceArnsJsonList[sourceArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ResourceImportStatusTypeMapper::GetResourceImportStatusTypeForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("terraformSources"))
  {
    Aws::Utils::Array<JsonView> terraformSourcesJsonList = jsonValue.GetArray("terraformSources");
    for(unsigned terraformSourcesIndex = 0; terraformSourcesIndex < terraformSourcesJsonList.GetLength(); ++terraformSourcesIndex)
    {
      m_terraformSources.push_back(terraformSourcesJsonList[terraformSourcesIndex].AsObject());
    }
  }



  return *this;
}
