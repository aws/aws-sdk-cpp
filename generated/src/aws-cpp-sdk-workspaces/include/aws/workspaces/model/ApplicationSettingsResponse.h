/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/ApplicationSettingsStatusEnum.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the persistent application settings for WorkSpaces Pools
   * users.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ApplicationSettingsResponse">AWS
   * API Reference</a></p>
   */
  class ApplicationSettingsResponse
  {
  public:
    AWS_WORKSPACES_API ApplicationSettingsResponse();
    AWS_WORKSPACES_API ApplicationSettingsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API ApplicationSettingsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether persistent application settings are enabled for users
     * during their pool sessions.</p>
     */
    inline const ApplicationSettingsStatusEnum& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ApplicationSettingsStatusEnum& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ApplicationSettingsStatusEnum&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ApplicationSettingsResponse& WithStatus(const ApplicationSettingsStatusEnum& value) { SetStatus(value); return *this;}
    inline ApplicationSettingsResponse& WithStatus(ApplicationSettingsStatusEnum&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path prefix for the S3 bucket where users’ persistent application
     * settings are stored.</p>
     */
    inline const Aws::String& GetSettingsGroup() const{ return m_settingsGroup; }
    inline bool SettingsGroupHasBeenSet() const { return m_settingsGroupHasBeenSet; }
    inline void SetSettingsGroup(const Aws::String& value) { m_settingsGroupHasBeenSet = true; m_settingsGroup = value; }
    inline void SetSettingsGroup(Aws::String&& value) { m_settingsGroupHasBeenSet = true; m_settingsGroup = std::move(value); }
    inline void SetSettingsGroup(const char* value) { m_settingsGroupHasBeenSet = true; m_settingsGroup.assign(value); }
    inline ApplicationSettingsResponse& WithSettingsGroup(const Aws::String& value) { SetSettingsGroup(value); return *this;}
    inline ApplicationSettingsResponse& WithSettingsGroup(Aws::String&& value) { SetSettingsGroup(std::move(value)); return *this;}
    inline ApplicationSettingsResponse& WithSettingsGroup(const char* value) { SetSettingsGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket where users’ persistent application settings are stored. When
     * persistent application settings are enabled for the first time for an account in
     * an Amazon Web Services Region, an S3 bucket is created. The bucket is unique to
     * the Amazon Web Services account and the Region.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }
    inline ApplicationSettingsResponse& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}
    inline ApplicationSettingsResponse& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}
    inline ApplicationSettingsResponse& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}
    ///@}
  private:

    ApplicationSettingsStatusEnum m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_settingsGroup;
    bool m_settingsGroupHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
