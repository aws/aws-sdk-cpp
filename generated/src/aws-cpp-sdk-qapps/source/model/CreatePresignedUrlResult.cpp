/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/CreatePresignedUrlResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QApps::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreatePresignedUrlResult::CreatePresignedUrlResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreatePresignedUrlResult& CreatePresignedUrlResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("fileId"))
  {
    m_fileId = jsonValue.GetString("fileId");
    m_fileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("presignedUrl"))
  {
    m_presignedUrl = jsonValue.GetString("presignedUrl");
    m_presignedUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("presignedUrlFields"))
  {
    Aws::Map<Aws::String, JsonView> presignedUrlFieldsJsonMap = jsonValue.GetObject("presignedUrlFields").GetAllObjects();
    for(auto& presignedUrlFieldsItem : presignedUrlFieldsJsonMap)
    {
      m_presignedUrlFields[presignedUrlFieldsItem.first] = presignedUrlFieldsItem.second.AsString();
    }
    m_presignedUrlFieldsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("presignedUrlExpiration"))
  {
    m_presignedUrlExpiration = jsonValue.GetString("presignedUrlExpiration");
    m_presignedUrlExpirationHasBeenSet = true;
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
