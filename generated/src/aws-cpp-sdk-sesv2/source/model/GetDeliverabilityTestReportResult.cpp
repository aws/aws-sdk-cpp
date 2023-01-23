/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetDeliverabilityTestReportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDeliverabilityTestReportResult::GetDeliverabilityTestReportResult()
{
}

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

  }

  if(jsonValue.ValueExists("OverallPlacement"))
  {
    m_overallPlacement = jsonValue.GetObject("OverallPlacement");

  }

  if(jsonValue.ValueExists("IspPlacements"))
  {
    Aws::Utils::Array<JsonView> ispPlacementsJsonList = jsonValue.GetArray("IspPlacements");
    for(unsigned ispPlacementsIndex = 0; ispPlacementsIndex < ispPlacementsJsonList.GetLength(); ++ispPlacementsIndex)
    {
      m_ispPlacements.push_back(ispPlacementsJsonList[ispPlacementsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }



  return *this;
}
