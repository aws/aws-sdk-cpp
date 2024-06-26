﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ValidateStateMachineDefinitionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ValidateStateMachineDefinitionResult::ValidateStateMachineDefinitionResult() : 
    m_result(ValidateStateMachineDefinitionResultCode::NOT_SET)
{
}

ValidateStateMachineDefinitionResult::ValidateStateMachineDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : ValidateStateMachineDefinitionResult()
{
  *this = result;
}

ValidateStateMachineDefinitionResult& ValidateStateMachineDefinitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("result"))
  {
    m_result = ValidateStateMachineDefinitionResultCodeMapper::GetValidateStateMachineDefinitionResultCodeForName(jsonValue.GetString("result"));

  }

  if(jsonValue.ValueExists("diagnostics"))
  {
    Aws::Utils::Array<JsonView> diagnosticsJsonList = jsonValue.GetArray("diagnostics");
    for(unsigned diagnosticsIndex = 0; diagnosticsIndex < diagnosticsJsonList.GetLength(); ++diagnosticsIndex)
    {
      m_diagnostics.push_back(diagnosticsJsonList[diagnosticsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
