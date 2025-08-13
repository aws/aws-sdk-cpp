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

GetMembershipResult::GetMembershipResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMembershipResult& GetMembershipResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("membershipId"))
  {
    m_membershipId = jsonValue.GetString("membershipId");
    m_membershipIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("region"))
  {
    m_region = AwsRegionMapper::GetAwsRegionForName(jsonValue.GetString("region"));
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("membershipName"))
  {
    m_membershipName = jsonValue.GetString("membershipName");
    m_membershipNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("membershipArn"))
  {
    m_membershipArn = jsonValue.GetString("membershipArn");
    m_membershipArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("membershipStatus"))
  {
    m_membershipStatus = MembershipStatusMapper::GetMembershipStatusForName(jsonValue.GetString("membershipStatus"));
    m_membershipStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("membershipActivationTimestamp"))
  {
    m_membershipActivationTimestamp = jsonValue.GetDouble("membershipActivationTimestamp");
    m_membershipActivationTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("membershipDeactivationTimestamp"))
  {
    m_membershipDeactivationTimestamp = jsonValue.GetDouble("membershipDeactivationTimestamp");
    m_membershipDeactivationTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customerType"))
  {
    m_customerType = CustomerTypeMapper::GetCustomerTypeForName(jsonValue.GetString("customerType"));
    m_customerTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberOfAccountsCovered"))
  {
    m_numberOfAccountsCovered = jsonValue.GetInt64("numberOfAccountsCovered");
    m_numberOfAccountsCoveredHasBeenSet = true;
  }
  if(jsonValue.ValueExists("incidentResponseTeam"))
  {
    Aws::Utils::Array<JsonView> incidentResponseTeamJsonList = jsonValue.GetArray("incidentResponseTeam");
    for(unsigned incidentResponseTeamIndex = 0; incidentResponseTeamIndex < incidentResponseTeamJsonList.GetLength(); ++incidentResponseTeamIndex)
    {
      m_incidentResponseTeam.push_back(incidentResponseTeamJsonList[incidentResponseTeamIndex].AsObject());
    }
    m_incidentResponseTeamHasBeenSet = true;
  }
  if(jsonValue.ValueExists("optInFeatures"))
  {
    Aws::Utils::Array<JsonView> optInFeaturesJsonList = jsonValue.GetArray("optInFeatures");
    for(unsigned optInFeaturesIndex = 0; optInFeaturesIndex < optInFeaturesJsonList.GetLength(); ++optInFeaturesIndex)
    {
      m_optInFeatures.push_back(optInFeaturesJsonList[optInFeaturesIndex].AsObject());
    }
    m_optInFeaturesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("membershipAccountsConfigurations"))
  {
    m_membershipAccountsConfigurations = jsonValue.GetObject("membershipAccountsConfigurations");
    m_membershipAccountsConfigurationsHasBeenSet = true;
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
