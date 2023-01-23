/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/ListTrustStoreCertificatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTrustStoreCertificatesResult::ListTrustStoreCertificatesResult()
{
}

ListTrustStoreCertificatesResult::ListTrustStoreCertificatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTrustStoreCertificatesResult& ListTrustStoreCertificatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("certificateList"))
  {
    Aws::Utils::Array<JsonView> certificateListJsonList = jsonValue.GetArray("certificateList");
    for(unsigned certificateListIndex = 0; certificateListIndex < certificateListJsonList.GetLength(); ++certificateListIndex)
    {
      m_certificateList.push_back(certificateListJsonList[certificateListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("trustStoreArn"))
  {
    m_trustStoreArn = jsonValue.GetString("trustStoreArn");

  }



  return *this;
}
