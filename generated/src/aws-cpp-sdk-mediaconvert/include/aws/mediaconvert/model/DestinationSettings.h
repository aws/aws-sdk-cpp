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
    AWS_MEDIACONVERT_API DestinationSettings() = default;
    AWS_MEDIACONVERT_API DestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API DestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Settings associated with S3 destination
     */
    inline const S3DestinationSettings& GetS3Settings() const { return m_s3Settings; }
    inline bool S3SettingsHasBeenSet() const { return m_s3SettingsHasBeenSet; }
    template<typename S3SettingsT = S3DestinationSettings>
    void SetS3Settings(S3SettingsT&& value) { m_s3SettingsHasBeenSet = true; m_s3Settings = std::forward<S3SettingsT>(value); }
    template<typename S3SettingsT = S3DestinationSettings>
    DestinationSettings& WithS3Settings(S3SettingsT&& value) { SetS3Settings(std::forward<S3SettingsT>(value)); return *this;}
    ///@}
  private:

    S3DestinationSettings m_s3Settings;
    bool m_s3SettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
