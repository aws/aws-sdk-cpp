/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/CancelHandshakeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CancelHandshakeResult::CancelHandshakeResult()
{
}

CancelHandshakeResult::CancelHandshakeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CancelHandshakeResult& CancelHandshakeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Handshake"))
  {
    m_handshake = jsonValue.GetObject("Handshake");

  }



  return *this;
}
