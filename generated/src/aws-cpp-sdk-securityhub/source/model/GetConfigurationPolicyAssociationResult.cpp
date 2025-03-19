/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GetConfigurationPolicyAssociationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConfigurationPolicyAssociationResult::GetConfigurationPolicyAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetConfigurationPolicyAssociationResult& GetConfigurationPolicyAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConfigurationPolicyId"))
  {
    m_configurationPolicyId = jsonValue.GetString("ConfigurationPolicyId");
    m_configurationPolicyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetId"))
  {
    m_targetId = jsonValue.GetString("TargetId");
    m_targetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetType"))
  {
    m_targetType = TargetTypeMapper::GetTargetTypeForName(jsonValue.GetString("TargetType"));
    m_targetTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssociationType"))
  {
    m_associationType = AssociationTypeMapper::GetAssociationTypeForName(jsonValue.GetString("AssociationType"));
    m_associationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetString("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssociationStatus"))
  {
    m_associationStatus = ConfigurationPolicyAssociationStatusMapper::GetConfigurationPolicyAssociationStatusForName(jsonValue.GetString("AssociationStatus"));
    m_associationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssociationStatusMessage"))
  {
    m_associationStatusMessage = jsonValue.GetString("AssociationStatusMessage");
    m_associationStatusMessageHasBeenSet = true;
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
