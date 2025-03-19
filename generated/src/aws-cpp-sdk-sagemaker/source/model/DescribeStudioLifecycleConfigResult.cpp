/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeStudioLifecycleConfigResult.h>
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

DescribeStudioLifecycleConfigResult::DescribeStudioLifecycleConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeStudioLifecycleConfigResult& DescribeStudioLifecycleConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StudioLifecycleConfigArn"))
  {
    m_studioLifecycleConfigArn = jsonValue.GetString("StudioLifecycleConfigArn");
    m_studioLifecycleConfigArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StudioLifecycleConfigName"))
  {
    m_studioLifecycleConfigName = jsonValue.GetString("StudioLifecycleConfigName");
    m_studioLifecycleConfigNameHasBeenSet = true;
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
  if(jsonValue.ValueExists("StudioLifecycleConfigContent"))
  {
    m_studioLifecycleConfigContent = jsonValue.GetString("StudioLifecycleConfigContent");
    m_studioLifecycleConfigContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StudioLifecycleConfigAppType"))
  {
    m_studioLifecycleConfigAppType = StudioLifecycleConfigAppTypeMapper::GetStudioLifecycleConfigAppTypeForName(jsonValue.GetString("StudioLifecycleConfigAppType"));
    m_studioLifecycleConfigAppTypeHasBeenSet = true;
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
