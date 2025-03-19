/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RestoreAnalysisResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RestoreAnalysisResult::RestoreAnalysisResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RestoreAnalysisResult& RestoreAnalysisResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnalysisId"))
  {
    m_analysisId = jsonValue.GetString("AnalysisId");
    m_analysisIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RestorationFailedFolderArns"))
  {
    Aws::Utils::Array<JsonView> restorationFailedFolderArnsJsonList = jsonValue.GetArray("RestorationFailedFolderArns");
    for(unsigned restorationFailedFolderArnsIndex = 0; restorationFailedFolderArnsIndex < restorationFailedFolderArnsJsonList.GetLength(); ++restorationFailedFolderArnsIndex)
    {
      m_restorationFailedFolderArns.push_back(restorationFailedFolderArnsJsonList[restorationFailedFolderArnsIndex].AsString());
    }
    m_restorationFailedFolderArnsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  m_status = static_cast<int>(result.GetResponseCode());
  m_statusHasBeenSet = true;
  return *this;
}
