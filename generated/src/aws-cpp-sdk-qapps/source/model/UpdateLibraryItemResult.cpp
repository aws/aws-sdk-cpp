/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/UpdateLibraryItemResult.h>
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

UpdateLibraryItemResult::UpdateLibraryItemResult() : 
    m_appVersion(0),
    m_ratingCount(0),
    m_isRatedByUser(false),
    m_userCount(0),
    m_isVerified(false)
{
}

UpdateLibraryItemResult::UpdateLibraryItemResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateLibraryItemResult()
{
  *this = result;
}

UpdateLibraryItemResult& UpdateLibraryItemResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("libraryItemId"))
  {
    m_libraryItemId = jsonValue.GetString("libraryItemId");

  }

  if(jsonValue.ValueExists("appId"))
  {
    m_appId = jsonValue.GetString("appId");

  }

  if(jsonValue.ValueExists("appVersion"))
  {
    m_appVersion = jsonValue.GetInteger("appVersion");

  }

  if(jsonValue.ValueExists("categories"))
  {
    Aws::Utils::Array<JsonView> categoriesJsonList = jsonValue.GetArray("categories");
    for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
    {
      m_categories.push_back(categoriesJsonList[categoriesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

  }

  if(jsonValue.ValueExists("ratingCount"))
  {
    m_ratingCount = jsonValue.GetInteger("ratingCount");

  }

  if(jsonValue.ValueExists("isRatedByUser"))
  {
    m_isRatedByUser = jsonValue.GetBool("isRatedByUser");

  }

  if(jsonValue.ValueExists("userCount"))
  {
    m_userCount = jsonValue.GetInteger("userCount");

  }

  if(jsonValue.ValueExists("isVerified"))
  {
    m_isVerified = jsonValue.GetBool("isVerified");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
