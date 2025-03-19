/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeAppImageConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAppImageConfigResult::DescribeAppImageConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAppImageConfigResult& DescribeAppImageConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AppImageConfigArn"))
  {
    m_appImageConfigArn = jsonValue.GetString("AppImageConfigArn");
    m_appImageConfigArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppImageConfigName"))
  {
    m_appImageConfigName = jsonValue.GetString("AppImageConfigName");
    m_appImageConfigNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KernelGatewayImageConfig"))
  {
    m_kernelGatewayImageConfig = jsonValue.GetObject("KernelGatewayImageConfig");
    m_kernelGatewayImageConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JupyterLabAppImageConfig"))
  {
    m_jupyterLabAppImageConfig = jsonValue.GetObject("JupyterLabAppImageConfig");
    m_jupyterLabAppImageConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CodeEditorAppImageConfig"))
  {
    m_codeEditorAppImageConfig = jsonValue.GetObject("CodeEditorAppImageConfig");
    m_codeEditorAppImageConfigHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
