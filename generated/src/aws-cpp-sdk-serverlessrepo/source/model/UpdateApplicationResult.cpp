/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/UpdateApplicationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateApplicationResult::UpdateApplicationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateApplicationResult& UpdateApplicationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");
    m_applicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("author"))
  {
    m_author = jsonValue.GetString("author");
    m_authorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("homePageUrl"))
  {
    m_homePageUrl = jsonValue.GetString("homePageUrl");
    m_homePageUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isVerifiedAuthor"))
  {
    m_isVerifiedAuthor = jsonValue.GetBool("isVerifiedAuthor");
    m_isVerifiedAuthorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("labels"))
  {
    Aws::Utils::Array<JsonView> labelsJsonList = jsonValue.GetArray("labels");
    for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
    {
      m_labels.push_back(labelsJsonList[labelsIndex].AsString());
    }
    m_labelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("licenseUrl"))
  {
    m_licenseUrl = jsonValue.GetString("licenseUrl");
    m_licenseUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("readmeUrl"))
  {
    m_readmeUrl = jsonValue.GetString("readmeUrl");
    m_readmeUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("spdxLicenseId"))
  {
    m_spdxLicenseId = jsonValue.GetString("spdxLicenseId");
    m_spdxLicenseIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("verifiedAuthorUrl"))
  {
    m_verifiedAuthorUrl = jsonValue.GetString("verifiedAuthorUrl");
    m_verifiedAuthorUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetObject("version");
    m_versionHasBeenSet = true;
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
