/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore/model/GetCorsPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCorsPolicyResult::GetCorsPolicyResult()
{
}

GetCorsPolicyResult::GetCorsPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCorsPolicyResult& GetCorsPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CorsPolicy"))
  {
    Aws::Utils::Array<JsonView> corsPolicyJsonList = jsonValue.GetArray("CorsPolicy");
    for(unsigned corsPolicyIndex = 0; corsPolicyIndex < corsPolicyJsonList.GetLength(); ++corsPolicyIndex)
    {
      m_corsPolicy.push_back(corsPolicyJsonList[corsPolicyIndex].AsObject());
    }
  }



  return *this;
}
