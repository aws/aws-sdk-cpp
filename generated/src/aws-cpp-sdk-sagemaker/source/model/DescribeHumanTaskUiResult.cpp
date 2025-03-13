/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeHumanTaskUiResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeHumanTaskUiResult::DescribeHumanTaskUiResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeHumanTaskUiResult& DescribeHumanTaskUiResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HumanTaskUiArn"))
  {
    m_humanTaskUiArn = jsonValue.GetString("HumanTaskUiArn");
    m_humanTaskUiArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HumanTaskUiName"))
  {
    m_humanTaskUiName = jsonValue.GetString("HumanTaskUiName");
    m_humanTaskUiNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HumanTaskUiStatus"))
  {
    m_humanTaskUiStatus = HumanTaskUiStatusMapper::GetHumanTaskUiStatusForName(jsonValue.GetString("HumanTaskUiStatus"));
    m_humanTaskUiStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UiTemplate"))
  {
    m_uiTemplate = jsonValue.GetObject("UiTemplate");
    m_uiTemplateHasBeenSet = true;
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
