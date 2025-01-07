/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateQuickSightQSearchConfigurationResult.h>
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

UpdateQuickSightQSearchConfigurationResult::UpdateQuickSightQSearchConfigurationResult() : 
    m_qSearchStatus(QSearchStatus::NOT_SET),
    m_status(0)
{
}

UpdateQuickSightQSearchConfigurationResult::UpdateQuickSightQSearchConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateQuickSightQSearchConfigurationResult()
{
  *this = result;
}

UpdateQuickSightQSearchConfigurationResult& UpdateQuickSightQSearchConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("QSearchStatus"))
  {
    m_qSearchStatus = QSearchStatusMapper::GetQSearchStatusForName(jsonValue.GetString("QSearchStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
