/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/CreateParallelDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Translate::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateParallelDataResult::CreateParallelDataResult() : 
    m_status(ParallelDataStatus::NOT_SET)
{
}

CreateParallelDataResult::CreateParallelDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ParallelDataStatus::NOT_SET)
{
  *this = result;
}

CreateParallelDataResult& CreateParallelDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ParallelDataStatusMapper::GetParallelDataStatusForName(jsonValue.GetString("Status"));

  }



  return *this;
}
