/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/DescribeAgreementResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AgreementService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAgreementResult::DescribeAgreementResult() : 
    m_status(AgreementStatus::NOT_SET)
{
}

DescribeAgreementResult::DescribeAgreementResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(AgreementStatus::NOT_SET)
{
  *this = result;
}

DescribeAgreementResult& DescribeAgreementResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("acceptanceTime"))
  {
    m_acceptanceTime = jsonValue.GetDouble("acceptanceTime");

  }

  if(jsonValue.ValueExists("acceptor"))
  {
    m_acceptor = jsonValue.GetObject("acceptor");

  }

  if(jsonValue.ValueExists("agreementId"))
  {
    m_agreementId = jsonValue.GetString("agreementId");

  }

  if(jsonValue.ValueExists("agreementType"))
  {
    m_agreementType = jsonValue.GetString("agreementType");

  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

  }

  if(jsonValue.ValueExists("estimatedCharges"))
  {
    m_estimatedCharges = jsonValue.GetObject("estimatedCharges");

  }

  if(jsonValue.ValueExists("proposalSummary"))
  {
    m_proposalSummary = jsonValue.GetObject("proposalSummary");

  }

  if(jsonValue.ValueExists("proposer"))
  {
    m_proposer = jsonValue.GetObject("proposer");

  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AgreementStatusMapper::GetAgreementStatusForName(jsonValue.GetString("status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
