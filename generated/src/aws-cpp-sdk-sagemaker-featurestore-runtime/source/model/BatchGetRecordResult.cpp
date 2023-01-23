/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-featurestore-runtime/model/BatchGetRecordResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMakerFeatureStoreRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetRecordResult::BatchGetRecordResult()
{
}

BatchGetRecordResult::BatchGetRecordResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetRecordResult& BatchGetRecordResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Records"))
  {
    Aws::Utils::Array<JsonView> recordsJsonList = jsonValue.GetArray("Records");
    for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
    {
      m_records.push_back(recordsJsonList[recordsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnprocessedIdentifiers"))
  {
    Aws::Utils::Array<JsonView> unprocessedIdentifiersJsonList = jsonValue.GetArray("UnprocessedIdentifiers");
    for(unsigned unprocessedIdentifiersIndex = 0; unprocessedIdentifiersIndex < unprocessedIdentifiersJsonList.GetLength(); ++unprocessedIdentifiersIndex)
    {
      m_unprocessedIdentifiers.push_back(unprocessedIdentifiersJsonList[unprocessedIdentifiersIndex].AsObject());
    }
  }



  return *this;
}
