/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ListReadSetActivationJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReadSetActivationJobsResult::ListReadSetActivationJobsResult()
{
}

ListReadSetActivationJobsResult::ListReadSetActivationJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReadSetActivationJobsResult& ListReadSetActivationJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("activationJobs"))
  {
    Aws::Utils::Array<JsonView> activationJobsJsonList = jsonValue.GetArray("activationJobs");
    for(unsigned activationJobsIndex = 0; activationJobsIndex < activationJobsJsonList.GetLength(); ++activationJobsIndex)
    {
      m_activationJobs.push_back(activationJobsJsonList[activationJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
