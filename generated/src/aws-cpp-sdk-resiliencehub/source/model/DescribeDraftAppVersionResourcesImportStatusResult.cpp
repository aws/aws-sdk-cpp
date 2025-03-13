/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/DescribeDraftAppVersionResourcesImportStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDraftAppVersionResourcesImportStatusResult::DescribeDraftAppVersionResourcesImportStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDraftAppVersionResourcesImportStatusResult& DescribeDraftAppVersionResourcesImportStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("appArn"))
  {
    m_appArn = jsonValue.GetString("appArn");
    m_appArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("appVersion"))
  {
    m_appVersion = jsonValue.GetString("appVersion");
    m_appVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorDetails"))
  {
    Aws::Utils::Array<JsonView> errorDetailsJsonList = jsonValue.GetArray("errorDetails");
    for(unsigned errorDetailsIndex = 0; errorDetailsIndex < errorDetailsJsonList.GetLength(); ++errorDetailsIndex)
    {
      m_errorDetails.push_back(errorDetailsJsonList[errorDetailsIndex].AsObject());
    }
    m_errorDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ResourceImportStatusTypeMapper::GetResourceImportStatusTypeForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusChangeTime"))
  {
    m_statusChangeTime = jsonValue.GetDouble("statusChangeTime");
    m_statusChangeTimeHasBeenSet = true;
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
