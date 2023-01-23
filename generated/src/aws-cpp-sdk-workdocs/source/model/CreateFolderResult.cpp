/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/CreateFolderResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateFolderResult::CreateFolderResult()
{
}

CreateFolderResult::CreateFolderResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateFolderResult& CreateFolderResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Metadata"))
  {
    m_metadata = jsonValue.GetObject("Metadata");

  }



  return *this;
}
