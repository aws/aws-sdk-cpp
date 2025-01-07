/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/GetMembershipResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityIR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMembershipResult::GetMembershipResult() : 
    m_region(AwsRegion::NOT_SET),
    m_membershipStatus(MembershipStatus::NOT_SET),
    m_customerType(CustomerType::NOT_SET),
    m_numberOfAccountsCovered(0)
{
}

GetMembershipResult::GetMembershipResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetMembershipResult()
{
  *this = result;
}

GetMembershipResult& GetMembershipResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("membershipId"))
  {
    m_membershipId = jsonValue.GetString("membershipId");

  }

  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = AwsRegionMapper::GetAwsRegionForName(jsonValue.GetString("region"));

  }

  if(jsonValue.ValueExists("membershipName"))
  {
    m_membershipName = jsonValue.GetString("membershipName");

  }

  if(jsonValue.ValueExists("membershipArn"))
  {
    m_membershipArn = jsonValue.GetString("membershipArn");

  }

  if(jsonValue.ValueExists("membershipStatus"))
  {
    m_membershipStatus = MembershipStatusMapper::GetMembershipStatusForName(jsonValue.GetString("membershipStatus"));

  }

  if(jsonValue.ValueExists("membershipActivationTimestamp"))
  {
    m_membershipActivationTimestamp = jsonValue.GetDouble("membershipActivationTimestamp");

  }

  if(jsonValue.ValueExists("membershipDeactivationTimestamp"))
  {
    m_membershipDeactivationTimestamp = jsonValue.GetDouble("membershipDeactivationTimestamp");

  }

  if(jsonValue.ValueExists("customerType"))
  {
    m_customerType = CustomerTypeMapper::GetCustomerTypeForName(jsonValue.GetString("customerType"));

  }

  if(jsonValue.ValueExists("numberOfAccountsCovered"))
  {
    m_numberOfAccountsCovered = jsonValue.GetInt64("numberOfAccountsCovered");

  }

  if(jsonValue.ValueExists("incidentResponseTeam"))
  {
    Aws::Utils::Array<JsonView> incidentResponseTeamJsonList = jsonValue.GetArray("incidentResponseTeam");
    for(unsigned incidentResponseTeamIndex = 0; incidentResponseTeamIndex < incidentResponseTeamJsonList.GetLength(); ++incidentResponseTeamIndex)
    {
      m_incidentResponseTeam.push_back(incidentResponseTeamJsonList[incidentResponseTeamIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("optInFeatures"))
  {
    Aws::Utils::Array<JsonView> optInFeaturesJsonList = jsonValue.GetArray("optInFeatures");
    for(unsigned optInFeaturesIndex = 0; optInFeaturesIndex < optInFeaturesJsonList.GetLength(); ++optInFeaturesIndex)
    {
      m_optInFeatures.push_back(optInFeaturesJsonList[optInFeaturesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
