/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DescribeOfferingResult.h>
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

DescribeOfferingResult::DescribeOfferingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeOfferingResult& DescribeOfferingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
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
  if(jsonValue.ValueExists("fixedPrice"))
  {
    m_fixedPrice = jsonValue.GetDouble("fixedPrice");
    m_fixedPriceHasBeenSet = true;
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
  if(jsonValue.ValueExists("resourceSpecification"))
  {
    m_resourceSpecification = jsonValue.GetObject("resourceSpecification");
    m_resourceSpecificationHasBeenSet = true;
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
