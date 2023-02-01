/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ImportHubContentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ImportHubContentResult::ImportHubContentResult()
{
}

ImportHubContentResult::ImportHubContentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ImportHubContentResult& ImportHubContentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HubArn"))
  {
    m_hubArn = jsonValue.GetString("HubArn");

  }

  if(jsonValue.ValueExists("HubContentArn"))
  {
    m_hubContentArn = jsonValue.GetString("HubContentArn");

  }



  return *this;
}
