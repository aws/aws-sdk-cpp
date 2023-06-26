/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/UserAccessLoggingSettingsSummary.h>
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

UserAccessLoggingSettingsSummary::UserAccessLoggingSettingsSummary() : 
    m_kinesisStreamArnHasBeenSet(false),
    m_userAccessLoggingSettingsArnHasBeenSet(false)
{
}

UserAccessLoggingSettingsSummary::UserAccessLoggingSettingsSummary(JsonView jsonValue) : 
    m_kinesisStreamArnHasBeenSet(false),
    m_userAccessLoggingSettingsArnHasBeenSet(false)
{
  *this = jsonValue;
}

UserAccessLoggingSettingsSummary& UserAccessLoggingSettingsSummary::operator =(JsonView jsonValue)
{
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

JsonValue UserAccessLoggingSettingsSummary::Jsonize() const
{
  JsonValue payload;

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
