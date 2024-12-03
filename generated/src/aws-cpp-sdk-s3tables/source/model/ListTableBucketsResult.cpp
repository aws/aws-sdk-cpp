/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/ListTableBucketsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTableBucketsResult::ListTableBucketsResult()
{
}

ListTableBucketsResult::ListTableBucketsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTableBucketsResult& ListTableBucketsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("tableBuckets"))
  {
    Aws::Utils::Array<JsonView> tableBucketsJsonList = jsonValue.GetArray("tableBuckets");
    for(unsigned tableBucketsIndex = 0; tableBucketsIndex < tableBucketsJsonList.GetLength(); ++tableBucketsIndex)
    {
      m_tableBuckets.push_back(tableBucketsJsonList[tableBucketsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("continuationToken"))
  {
    m_continuationToken = jsonValue.GetString("continuationToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
