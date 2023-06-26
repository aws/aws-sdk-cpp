/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchUpdateStandardsControlAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchUpdateStandardsControlAssociationsResult::BatchUpdateStandardsControlAssociationsResult()
{
}

BatchUpdateStandardsControlAssociationsResult::BatchUpdateStandardsControlAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchUpdateStandardsControlAssociationsResult& BatchUpdateStandardsControlAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UnprocessedAssociationUpdates"))
  {
    Aws::Utils::Array<JsonView> unprocessedAssociationUpdatesJsonList = jsonValue.GetArray("UnprocessedAssociationUpdates");
    for(unsigned unprocessedAssociationUpdatesIndex = 0; unprocessedAssociationUpdatesIndex < unprocessedAssociationUpdatesJsonList.GetLength(); ++unprocessedAssociationUpdatesIndex)
    {
      m_unprocessedAssociationUpdates.push_back(unprocessedAssociationUpdatesJsonList[unprocessedAssociationUpdatesIndex].AsObject());
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
