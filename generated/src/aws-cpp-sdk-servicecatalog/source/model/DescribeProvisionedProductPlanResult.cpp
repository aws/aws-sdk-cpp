/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/DescribeProvisionedProductPlanResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeProvisionedProductPlanResult::DescribeProvisionedProductPlanResult()
{
}

DescribeProvisionedProductPlanResult::DescribeProvisionedProductPlanResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeProvisionedProductPlanResult& DescribeProvisionedProductPlanResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProvisionedProductPlanDetails"))
  {
    m_provisionedProductPlanDetails = jsonValue.GetObject("ProvisionedProductPlanDetails");

  }

  if(jsonValue.ValueExists("ResourceChanges"))
  {
    Aws::Utils::Array<JsonView> resourceChangesJsonList = jsonValue.GetArray("ResourceChanges");
    for(unsigned resourceChangesIndex = 0; resourceChangesIndex < resourceChangesJsonList.GetLength(); ++resourceChangesIndex)
    {
      m_resourceChanges.push_back(resourceChangesJsonList[resourceChangesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
