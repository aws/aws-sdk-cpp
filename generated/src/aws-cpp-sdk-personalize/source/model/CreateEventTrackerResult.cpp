/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/CreateEventTrackerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateEventTrackerResult::CreateEventTrackerResult()
{
}

CreateEventTrackerResult::CreateEventTrackerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateEventTrackerResult& CreateEventTrackerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("eventTrackerArn"))
  {
    m_eventTrackerArn = jsonValue.GetString("eventTrackerArn");

  }

  if(jsonValue.ValueExists("trackingId"))
  {
    m_trackingId = jsonValue.GetString("trackingId");

  }



  return *this;
}
