/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/DescribeOrganizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeOrganizationResult::DescribeOrganizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeOrganizationResult& DescribeOrganizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OrganizationId"))
  {
    m_organizationId = jsonValue.GetString("OrganizationId");
    m_organizationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Alias"))
  {
    m_alias = jsonValue.GetString("Alias");
    m_aliasHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");
    m_directoryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DirectoryType"))
  {
    m_directoryType = jsonValue.GetString("DirectoryType");
    m_directoryTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultMailDomain"))
  {
    m_defaultMailDomain = jsonValue.GetString("DefaultMailDomain");
    m_defaultMailDomainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletedDate"))
  {
    m_completedDate = jsonValue.GetDouble("CompletedDate");
    m_completedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");
    m_aRNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MigrationAdmin"))
  {
    m_migrationAdmin = jsonValue.GetString("MigrationAdmin");
    m_migrationAdminHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InteroperabilityEnabled"))
  {
    m_interoperabilityEnabled = jsonValue.GetBool("InteroperabilityEnabled");
    m_interoperabilityEnabledHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
