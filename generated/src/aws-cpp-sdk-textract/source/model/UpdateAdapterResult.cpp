/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/UpdateAdapterResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateAdapterResult::UpdateAdapterResult() : 
    m_autoUpdate(AutoUpdate::NOT_SET)
{
}

UpdateAdapterResult::UpdateAdapterResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_autoUpdate(AutoUpdate::NOT_SET)
{
  *this = result;
}

UpdateAdapterResult& UpdateAdapterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AdapterId"))
  {
    m_adapterId = jsonValue.GetString("AdapterId");

  }

  if(jsonValue.ValueExists("AdapterName"))
  {
    m_adapterName = jsonValue.GetString("AdapterName");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("FeatureTypes"))
  {
    Aws::Utils::Array<JsonView> featureTypesJsonList = jsonValue.GetArray("FeatureTypes");
    for(unsigned featureTypesIndex = 0; featureTypesIndex < featureTypesJsonList.GetLength(); ++featureTypesIndex)
    {
      m_featureTypes.push_back(FeatureTypeMapper::GetFeatureTypeForName(featureTypesJsonList[featureTypesIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("AutoUpdate"))
  {
    m_autoUpdate = AutoUpdateMapper::GetAutoUpdateForName(jsonValue.GetString("AutoUpdate"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
