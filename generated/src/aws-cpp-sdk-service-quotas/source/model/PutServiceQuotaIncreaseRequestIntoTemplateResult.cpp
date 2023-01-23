/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/PutServiceQuotaIncreaseRequestIntoTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutServiceQuotaIncreaseRequestIntoTemplateResult::PutServiceQuotaIncreaseRequestIntoTemplateResult()
{
}

PutServiceQuotaIncreaseRequestIntoTemplateResult::PutServiceQuotaIncreaseRequestIntoTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutServiceQuotaIncreaseRequestIntoTemplateResult& PutServiceQuotaIncreaseRequestIntoTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ServiceQuotaIncreaseRequestInTemplate"))
  {
    m_serviceQuotaIncreaseRequestInTemplate = jsonValue.GetObject("ServiceQuotaIncreaseRequestInTemplate");

  }



  return *this;
}
