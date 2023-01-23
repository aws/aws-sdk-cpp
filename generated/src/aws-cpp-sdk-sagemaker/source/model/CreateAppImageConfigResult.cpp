/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateAppImageConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateAppImageConfigResult::CreateAppImageConfigResult()
{
}

CreateAppImageConfigResult::CreateAppImageConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateAppImageConfigResult& CreateAppImageConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AppImageConfigArn"))
  {
    m_appImageConfigArn = jsonValue.GetString("AppImageConfigArn");

  }



  return *this;
}
