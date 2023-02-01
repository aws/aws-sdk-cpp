/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/AssociateUserAccessLoggingSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AssociateUserAccessLoggingSettingsResult::AssociateUserAccessLoggingSettingsResult()
{
}

AssociateUserAccessLoggingSettingsResult::AssociateUserAccessLoggingSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AssociateUserAccessLoggingSettingsResult& AssociateUserAccessLoggingSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("portalArn"))
  {
    m_portalArn = jsonValue.GetString("portalArn");

  }

  if(jsonValue.ValueExists("userAccessLoggingSettingsArn"))
  {
    m_userAccessLoggingSettingsArn = jsonValue.GetString("userAccessLoggingSettingsArn");

  }



  return *this;
}
