/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DeleteReservationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteReservationResult::DeleteReservationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteReservationResult& DeleteReservationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");
    m_countHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currencyCode"))
  {
    m_currencyCode = jsonValue.GetString("currencyCode");
    m_currencyCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("duration"))
  {
    m_duration = jsonValue.GetInteger("duration");
    m_durationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("durationUnits"))
  {
    m_durationUnits = OfferingDurationUnitsMapper::GetOfferingDurationUnitsForName(jsonValue.GetString("durationUnits"));
    m_durationUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("end"))
  {
    m_end = jsonValue.GetString("end");
    m_endHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fixedPrice"))
  {
    m_fixedPrice = jsonValue.GetDouble("fixedPrice");
    m_fixedPriceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("offeringDescription"))
  {
    m_offeringDescription = jsonValue.GetString("offeringDescription");
    m_offeringDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("offeringId"))
  {
    m_offeringId = jsonValue.GetString("offeringId");
    m_offeringIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("offeringType"))
  {
    m_offeringType = OfferingTypeMapper::GetOfferingTypeForName(jsonValue.GetString("offeringType"));
    m_offeringTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("renewalSettings"))
  {
    m_renewalSettings = jsonValue.GetObject("renewalSettings");
    m_renewalSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reservationId"))
  {
    m_reservationId = jsonValue.GetString("reservationId");
    m_reservationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceSpecification"))
  {
    m_resourceSpecification = jsonValue.GetObject("resourceSpecification");
    m_resourceSpecificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("start"))
  {
    m_start = jsonValue.GetString("start");
    m_startHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = ReservationStateMapper::GetReservationStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
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
  if(jsonValue.ValueExists("usagePrice"))
  {
    m_usagePrice = jsonValue.GetDouble("usagePrice");
    m_usagePriceHasBeenSet = true;
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
