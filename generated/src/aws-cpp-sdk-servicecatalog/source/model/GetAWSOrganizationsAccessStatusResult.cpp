/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/GetAWSOrganizationsAccessStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAWSOrganizationsAccessStatusResult::GetAWSOrganizationsAccessStatusResult() : 
    m_accessStatus(AccessStatus::NOT_SET)
{
}

GetAWSOrganizationsAccessStatusResult::GetAWSOrganizationsAccessStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_accessStatus(AccessStatus::NOT_SET)
{
  *this = result;
}

GetAWSOrganizationsAccessStatusResult& GetAWSOrganizationsAccessStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccessStatus"))
  {
    m_accessStatus = AccessStatusMapper::GetAccessStatusForName(jsonValue.GetString("AccessStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
