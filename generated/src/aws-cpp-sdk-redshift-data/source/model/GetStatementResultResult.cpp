/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/redshift-data/model/GetStatementResultResult.h>

#include <utility>

using namespace Aws::RedshiftDataAPIService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetStatementResultResult::GetStatementResultResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetStatementResultResult& GetStatementResultResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_responseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Records")) {
    Aws::Utils::Array<JsonView> recordsJsonList = jsonValue.GetArray("Records");
    for (unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex) {
      Aws::Utils::Array<JsonView> fieldList2JsonList = recordsJsonList[recordsIndex].AsArray();
      Aws::Vector<Field> fieldList2List;
      fieldList2List.reserve((size_t)fieldList2JsonList.GetLength());
      for (unsigned fieldList2Index = 0; fieldList2Index < fieldList2JsonList.GetLength(); ++fieldList2Index) {
        fieldList2List.push_back(fieldList2JsonList[fieldList2Index].AsObject());
      }
      m_records.push_back(std::move(fieldList2List));
    }
    m_recordsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ColumnMetadata")) {
    Aws::Utils::Array<JsonView> columnMetadataJsonList = jsonValue.GetArray("ColumnMetadata");
    for (unsigned columnMetadataIndex = 0; columnMetadataIndex < columnMetadataJsonList.GetLength(); ++columnMetadataIndex) {
      m_columnMetadata.push_back(columnMetadataJsonList[columnMetadataIndex].AsObject());
    }
    m_columnMetadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalNumRows")) {
    m_totalNumRows = jsonValue.GetInt64("TotalNumRows");
    m_totalNumRowsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
