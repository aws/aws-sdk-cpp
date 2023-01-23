/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/GetSigningPlatformResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSigningPlatformResult::GetSigningPlatformResult() : 
    m_category(Category::NOT_SET),
    m_maxSizeInMB(0),
    m_revocationSupported(false)
{
}

GetSigningPlatformResult::GetSigningPlatformResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_category(Category::NOT_SET),
    m_maxSizeInMB(0),
    m_revocationSupported(false)
{
  *this = result;
}

GetSigningPlatformResult& GetSigningPlatformResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("platformId"))
  {
    m_platformId = jsonValue.GetString("platformId");

  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

  }

  if(jsonValue.ValueExists("partner"))
  {
    m_partner = jsonValue.GetString("partner");

  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetString("target");

  }

  if(jsonValue.ValueExists("category"))
  {
    m_category = CategoryMapper::GetCategoryForName(jsonValue.GetString("category"));

  }

  if(jsonValue.ValueExists("signingConfiguration"))
  {
    m_signingConfiguration = jsonValue.GetObject("signingConfiguration");

  }

  if(jsonValue.ValueExists("signingImageFormat"))
  {
    m_signingImageFormat = jsonValue.GetObject("signingImageFormat");

  }

  if(jsonValue.ValueExists("maxSizeInMB"))
  {
    m_maxSizeInMB = jsonValue.GetInteger("maxSizeInMB");

  }

  if(jsonValue.ValueExists("revocationSupported"))
  {
    m_revocationSupported = jsonValue.GetBool("revocationSupported");

  }



  return *this;
}
