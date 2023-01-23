/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeHumanTaskUiResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeHumanTaskUiResult::DescribeHumanTaskUiResult() : 
    m_humanTaskUiStatus(HumanTaskUiStatus::NOT_SET)
{
}

DescribeHumanTaskUiResult::DescribeHumanTaskUiResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_humanTaskUiStatus(HumanTaskUiStatus::NOT_SET)
{
  *this = result;
}

DescribeHumanTaskUiResult& DescribeHumanTaskUiResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HumanTaskUiArn"))
  {
    m_humanTaskUiArn = jsonValue.GetString("HumanTaskUiArn");

  }

  if(jsonValue.ValueExists("HumanTaskUiName"))
  {
    m_humanTaskUiName = jsonValue.GetString("HumanTaskUiName");

  }

  if(jsonValue.ValueExists("HumanTaskUiStatus"))
  {
    m_humanTaskUiStatus = HumanTaskUiStatusMapper::GetHumanTaskUiStatusForName(jsonValue.GetString("HumanTaskUiStatus"));

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("UiTemplate"))
  {
    m_uiTemplate = jsonValue.GetObject("UiTemplate");

  }



  return *this;
}
