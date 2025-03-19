/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/CreateSourceLocationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateSourceLocationResult::CreateSourceLocationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateSourceLocationResult& CreateSourceLocationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccessConfiguration"))
  {
    m_accessConfiguration = jsonValue.GetObject("AccessConfiguration");
    m_accessConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultSegmentDeliveryConfiguration"))
  {
    m_defaultSegmentDeliveryConfiguration = jsonValue.GetObject("DefaultSegmentDeliveryConfiguration");
    m_defaultSegmentDeliveryConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HttpConfiguration"))
  {
    m_httpConfiguration = jsonValue.GetObject("HttpConfiguration");
    m_httpConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SegmentDeliveryConfigurations"))
  {
    Aws::Utils::Array<JsonView> segmentDeliveryConfigurationsJsonList = jsonValue.GetArray("SegmentDeliveryConfigurations");
    for(unsigned segmentDeliveryConfigurationsIndex = 0; segmentDeliveryConfigurationsIndex < segmentDeliveryConfigurationsJsonList.GetLength(); ++segmentDeliveryConfigurationsIndex)
    {
      m_segmentDeliveryConfigurations.push_back(segmentDeliveryConfigurationsJsonList[segmentDeliveryConfigurationsIndex].AsObject());
    }
    m_segmentDeliveryConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceLocationName"))
  {
    m_sourceLocationName = jsonValue.GetString("SourceLocationName");
    m_sourceLocationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
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
