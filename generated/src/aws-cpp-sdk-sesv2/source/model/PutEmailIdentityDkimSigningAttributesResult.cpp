/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/PutEmailIdentityDkimSigningAttributesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutEmailIdentityDkimSigningAttributesResult::PutEmailIdentityDkimSigningAttributesResult() : 
    m_dkimStatus(DkimStatus::NOT_SET)
{
}

PutEmailIdentityDkimSigningAttributesResult::PutEmailIdentityDkimSigningAttributesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_dkimStatus(DkimStatus::NOT_SET)
{
  *this = result;
}

PutEmailIdentityDkimSigningAttributesResult& PutEmailIdentityDkimSigningAttributesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DkimStatus"))
  {
    m_dkimStatus = DkimStatusMapper::GetDkimStatusForName(jsonValue.GetString("DkimStatus"));

  }

  if(jsonValue.ValueExists("DkimTokens"))
  {
    Aws::Utils::Array<JsonView> dkimTokensJsonList = jsonValue.GetArray("DkimTokens");
    for(unsigned dkimTokensIndex = 0; dkimTokensIndex < dkimTokensJsonList.GetLength(); ++dkimTokensIndex)
    {
      m_dkimTokens.push_back(dkimTokensJsonList[dkimTokensIndex].AsString());
    }
  }



  return *this;
}
