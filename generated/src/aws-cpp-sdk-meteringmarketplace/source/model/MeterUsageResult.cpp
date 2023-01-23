/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/meteringmarketplace/model/MeterUsageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MarketplaceMetering::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

MeterUsageResult::MeterUsageResult()
{
}

MeterUsageResult::MeterUsageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

MeterUsageResult& MeterUsageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MeteringRecordId"))
  {
    m_meteringRecordId = jsonValue.GetString("MeteringRecordId");

  }



  return *this;
}
