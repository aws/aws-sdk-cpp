﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/DescribeSourceLocationResult.h>
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

DescribeSourceLocationResult::DescribeSourceLocationResult()
{
}

DescribeSourceLocationResult::DescribeSourceLocationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSourceLocationResult& DescribeSourceLocationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccessConfiguration"))
  {
    m_accessConfiguration = jsonValue.GetObject("AccessConfiguration");

  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("DefaultSegmentDeliveryConfiguration"))
  {
    m_defaultSegmentDeliveryConfiguration = jsonValue.GetObject("DefaultSegmentDeliveryConfiguration");

  }

  if(jsonValue.ValueExists("HttpConfiguration"))
  {
    m_httpConfiguration = jsonValue.GetObject("HttpConfiguration");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("SegmentDeliveryConfigurations"))
  {
    Aws::Utils::Array<JsonView> segmentDeliveryConfigurationsJsonList = jsonValue.GetArray("SegmentDeliveryConfigurations");
    for(unsigned segmentDeliveryConfigurationsIndex = 0; segmentDeliveryConfigurationsIndex < segmentDeliveryConfigurationsJsonList.GetLength(); ++segmentDeliveryConfigurationsIndex)
    {
      m_segmentDeliveryConfigurations.push_back(segmentDeliveryConfigurationsJsonList[segmentDeliveryConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("SourceLocationName"))
  {
    m_sourceLocationName = jsonValue.GetString("SourceLocationName");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
