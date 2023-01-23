/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/UserAccessLoggingSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

UserAccessLoggingSettings::UserAccessLoggingSettings() : 
    m_associatedPortalArnsHasBeenSet(false),
    m_kinesisStreamArnHasBeenSet(false),
    m_userAccessLoggingSettingsArnHasBeenSet(false)
{
}

UserAccessLoggingSettings::UserAccessLoggingSettings(JsonView jsonValue) : 
    m_associatedPortalArnsHasBeenSet(false),
    m_kinesisStreamArnHasBeenSet(false),
    m_userAccessLoggingSettingsArnHasBeenSet(false)
{
  *this = jsonValue;
}

UserAccessLoggingSettings& UserAccessLoggingSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("associatedPortalArns"))
  {
    Aws::Utils::Array<JsonView> associatedPortalArnsJsonList = jsonValue.GetArray("associatedPortalArns");
    for(unsigned associatedPortalArnsIndex = 0; associatedPortalArnsIndex < associatedPortalArnsJsonList.GetLength(); ++associatedPortalArnsIndex)
    {
      m_associatedPortalArns.push_back(associatedPortalArnsJsonList[associatedPortalArnsIndex].AsString());
    }
    m_associatedPortalArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kinesisStreamArn"))
  {
    m_kinesisStreamArn = jsonValue.GetString("kinesisStreamArn");

    m_kinesisStreamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userAccessLoggingSettingsArn"))
  {
    m_userAccessLoggingSettingsArn = jsonValue.GetString("userAccessLoggingSettingsArn");

    m_userAccessLoggingSettingsArnHasBeenSet = true;
  }

  return *this;
}

JsonValue UserAccessLoggingSettings::Jsonize() const
{
  JsonValue payload;

  if(m_associatedPortalArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associatedPortalArnsJsonList(m_associatedPortalArns.size());
   for(unsigned associatedPortalArnsIndex = 0; associatedPortalArnsIndex < associatedPortalArnsJsonList.GetLength(); ++associatedPortalArnsIndex)
   {
     associatedPortalArnsJsonList[associatedPortalArnsIndex].AsString(m_associatedPortalArns[associatedPortalArnsIndex]);
   }
   payload.WithArray("associatedPortalArns", std::move(associatedPortalArnsJsonList));

  }

  if(m_kinesisStreamArnHasBeenSet)
  {
   payload.WithString("kinesisStreamArn", m_kinesisStreamArn);

  }

  if(m_userAccessLoggingSettingsArnHasBeenSet)
  {
   payload.WithString("userAccessLoggingSettingsArn", m_userAccessLoggingSettingsArn);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
