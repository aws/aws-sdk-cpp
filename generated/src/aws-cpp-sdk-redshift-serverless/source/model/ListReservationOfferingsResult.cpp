/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/ListReservationOfferingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReservationOfferingsResult::ListReservationOfferingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReservationOfferingsResult& ListReservationOfferingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reservationOfferingsList"))
  {
    Aws::Utils::Array<JsonView> reservationOfferingsListJsonList = jsonValue.GetArray("reservationOfferingsList");
    for(unsigned reservationOfferingsListIndex = 0; reservationOfferingsListIndex < reservationOfferingsListJsonList.GetLength(); ++reservationOfferingsListIndex)
    {
      m_reservationOfferingsList.push_back(reservationOfferingsListJsonList[reservationOfferingsListIndex].AsObject());
    }
    m_reservationOfferingsListHasBeenSet = true;
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
