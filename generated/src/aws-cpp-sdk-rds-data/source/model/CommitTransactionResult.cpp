/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/CommitTransactionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RDSDataService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CommitTransactionResult::CommitTransactionResult()
{
}

CommitTransactionResult::CommitTransactionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CommitTransactionResult& CommitTransactionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("transactionStatus"))
  {
    m_transactionStatus = jsonValue.GetString("transactionStatus");

  }



  return *this;
}
