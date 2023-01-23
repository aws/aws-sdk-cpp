/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ListOfferingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOfferingsResult::ListOfferingsResult()
{
}

ListOfferingsResult::ListOfferingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOfferingsResult& ListOfferingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("offerings"))
  {
    Aws::Utils::Array<JsonView> offeringsJsonList = jsonValue.GetArray("offerings");
    for(unsigned offeringsIndex = 0; offeringsIndex < offeringsJsonList.GetLength(); ++offeringsIndex)
    {
      m_offerings.push_back(offeringsJsonList[offeringsIndex].AsObject());
    }
  }



  return *this;
}
