/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/DescribeSigningJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSigningJobResult::DescribeSigningJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSigningJobResult& DescribeSigningJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signingMaterial"))
  {
    m_signingMaterial = jsonValue.GetObject("signingMaterial");
    m_signingMaterialHasBeenSet = true;
  }
  if(jsonValue.ValueExists("platformId"))
  {
    m_platformId = jsonValue.GetString("platformId");
    m_platformIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("platformDisplayName"))
  {
    m_platformDisplayName = jsonValue.GetString("platformDisplayName");
    m_platformDisplayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("profileName"))
  {
    m_profileName = jsonValue.GetString("profileName");
    m_profileNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("profileVersion"))
  {
    m_profileVersion = jsonValue.GetString("profileVersion");
    m_profileVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("overrides"))
  {
    m_overrides = jsonValue.GetObject("overrides");
    m_overridesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signingParameters"))
  {
    Aws::Map<Aws::String, JsonView> signingParametersJsonMap = jsonValue.GetObject("signingParameters").GetAllObjects();
    for(auto& signingParametersItem : signingParametersJsonMap)
    {
      m_signingParameters[signingParametersItem.first] = signingParametersItem.second.AsString();
    }
    m_signingParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("completedAt"))
  {
    m_completedAt = jsonValue.GetDouble("completedAt");
    m_completedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signatureExpiresAt"))
  {
    m_signatureExpiresAt = jsonValue.GetDouble("signatureExpiresAt");
    m_signatureExpiresAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("requestedBy"))
  {
    m_requestedBy = jsonValue.GetString("requestedBy");
    m_requestedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = SigningStatusMapper::GetSigningStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("revocationRecord"))
  {
    m_revocationRecord = jsonValue.GetObject("revocationRecord");
    m_revocationRecordHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signedObject"))
  {
    m_signedObject = jsonValue.GetObject("signedObject");
    m_signedObjectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobOwner"))
  {
    m_jobOwner = jsonValue.GetString("jobOwner");
    m_jobOwnerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobInvoker"))
  {
    m_jobInvoker = jsonValue.GetString("jobInvoker");
    m_jobInvokerHasBeenSet = true;
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
