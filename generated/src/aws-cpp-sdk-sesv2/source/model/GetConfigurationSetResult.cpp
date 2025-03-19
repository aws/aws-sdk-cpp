/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetConfigurationSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConfigurationSetResult::GetConfigurationSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetConfigurationSetResult& GetConfigurationSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConfigurationSetName"))
  {
    m_configurationSetName = jsonValue.GetString("ConfigurationSetName");
    m_configurationSetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrackingOptions"))
  {
    m_trackingOptions = jsonValue.GetObject("TrackingOptions");
    m_trackingOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeliveryOptions"))
  {
    m_deliveryOptions = jsonValue.GetObject("DeliveryOptions");
    m_deliveryOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReputationOptions"))
  {
    m_reputationOptions = jsonValue.GetObject("ReputationOptions");
    m_reputationOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SendingOptions"))
  {
    m_sendingOptions = jsonValue.GetObject("SendingOptions");
    m_sendingOptionsHasBeenSet = true;
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
  if(jsonValue.ValueExists("SuppressionOptions"))
  {
    m_suppressionOptions = jsonValue.GetObject("SuppressionOptions");
    m_suppressionOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VdmOptions"))
  {
    m_vdmOptions = jsonValue.GetObject("VdmOptions");
    m_vdmOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ArchivingOptions"))
  {
    m_archivingOptions = jsonValue.GetObject("ArchivingOptions");
    m_archivingOptionsHasBeenSet = true;
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
