/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/GetAssociatedResourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppRegistry::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAssociatedResourceResult::GetAssociatedResourceResult()
{
}

GetAssociatedResourceResult::GetAssociatedResourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAssociatedResourceResult& GetAssociatedResourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetObject("resource");

  }

  if(jsonValue.ValueExists("options"))
  {
    Aws::Utils::Array<JsonView> optionsJsonList = jsonValue.GetArray("options");
    for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
    {
      m_options.push_back(AssociationOptionMapper::GetAssociationOptionForName(optionsJsonList[optionsIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("applicationTagResult"))
  {
    m_applicationTagResult = jsonValue.GetObject("applicationTagResult");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
