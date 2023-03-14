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

DescribeStudioLifecycleConfigResult::DescribeStudioLifecycleConfigResult() : 
    m_studioLifecycleConfigAppType(StudioLifecycleConfigAppType::NOT_SET)
{
}

DescribeStudioLifecycleConfigResult::DescribeStudioLifecycleConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_studioLifecycleConfigAppType(StudioLifecycleConfigAppType::NOT_SET)
{
  *this = result;
}

DescribeStudioLifecycleConfigResult& DescribeStudioLifecycleConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StudioLifecycleConfigArn"))
  {
    m_studioLifecycleConfigArn = jsonValue.GetString("StudioLifecycleConfigArn");

  }

  if(jsonValue.ValueExists("StudioLifecycleConfigName"))
  {
    m_studioLifecycleConfigName = jsonValue.GetString("StudioLifecycleConfigName");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("StudioLifecycleConfigContent"))
  {
    m_studioLifecycleConfigContent = jsonValue.GetString("StudioLifecycleConfigContent");

  }

  if(jsonValue.ValueExists("StudioLifecycleConfigAppType"))
  {
    m_studioLifecycleConfigAppType = StudioLifecycleConfigAppTypeMapper::GetStudioLifecycleConfigAppTypeForName(jsonValue.GetString("StudioLifecycleConfigAppType"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
