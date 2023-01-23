/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/ViewBillingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ViewBillingResult::ViewBillingResult()
{
}

ViewBillingResult::ViewBillingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ViewBillingResult& ViewBillingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextPageMarker"))
  {
    m_nextPageMarker = jsonValue.GetString("NextPageMarker");

  }

  if(jsonValue.ValueExists("BillingRecords"))
  {
    Aws::Utils::Array<JsonView> billingRecordsJsonList = jsonValue.GetArray("BillingRecords");
    for(unsigned billingRecordsIndex = 0; billingRecordsIndex < billingRecordsJsonList.GetLength(); ++billingRecordsIndex)
    {
      m_billingRecords.push_back(billingRecordsJsonList[billingRecordsIndex].AsObject());
    }
  }



  return *this;
}
