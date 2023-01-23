/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetEmailTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEmailTemplateResult::GetEmailTemplateResult()
{
}

GetEmailTemplateResult::GetEmailTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEmailTemplateResult& GetEmailTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TemplateName"))
  {
    m_templateName = jsonValue.GetString("TemplateName");

  }

  if(jsonValue.ValueExists("TemplateContent"))
  {
    m_templateContent = jsonValue.GetObject("TemplateContent");

  }



  return *this;
}
