/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateModelCardExportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateModelCardExportJobResult::CreateModelCardExportJobResult()
{
}

CreateModelCardExportJobResult::CreateModelCardExportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateModelCardExportJobResult& CreateModelCardExportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelCardExportJobArn"))
  {
    m_modelCardExportJobArn = jsonValue.GetString("ModelCardExportJobArn");

  }



  return *this;
}
