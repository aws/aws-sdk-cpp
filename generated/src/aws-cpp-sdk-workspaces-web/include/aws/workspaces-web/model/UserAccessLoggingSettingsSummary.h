/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>The summary of user access logging settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UserAccessLoggingSettingsSummary">AWS
   * API Reference</a></p>
   */
  class UserAccessLoggingSettingsSummary
  {
  public:
    AWS_WORKSPACESWEB_API UserAccessLoggingSettingsSummary();
    AWS_WORKSPACESWEB_API UserAccessLoggingSettingsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API UserAccessLoggingSettingsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Kinesis stream.</p>
     */
    inline const Aws::String& GetKinesisStreamArn() const{ return m_kinesisStreamArn; }
    inline bool KinesisStreamArnHasBeenSet() const { return m_kinesisStreamArnHasBeenSet; }
    inline void SetKinesisStreamArn(const Aws::String& value) { m_kinesisStreamArnHasBeenSet = true; m_kinesisStreamArn = value; }
    inline void SetKinesisStreamArn(Aws::String&& value) { m_kinesisStreamArnHasBeenSet = true; m_kinesisStreamArn = std::move(value); }
    inline void SetKinesisStreamArn(const char* value) { m_kinesisStreamArnHasBeenSet = true; m_kinesisStreamArn.assign(value); }
    inline UserAccessLoggingSettingsSummary& WithKinesisStreamArn(const Aws::String& value) { SetKinesisStreamArn(value); return *this;}
    inline UserAccessLoggingSettingsSummary& WithKinesisStreamArn(Aws::String&& value) { SetKinesisStreamArn(std::move(value)); return *this;}
    inline UserAccessLoggingSettingsSummary& WithKinesisStreamArn(const char* value) { SetKinesisStreamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline const Aws::String& GetUserAccessLoggingSettingsArn() const{ return m_userAccessLoggingSettingsArn; }
    inline bool UserAccessLoggingSettingsArnHasBeenSet() const { return m_userAccessLoggingSettingsArnHasBeenSet; }
    inline void SetUserAccessLoggingSettingsArn(const Aws::String& value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn = value; }
    inline void SetUserAccessLoggingSettingsArn(Aws::String&& value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn = std::move(value); }
    inline void SetUserAccessLoggingSettingsArn(const char* value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn.assign(value); }
    inline UserAccessLoggingSettingsSummary& WithUserAccessLoggingSettingsArn(const Aws::String& value) { SetUserAccessLoggingSettingsArn(value); return *this;}
    inline UserAccessLoggingSettingsSummary& WithUserAccessLoggingSettingsArn(Aws::String&& value) { SetUserAccessLoggingSettingsArn(std::move(value)); return *this;}
    inline UserAccessLoggingSettingsSummary& WithUserAccessLoggingSettingsArn(const char* value) { SetUserAccessLoggingSettingsArn(value); return *this;}
    ///@}
  private:

    Aws::String m_kinesisStreamArn;
    bool m_kinesisStreamArnHasBeenSet = false;

    Aws::String m_userAccessLoggingSettingsArn;
    bool m_userAccessLoggingSettingsArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
