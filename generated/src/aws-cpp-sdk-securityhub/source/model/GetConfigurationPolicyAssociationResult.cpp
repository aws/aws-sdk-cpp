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

GetConfigurationPolicyAssociationResult::GetConfigurationPolicyAssociationResult() : 
    m_targetType(TargetType::NOT_SET),
    m_associationType(AssociationType::NOT_SET),
    m_associationStatus(ConfigurationPolicyAssociationStatus::NOT_SET)
{
}

GetConfigurationPolicyAssociationResult::GetConfigurationPolicyAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_targetType(TargetType::NOT_SET),
    m_associationType(AssociationType::NOT_SET),
    m_associationStatus(ConfigurationPolicyAssociationStatus::NOT_SET)
{
  *this = result;
}

GetConfigurationPolicyAssociationResult& GetConfigurationPolicyAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConfigurationPolicyId"))
  {
    m_configurationPolicyId = jsonValue.GetString("ConfigurationPolicyId");

  }

  if(jsonValue.ValueExists("TargetId"))
  {
    m_targetId = jsonValue.GetString("TargetId");

  }

  if(jsonValue.ValueExists("TargetType"))
  {
    m_targetType = TargetTypeMapper::GetTargetTypeForName(jsonValue.GetString("TargetType"));

  }

  if(jsonValue.ValueExists("AssociationType"))
  {
    m_associationType = AssociationTypeMapper::GetAssociationTypeForName(jsonValue.GetString("AssociationType"));

  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetString("UpdatedAt");

  }

  if(jsonValue.ValueExists("AssociationStatus"))
  {
    m_associationStatus = ConfigurationPolicyAssociationStatusMapper::GetConfigurationPolicyAssociationStatusForName(jsonValue.GetString("AssociationStatus"));

  }

  if(jsonValue.ValueExists("AssociationStatusMessage"))
  {
    m_associationStatusMessage = jsonValue.GetString("AssociationStatusMessage");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
