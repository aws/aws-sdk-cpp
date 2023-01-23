/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-a2i-runtime/model/StartHumanLoopResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AugmentedAIRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartHumanLoopResult::StartHumanLoopResult()
{
}

StartHumanLoopResult::StartHumanLoopResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartHumanLoopResult& StartHumanLoopResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HumanLoopArn"))
  {
    m_humanLoopArn = jsonValue.GetString("HumanLoopArn");

  }



  return *this;
}
