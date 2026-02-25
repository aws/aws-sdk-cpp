/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rds-data/model/ExecuteStatementResult.h>

#include <utility>

using namespace Aws::RDSDataService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ExecuteStatementResult::ExecuteStatementResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ExecuteStatementResult& ExecuteStatementResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("records")) {
    Aws::Utils::Array<JsonView> recordsJsonList = jsonValue.GetArray("records");
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
  if (jsonValue.ValueExists("columnMetadata")) {
    Aws::Utils::Array<JsonView> columnMetadataJsonList = jsonValue.GetArray("columnMetadata");
    for (unsigned columnMetadataIndex = 0; columnMetadataIndex < columnMetadataJsonList.GetLength(); ++columnMetadataIndex) {
      m_columnMetadata.push_back(columnMetadataJsonList[columnMetadataIndex].AsObject());
    }
    m_columnMetadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("numberOfRecordsUpdated")) {
    m_numberOfRecordsUpdated = jsonValue.GetInt64("numberOfRecordsUpdated");
    m_numberOfRecordsUpdatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("generatedFields")) {
    Aws::Utils::Array<JsonView> generatedFieldsJsonList = jsonValue.GetArray("generatedFields");
    for (unsigned generatedFieldsIndex = 0; generatedFieldsIndex < generatedFieldsJsonList.GetLength(); ++generatedFieldsIndex) {
      m_generatedFields.push_back(generatedFieldsJsonList[generatedFieldsIndex].AsObject());
    }
    m_generatedFieldsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("formattedRecords")) {
    m_formattedRecords = jsonValue.GetString("formattedRecords");
    m_formattedRecordsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
