/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/ListSnapshotCopyConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSnapshotCopyConfigurationsResult::ListSnapshotCopyConfigurationsResult()
{
}

ListSnapshotCopyConfigurationsResult::ListSnapshotCopyConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSnapshotCopyConfigurationsResult& ListSnapshotCopyConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("snapshotCopyConfigurations"))
  {
    Aws::Utils::Array<JsonView> snapshotCopyConfigurationsJsonList = jsonValue.GetArray("snapshotCopyConfigurations");
    for(unsigned snapshotCopyConfigurationsIndex = 0; snapshotCopyConfigurationsIndex < snapshotCopyConfigurationsJsonList.GetLength(); ++snapshotCopyConfigurationsIndex)
    {
      m_snapshotCopyConfigurations.push_back(snapshotCopyConfigurationsJsonList[snapshotCopyConfigurationsIndex].AsObject());
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
