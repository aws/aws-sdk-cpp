/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/GetQualificationScoreResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQualificationScoreResult::GetQualificationScoreResult()
{
}

GetQualificationScoreResult::GetQualificationScoreResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetQualificationScoreResult& GetQualificationScoreResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Qualification"))
  {
    m_qualification = jsonValue.GetObject("Qualification");

  }



  return *this;
}
