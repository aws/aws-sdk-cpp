/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/CountClosedWorkflowExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CountClosedWorkflowExecutionsResult::CountClosedWorkflowExecutionsResult() : 
    m_count(0),
    m_truncated(false)
{
}

CountClosedWorkflowExecutionsResult::CountClosedWorkflowExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_count(0),
    m_truncated(false)
{
  *this = result;
}

CountClosedWorkflowExecutionsResult& CountClosedWorkflowExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");

  }

  if(jsonValue.ValueExists("truncated"))
  {
    m_truncated = jsonValue.GetBool("truncated");

  }



  return *this;
}
