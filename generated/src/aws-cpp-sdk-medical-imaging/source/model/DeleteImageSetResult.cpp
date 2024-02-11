/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/DeleteImageSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MedicalImaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteImageSetResult::DeleteImageSetResult() : 
    m_imageSetState(ImageSetState::NOT_SET),
    m_imageSetWorkflowStatus(ImageSetWorkflowStatus::NOT_SET)
{
}

DeleteImageSetResult::DeleteImageSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_imageSetState(ImageSetState::NOT_SET),
    m_imageSetWorkflowStatus(ImageSetWorkflowStatus::NOT_SET)
{
  *this = result;
}

DeleteImageSetResult& DeleteImageSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("datastoreId"))
  {
    m_datastoreId = jsonValue.GetString("datastoreId");

  }

  if(jsonValue.ValueExists("imageSetId"))
  {
    m_imageSetId = jsonValue.GetString("imageSetId");

  }

  if(jsonValue.ValueExists("imageSetState"))
  {
    m_imageSetState = ImageSetStateMapper::GetImageSetStateForName(jsonValue.GetString("imageSetState"));

  }

  if(jsonValue.ValueExists("imageSetWorkflowStatus"))
  {
    m_imageSetWorkflowStatus = ImageSetWorkflowStatusMapper::GetImageSetWorkflowStatusForName(jsonValue.GetString("imageSetWorkflowStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
