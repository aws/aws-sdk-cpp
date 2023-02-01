/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/SessionBackupMode.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>Configures how streaming sessions are backed up when launched from this
   * launch profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StreamConfigurationSessionBackup">AWS
   * API Reference</a></p>
   */
  class StreamConfigurationSessionBackup
  {
  public:
    AWS_NIMBLESTUDIO_API StreamConfigurationSessionBackup();
    AWS_NIMBLESTUDIO_API StreamConfigurationSessionBackup(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API StreamConfigurationSessionBackup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of backups that each streaming session created from this
     * launch profile can have.</p>
     */
    inline int GetMaxBackupsToRetain() const{ return m_maxBackupsToRetain; }

    /**
     * <p>The maximum number of backups that each streaming session created from this
     * launch profile can have.</p>
     */
    inline bool MaxBackupsToRetainHasBeenSet() const { return m_maxBackupsToRetainHasBeenSet; }

    /**
     * <p>The maximum number of backups that each streaming session created from this
     * launch profile can have.</p>
     */
    inline void SetMaxBackupsToRetain(int value) { m_maxBackupsToRetainHasBeenSet = true; m_maxBackupsToRetain = value; }

    /**
     * <p>The maximum number of backups that each streaming session created from this
     * launch profile can have.</p>
     */
    inline StreamConfigurationSessionBackup& WithMaxBackupsToRetain(int value) { SetMaxBackupsToRetain(value); return *this;}


    /**
     * <p>Specifies how artists sessions are backed up.</p> <p>Configures backups for
     * streaming sessions launched with this launch profile. The default value is
     * <code>DEACTIVATED</code>, which means that backups are deactivated. To allow
     * backups, set this value to <code>AUTOMATIC</code>.</p>
     */
    inline const SessionBackupMode& GetMode() const{ return m_mode; }

    /**
     * <p>Specifies how artists sessions are backed up.</p> <p>Configures backups for
     * streaming sessions launched with this launch profile. The default value is
     * <code>DEACTIVATED</code>, which means that backups are deactivated. To allow
     * backups, set this value to <code>AUTOMATIC</code>.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>Specifies how artists sessions are backed up.</p> <p>Configures backups for
     * streaming sessions launched with this launch profile. The default value is
     * <code>DEACTIVATED</code>, which means that backups are deactivated. To allow
     * backups, set this value to <code>AUTOMATIC</code>.</p>
     */
    inline void SetMode(const SessionBackupMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>Specifies how artists sessions are backed up.</p> <p>Configures backups for
     * streaming sessions launched with this launch profile. The default value is
     * <code>DEACTIVATED</code>, which means that backups are deactivated. To allow
     * backups, set this value to <code>AUTOMATIC</code>.</p>
     */
    inline void SetMode(SessionBackupMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>Specifies how artists sessions are backed up.</p> <p>Configures backups for
     * streaming sessions launched with this launch profile. The default value is
     * <code>DEACTIVATED</code>, which means that backups are deactivated. To allow
     * backups, set this value to <code>AUTOMATIC</code>.</p>
     */
    inline StreamConfigurationSessionBackup& WithMode(const SessionBackupMode& value) { SetMode(value); return *this;}

    /**
     * <p>Specifies how artists sessions are backed up.</p> <p>Configures backups for
     * streaming sessions launched with this launch profile. The default value is
     * <code>DEACTIVATED</code>, which means that backups are deactivated. To allow
     * backups, set this value to <code>AUTOMATIC</code>.</p>
     */
    inline StreamConfigurationSessionBackup& WithMode(SessionBackupMode&& value) { SetMode(std::move(value)); return *this;}

  private:

    int m_maxBackupsToRetain;
    bool m_maxBackupsToRetainHasBeenSet = false;

    SessionBackupMode m_mode;
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
