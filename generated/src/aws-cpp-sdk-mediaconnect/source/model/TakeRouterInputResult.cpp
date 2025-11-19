/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mediaconnect/model/TakeRouterInputResult.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TakeRouterInputResult::TakeRouterInputResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

TakeRouterInputResult& TakeRouterInputResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("routedState")) {
    m_routedState = RouterOutputRoutedStateMapper::GetRouterOutputRoutedStateForName(jsonValue.GetString("routedState"));
    m_routedStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routerOutputArn")) {
    m_routerOutputArn = jsonValue.GetString("routerOutputArn");
    m_routerOutputArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routerOutputName")) {
    m_routerOutputName = jsonValue.GetString("routerOutputName");
    m_routerOutputNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routerInputArn")) {
    m_routerInputArn = jsonValue.GetString("routerInputArn");
    m_routerInputArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routerInputName")) {
    m_routerInputName = jsonValue.GetString("routerInputName");
    m_routerInputNameHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
