/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/ArchiveCdnSettings.h>
#include <aws/medialive/model/OutputLocationRef.h>
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
   * Archive Group Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ArchiveGroupSettings">AWS
   * API Reference</a></p>
   */
  class ArchiveGroupSettings
  {
  public:
    AWS_MEDIALIVE_API ArchiveGroupSettings();
    AWS_MEDIALIVE_API ArchiveGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ArchiveGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Parameters that control interactions with the CDN.
     */
    inline const ArchiveCdnSettings& GetArchiveCdnSettings() const{ return m_archiveCdnSettings; }
    inline bool ArchiveCdnSettingsHasBeenSet() const { return m_archiveCdnSettingsHasBeenSet; }
    inline void SetArchiveCdnSettings(const ArchiveCdnSettings& value) { m_archiveCdnSettingsHasBeenSet = true; m_archiveCdnSettings = value; }
    inline void SetArchiveCdnSettings(ArchiveCdnSettings&& value) { m_archiveCdnSettingsHasBeenSet = true; m_archiveCdnSettings = std::move(value); }
    inline ArchiveGroupSettings& WithArchiveCdnSettings(const ArchiveCdnSettings& value) { SetArchiveCdnSettings(value); return *this;}
    inline ArchiveGroupSettings& WithArchiveCdnSettings(ArchiveCdnSettings&& value) { SetArchiveCdnSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A directory and base filename where archive files should be written.
     */
    inline const OutputLocationRef& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const OutputLocationRef& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(OutputLocationRef&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline ArchiveGroupSettings& WithDestination(const OutputLocationRef& value) { SetDestination(value); return *this;}
    inline ArchiveGroupSettings& WithDestination(OutputLocationRef&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Number of seconds to write to archive file before closing and starting a new
     * one.
     */
    inline int GetRolloverInterval() const{ return m_rolloverInterval; }
    inline bool RolloverIntervalHasBeenSet() const { return m_rolloverIntervalHasBeenSet; }
    inline void SetRolloverInterval(int value) { m_rolloverIntervalHasBeenSet = true; m_rolloverInterval = value; }
    inline ArchiveGroupSettings& WithRolloverInterval(int value) { SetRolloverInterval(value); return *this;}
    ///@}
  private:

    ArchiveCdnSettings m_archiveCdnSettings;
    bool m_archiveCdnSettingsHasBeenSet = false;

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet = false;

    int m_rolloverInterval;
    bool m_rolloverIntervalHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
