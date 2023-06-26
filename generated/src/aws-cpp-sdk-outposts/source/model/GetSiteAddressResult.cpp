/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/GetSiteAddressResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSiteAddressResult::GetSiteAddressResult() : 
    m_addressType(AddressType::NOT_SET)
{
}

GetSiteAddressResult::GetSiteAddressResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_addressType(AddressType::NOT_SET)
{
  *this = result;
}

GetSiteAddressResult& GetSiteAddressResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SiteId"))
  {
    m_siteId = jsonValue.GetString("SiteId");

  }

  if(jsonValue.ValueExists("AddressType"))
  {
    m_addressType = AddressTypeMapper::GetAddressTypeForName(jsonValue.GetString("AddressType"));

  }

  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetObject("Address");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
