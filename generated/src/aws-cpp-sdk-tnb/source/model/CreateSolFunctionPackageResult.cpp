/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/CreateSolFunctionPackageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateSolFunctionPackageResult::CreateSolFunctionPackageResult() : 
    m_onboardingState(OnboardingState::NOT_SET),
    m_operationalState(OperationalState::NOT_SET),
    m_usageState(UsageState::NOT_SET)
{
}

CreateSolFunctionPackageResult::CreateSolFunctionPackageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_onboardingState(OnboardingState::NOT_SET),
    m_operationalState(OperationalState::NOT_SET),
    m_usageState(UsageState::NOT_SET)
{
  *this = result;
}

CreateSolFunctionPackageResult& CreateSolFunctionPackageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("onboardingState"))
  {
    m_onboardingState = OnboardingStateMapper::GetOnboardingStateForName(jsonValue.GetString("onboardingState"));

  }

  if(jsonValue.ValueExists("operationalState"))
  {
    m_operationalState = OperationalStateMapper::GetOperationalStateForName(jsonValue.GetString("operationalState"));

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("usageState"))
  {
    m_usageState = UsageStateMapper::GetUsageStateForName(jsonValue.GetString("usageState"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
