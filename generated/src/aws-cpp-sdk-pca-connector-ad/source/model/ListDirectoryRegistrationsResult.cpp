/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/ListDirectoryRegistrationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PcaConnectorAd::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDirectoryRegistrationsResult::ListDirectoryRegistrationsResult()
{
}

ListDirectoryRegistrationsResult::ListDirectoryRegistrationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDirectoryRegistrationsResult& ListDirectoryRegistrationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DirectoryRegistrations"))
  {
    Aws::Utils::Array<JsonView> directoryRegistrationsJsonList = jsonValue.GetArray("DirectoryRegistrations");
    for(unsigned directoryRegistrationsIndex = 0; directoryRegistrationsIndex < directoryRegistrationsJsonList.GetLength(); ++directoryRegistrationsIndex)
    {
      m_directoryRegistrations.push_back(directoryRegistrationsJsonList[directoryRegistrationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
