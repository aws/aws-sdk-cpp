/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/DeleteOrganizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteOrganizationResult::DeleteOrganizationResult()
{
}

DeleteOrganizationResult::DeleteOrganizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteOrganizationResult& DeleteOrganizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OrganizationId"))
  {
    m_organizationId = jsonValue.GetString("OrganizationId");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

  }



  return *this;
}
