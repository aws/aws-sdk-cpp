/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/S3DestinationSettings.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings associated with the destination. Will vary based on the type of
   * destination<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DestinationSettings">AWS
   * API Reference</a></p>
   */
  class DestinationSettings
  {
  public:
    AWS_MEDIACONVERT_API DestinationSettings();
    AWS_MEDIACONVERT_API DestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API DestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Settings associated with S3 destination
     */
    inline const S3DestinationSettings& GetS3Settings() const{ return m_s3Settings; }

    /**
     * Settings associated with S3 destination
     */
    inline bool S3SettingsHasBeenSet() const { return m_s3SettingsHasBeenSet; }

    /**
     * Settings associated with S3 destination
     */
    inline void SetS3Settings(const S3DestinationSettings& value) { m_s3SettingsHasBeenSet = true; m_s3Settings = value; }

    /**
     * Settings associated with S3 destination
     */
    inline void SetS3Settings(S3DestinationSettings&& value) { m_s3SettingsHasBeenSet = true; m_s3Settings = std::move(value); }

    /**
     * Settings associated with S3 destination
     */
    inline DestinationSettings& WithS3Settings(const S3DestinationSettings& value) { SetS3Settings(value); return *this;}

    /**
     * Settings associated with S3 destination
     */
    inline DestinationSettings& WithS3Settings(S3DestinationSettings&& value) { SetS3Settings(std::move(value)); return *this;}

  private:

    S3DestinationSettings m_s3Settings;
    bool m_s3SettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
