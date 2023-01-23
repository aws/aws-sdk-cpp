/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreatePresignedNotebookInstanceUrlResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreatePresignedNotebookInstanceUrlResult::CreatePresignedNotebookInstanceUrlResult()
{
}

CreatePresignedNotebookInstanceUrlResult::CreatePresignedNotebookInstanceUrlResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreatePresignedNotebookInstanceUrlResult& CreatePresignedNotebookInstanceUrlResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AuthorizedUrl"))
  {
    m_authorizedUrl = jsonValue.GetString("AuthorizedUrl");

  }



  return *this;
}
