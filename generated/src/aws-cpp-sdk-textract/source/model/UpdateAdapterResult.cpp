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

UpdateAdapterResult::UpdateAdapterResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateAdapterResult& UpdateAdapterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AdapterId"))
  {
    m_adapterId = jsonValue.GetString("AdapterId");
    m_adapterIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdapterName"))
  {
    m_adapterName = jsonValue.GetString("AdapterName");
    m_adapterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FeatureTypes"))
  {
    Aws::Utils::Array<JsonView> featureTypesJsonList = jsonValue.GetArray("FeatureTypes");
    for(unsigned featureTypesIndex = 0; featureTypesIndex < featureTypesJsonList.GetLength(); ++featureTypesIndex)
    {
      m_featureTypes.push_back(FeatureTypeMapper::GetFeatureTypeForName(featureTypesJsonList[featureTypesIndex].AsString()));
    }
    m_featureTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoUpdate"))
  {
    m_autoUpdate = AutoUpdateMapper::GetAutoUpdateForName(jsonValue.GetString("AutoUpdate"));
    m_autoUpdateHasBeenSet = true;
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
