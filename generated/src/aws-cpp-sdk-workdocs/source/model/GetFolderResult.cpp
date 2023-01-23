/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/GetFolderResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFolderResult::GetFolderResult()
{
}

GetFolderResult::GetFolderResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFolderResult& GetFolderResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Metadata"))
  {
    m_metadata = jsonValue.GetObject("Metadata");

  }

  if(jsonValue.ValueExists("CustomMetadata"))
  {
    Aws::Map<Aws::String, JsonView> customMetadataJsonMap = jsonValue.GetObject("CustomMetadata").GetAllObjects();
    for(auto& customMetadataItem : customMetadataJsonMap)
    {
      m_customMetadata[customMetadataItem.first] = customMetadataItem.second.AsString();
    }
  }



  return *this;
}
