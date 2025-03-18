/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/ArchiveS3Settings.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Archive Cdn Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ArchiveCdnSettings">AWS
   * API Reference</a></p>
   */
  class ArchiveCdnSettings
  {
  public:
    AWS_MEDIALIVE_API ArchiveCdnSettings() = default;
    AWS_MEDIALIVE_API ArchiveCdnSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ArchiveCdnSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ArchiveS3Settings& GetArchiveS3Settings() const { return m_archiveS3Settings; }
    inline bool ArchiveS3SettingsHasBeenSet() const { return m_archiveS3SettingsHasBeenSet; }
    template<typename ArchiveS3SettingsT = ArchiveS3Settings>
    void SetArchiveS3Settings(ArchiveS3SettingsT&& value) { m_archiveS3SettingsHasBeenSet = true; m_archiveS3Settings = std::forward<ArchiveS3SettingsT>(value); }
    template<typename ArchiveS3SettingsT = ArchiveS3Settings>
    ArchiveCdnSettings& WithArchiveS3Settings(ArchiveS3SettingsT&& value) { SetArchiveS3Settings(std::forward<ArchiveS3SettingsT>(value)); return *this;}
    ///@}
  private:

    ArchiveS3Settings m_archiveS3Settings;
    bool m_archiveS3SettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
