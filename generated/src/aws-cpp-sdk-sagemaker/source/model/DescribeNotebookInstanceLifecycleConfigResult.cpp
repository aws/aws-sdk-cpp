/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeNotebookInstanceLifecycleConfigResult.h>
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

DescribeNotebookInstanceLifecycleConfigResult::DescribeNotebookInstanceLifecycleConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeNotebookInstanceLifecycleConfigResult& DescribeNotebookInstanceLifecycleConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NotebookInstanceLifecycleConfigArn"))
  {
    m_notebookInstanceLifecycleConfigArn = jsonValue.GetString("NotebookInstanceLifecycleConfigArn");
    m_notebookInstanceLifecycleConfigArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NotebookInstanceLifecycleConfigName"))
  {
    m_notebookInstanceLifecycleConfigName = jsonValue.GetString("NotebookInstanceLifecycleConfigName");
    m_notebookInstanceLifecycleConfigNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OnCreate"))
  {
    Aws::Utils::Array<JsonView> onCreateJsonList = jsonValue.GetArray("OnCreate");
    for(unsigned onCreateIndex = 0; onCreateIndex < onCreateJsonList.GetLength(); ++onCreateIndex)
    {
      m_onCreate.push_back(onCreateJsonList[onCreateIndex].AsObject());
    }
    m_onCreateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OnStart"))
  {
    Aws::Utils::Array<JsonView> onStartJsonList = jsonValue.GetArray("OnStart");
    for(unsigned onStartIndex = 0; onStartIndex < onStartJsonList.GetLength(); ++onStartIndex)
    {
      m_onStart.push_back(onStartJsonList[onStartIndex].AsObject());
    }
    m_onStartHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
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
