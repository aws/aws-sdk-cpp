/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/GetSigningProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSigningProfileResult::GetSigningProfileResult() : 
    m_status(SigningProfileStatus::NOT_SET)
{
}

GetSigningProfileResult::GetSigningProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(SigningProfileStatus::NOT_SET)
{
  *this = result;
}

GetSigningProfileResult& GetSigningProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("profileName"))
  {
    m_profileName = jsonValue.GetString("profileName");

  }

  if(jsonValue.ValueExists("profileVersion"))
  {
    m_profileVersion = jsonValue.GetString("profileVersion");

  }

  if(jsonValue.ValueExists("profileVersionArn"))
  {
    m_profileVersionArn = jsonValue.GetString("profileVersionArn");

  }

  if(jsonValue.ValueExists("revocationRecord"))
  {
    m_revocationRecord = jsonValue.GetObject("revocationRecord");

  }

  if(jsonValue.ValueExists("signingMaterial"))
  {
    m_signingMaterial = jsonValue.GetObject("signingMaterial");

  }

  if(jsonValue.ValueExists("platformId"))
  {
    m_platformId = jsonValue.GetString("platformId");

  }

  if(jsonValue.ValueExists("platformDisplayName"))
  {
    m_platformDisplayName = jsonValue.GetString("platformDisplayName");

  }

  if(jsonValue.ValueExists("signatureValidityPeriod"))
  {
    m_signatureValidityPeriod = jsonValue.GetObject("signatureValidityPeriod");

  }

  if(jsonValue.ValueExists("overrides"))
  {
    m_overrides = jsonValue.GetObject("overrides");

  }

  if(jsonValue.ValueExists("signingParameters"))
  {
    Aws::Map<Aws::String, JsonView> signingParametersJsonMap = jsonValue.GetObject("signingParameters").GetAllObjects();
    for(auto& signingParametersItem : signingParametersJsonMap)
    {
      m_signingParameters[signingParametersItem.first] = signingParametersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SigningProfileStatusMapper::GetSigningProfileStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
