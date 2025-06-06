﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/GetDeliverabilityTestReportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDeliverabilityTestReportResult::GetDeliverabilityTestReportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDeliverabilityTestReportResult& GetDeliverabilityTestReportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeliverabilityTestReport"))
  {
    m_deliverabilityTestReport = jsonValue.GetObject("DeliverabilityTestReport");
    m_deliverabilityTestReportHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OverallPlacement"))
  {
    m_overallPlacement = jsonValue.GetObject("OverallPlacement");
    m_overallPlacementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IspPlacements"))
  {
    Aws::Utils::Array<JsonView> ispPlacementsJsonList = jsonValue.GetArray("IspPlacements");
    for(unsigned ispPlacementsIndex = 0; ispPlacementsIndex < ispPlacementsJsonList.GetLength(); ++ispPlacementsIndex)
    {
      m_ispPlacements.push_back(ispPlacementsJsonList[ispPlacementsIndex].AsObject());
    }
    m_ispPlacementsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
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
