/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetPatchBaselineResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPatchBaselineResult::GetPatchBaselineResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPatchBaselineResult& GetPatchBaselineResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BaselineId"))
  {
    m_baselineId = jsonValue.GetString("BaselineId");
    m_baselineIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OperatingSystem"))
  {
    m_operatingSystem = OperatingSystemMapper::GetOperatingSystemForName(jsonValue.GetString("OperatingSystem"));
    m_operatingSystemHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GlobalFilters"))
  {
    m_globalFilters = jsonValue.GetObject("GlobalFilters");
    m_globalFiltersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApprovalRules"))
  {
    m_approvalRules = jsonValue.GetObject("ApprovalRules");
    m_approvalRulesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApprovedPatches"))
  {
    Aws::Utils::Array<JsonView> approvedPatchesJsonList = jsonValue.GetArray("ApprovedPatches");
    for(unsigned approvedPatchesIndex = 0; approvedPatchesIndex < approvedPatchesJsonList.GetLength(); ++approvedPatchesIndex)
    {
      m_approvedPatches.push_back(approvedPatchesJsonList[approvedPatchesIndex].AsString());
    }
    m_approvedPatchesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApprovedPatchesComplianceLevel"))
  {
    m_approvedPatchesComplianceLevel = PatchComplianceLevelMapper::GetPatchComplianceLevelForName(jsonValue.GetString("ApprovedPatchesComplianceLevel"));
    m_approvedPatchesComplianceLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApprovedPatchesEnableNonSecurity"))
  {
    m_approvedPatchesEnableNonSecurity = jsonValue.GetBool("ApprovedPatchesEnableNonSecurity");
    m_approvedPatchesEnableNonSecurityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RejectedPatches"))
  {
    Aws::Utils::Array<JsonView> rejectedPatchesJsonList = jsonValue.GetArray("RejectedPatches");
    for(unsigned rejectedPatchesIndex = 0; rejectedPatchesIndex < rejectedPatchesJsonList.GetLength(); ++rejectedPatchesIndex)
    {
      m_rejectedPatches.push_back(rejectedPatchesJsonList[rejectedPatchesIndex].AsString());
    }
    m_rejectedPatchesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RejectedPatchesAction"))
  {
    m_rejectedPatchesAction = PatchActionMapper::GetPatchActionForName(jsonValue.GetString("RejectedPatchesAction"));
    m_rejectedPatchesActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PatchGroups"))
  {
    Aws::Utils::Array<JsonView> patchGroupsJsonList = jsonValue.GetArray("PatchGroups");
    for(unsigned patchGroupsIndex = 0; patchGroupsIndex < patchGroupsJsonList.GetLength(); ++patchGroupsIndex)
    {
      m_patchGroups.push_back(patchGroupsJsonList[patchGroupsIndex].AsString());
    }
    m_patchGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");
    m_createdDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModifiedDate"))
  {
    m_modifiedDate = jsonValue.GetDouble("ModifiedDate");
    m_modifiedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Sources"))
  {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("Sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
    m_sourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailableSecurityUpdatesComplianceStatus"))
  {
    m_availableSecurityUpdatesComplianceStatus = PatchComplianceStatusMapper::GetPatchComplianceStatusForName(jsonValue.GetString("AvailableSecurityUpdatesComplianceStatus"));
    m_availableSecurityUpdatesComplianceStatusHasBeenSet = true;
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
