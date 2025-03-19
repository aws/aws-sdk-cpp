/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ApplicationSettingsResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

ApplicationSettingsResponse::ApplicationSettingsResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

ApplicationSettingsResponse& ApplicationSettingsResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ApplicationSettingsStatusEnumMapper::GetApplicationSettingsStatusEnumForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SettingsGroup"))
  {
    m_settingsGroup = jsonValue.GetString("SettingsGroup");
    m_settingsGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");
    m_s3BucketNameHasBeenSet = true;
  }
  return *this;
}

JsonValue ApplicationSettingsResponse::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ApplicationSettingsStatusEnumMapper::GetNameForApplicationSettingsStatusEnum(m_status));
  }

  if(m_settingsGroupHasBeenSet)
  {
   payload.WithString("SettingsGroup", m_settingsGroup);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
