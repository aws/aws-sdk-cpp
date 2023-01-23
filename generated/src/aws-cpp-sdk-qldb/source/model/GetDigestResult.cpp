/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/GetDigestResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDigestResult::GetDigestResult()
{
}

GetDigestResult::GetDigestResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDigestResult& GetDigestResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Digest"))
  {
    m_digest = HashingUtils::Base64Decode(jsonValue.GetString("Digest"));
  }

  if(jsonValue.ValueExists("DigestTipAddress"))
  {
    m_digestTipAddress = jsonValue.GetObject("DigestTipAddress");

  }



  return *this;
}
