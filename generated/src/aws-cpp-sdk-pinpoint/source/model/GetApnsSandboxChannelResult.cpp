/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/GetApnsSandboxChannelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetApnsSandboxChannelResult::GetApnsSandboxChannelResult()
{
}

GetApnsSandboxChannelResult::GetApnsSandboxChannelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetApnsSandboxChannelResult& GetApnsSandboxChannelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  m_aPNSSandboxChannelResponse = jsonValue;


  return *this;
}
