/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/GetStreamingSessionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetStreamingSessionResult::GetStreamingSessionResult()
{
}

GetStreamingSessionResult::GetStreamingSessionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetStreamingSessionResult& GetStreamingSessionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("session"))
  {
    m_session = jsonValue.GetObject("session");

  }



  return *this;
}
