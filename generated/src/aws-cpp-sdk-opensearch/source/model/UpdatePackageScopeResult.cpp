/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/UpdatePackageScopeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdatePackageScopeResult::UpdatePackageScopeResult() : 
    m_operation(PackageScopeOperationEnum::NOT_SET)
{
}

UpdatePackageScopeResult::UpdatePackageScopeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdatePackageScopeResult()
{
  *this = result;
}

UpdatePackageScopeResult& UpdatePackageScopeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PackageID"))
  {
    m_packageID = jsonValue.GetString("PackageID");

  }

  if(jsonValue.ValueExists("Operation"))
  {
    m_operation = PackageScopeOperationEnumMapper::GetPackageScopeOperationEnumForName(jsonValue.GetString("Operation"));

  }

  if(jsonValue.ValueExists("PackageUserList"))
  {
    Aws::Utils::Array<JsonView> packageUserListJsonList = jsonValue.GetArray("PackageUserList");
    for(unsigned packageUserListIndex = 0; packageUserListIndex < packageUserListJsonList.GetLength(); ++packageUserListIndex)
    {
      m_packageUserList.push_back(packageUserListJsonList[packageUserListIndex].AsString());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
