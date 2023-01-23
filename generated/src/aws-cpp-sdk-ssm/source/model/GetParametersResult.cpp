/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetParametersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetParametersResult::GetParametersResult()
{
}

GetParametersResult::GetParametersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetParametersResult& GetParametersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Utils::Array<JsonView> parametersJsonList = jsonValue.GetArray("Parameters");
    for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
    {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("InvalidParameters"))
  {
    Aws::Utils::Array<JsonView> invalidParametersJsonList = jsonValue.GetArray("InvalidParameters");
    for(unsigned invalidParametersIndex = 0; invalidParametersIndex < invalidParametersJsonList.GetLength(); ++invalidParametersIndex)
    {
      m_invalidParameters.push_back(invalidParametersJsonList[invalidParametersIndex].AsString());
    }
  }



  return *this;
}
