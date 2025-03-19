/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/GetSigningPlatformResult.h>
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

GetSigningPlatformResult::GetSigningPlatformResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSigningPlatformResult& GetSigningPlatformResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("platformId"))
  {
    m_platformId = jsonValue.GetString("platformId");
    m_platformIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("partner"))
  {
    m_partner = jsonValue.GetString("partner");
    m_partnerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetString("target");
    m_targetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("category"))
  {
    m_category = CategoryMapper::GetCategoryForName(jsonValue.GetString("category"));
    m_categoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signingConfiguration"))
  {
    m_signingConfiguration = jsonValue.GetObject("signingConfiguration");
    m_signingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signingImageFormat"))
  {
    m_signingImageFormat = jsonValue.GetObject("signingImageFormat");
    m_signingImageFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxSizeInMB"))
  {
    m_maxSizeInMB = jsonValue.GetInteger("maxSizeInMB");
    m_maxSizeInMBHasBeenSet = true;
  }
  if(jsonValue.ValueExists("revocationSupported"))
  {
    m_revocationSupported = jsonValue.GetBool("revocationSupported");
    m_revocationSupportedHasBeenSet = true;
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
