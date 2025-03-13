/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetAccountResult.h>
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

GetAccountResult::GetAccountResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAccountResult& GetAccountResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DedicatedIpAutoWarmupEnabled"))
  {
    m_dedicatedIpAutoWarmupEnabled = jsonValue.GetBool("DedicatedIpAutoWarmupEnabled");
    m_dedicatedIpAutoWarmupEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnforcementStatus"))
  {
    m_enforcementStatus = jsonValue.GetString("EnforcementStatus");
    m_enforcementStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProductionAccessEnabled"))
  {
    m_productionAccessEnabled = jsonValue.GetBool("ProductionAccessEnabled");
    m_productionAccessEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SendQuota"))
  {
    m_sendQuota = jsonValue.GetObject("SendQuota");
    m_sendQuotaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SendingEnabled"))
  {
    m_sendingEnabled = jsonValue.GetBool("SendingEnabled");
    m_sendingEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SuppressionAttributes"))
  {
    m_suppressionAttributes = jsonValue.GetObject("SuppressionAttributes");
    m_suppressionAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Details"))
  {
    m_details = jsonValue.GetObject("Details");
    m_detailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VdmAttributes"))
  {
    m_vdmAttributes = jsonValue.GetObject("VdmAttributes");
    m_vdmAttributesHasBeenSet = true;
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
