/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeCodeRepositoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCodeRepositoryResult::DescribeCodeRepositoryResult()
{
}

DescribeCodeRepositoryResult::DescribeCodeRepositoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeCodeRepositoryResult& DescribeCodeRepositoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CodeRepositoryName"))
  {
    m_codeRepositoryName = jsonValue.GetString("CodeRepositoryName");

  }

  if(jsonValue.ValueExists("CodeRepositoryArn"))
  {
    m_codeRepositoryArn = jsonValue.GetString("CodeRepositoryArn");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("GitConfig"))
  {
    m_gitConfig = jsonValue.GetObject("GitConfig");

  }



  return *this;
}
