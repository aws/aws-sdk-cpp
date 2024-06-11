/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/LaunchProfilePlatform.h>
#include <aws/nimble/model/StudioComponentInitializationScriptRunContext.h>
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
   * <p>Initialization scripts for studio components.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StudioComponentInitializationScript">AWS
   * API Reference</a></p>
   */
  class StudioComponentInitializationScript
  {
  public:
    AWS_NIMBLESTUDIO_API StudioComponentInitializationScript();
    AWS_NIMBLESTUDIO_API StudioComponentInitializationScript(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API StudioComponentInitializationScript& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline const Aws::String& GetLaunchProfileProtocolVersion() const{ return m_launchProfileProtocolVersion; }
    inline bool LaunchProfileProtocolVersionHasBeenSet() const { return m_launchProfileProtocolVersionHasBeenSet; }
    inline void SetLaunchProfileProtocolVersion(const Aws::String& value) { m_launchProfileProtocolVersionHasBeenSet = true; m_launchProfileProtocolVersion = value; }
    inline void SetLaunchProfileProtocolVersion(Aws::String&& value) { m_launchProfileProtocolVersionHasBeenSet = true; m_launchProfileProtocolVersion = std::move(value); }
    inline void SetLaunchProfileProtocolVersion(const char* value) { m_launchProfileProtocolVersionHasBeenSet = true; m_launchProfileProtocolVersion.assign(value); }
    inline StudioComponentInitializationScript& WithLaunchProfileProtocolVersion(const Aws::String& value) { SetLaunchProfileProtocolVersion(value); return *this;}
    inline StudioComponentInitializationScript& WithLaunchProfileProtocolVersion(Aws::String&& value) { SetLaunchProfileProtocolVersion(std::move(value)); return *this;}
    inline StudioComponentInitializationScript& WithLaunchProfileProtocolVersion(const char* value) { SetLaunchProfileProtocolVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform of the initialization script, either Windows or Linux.</p>
     */
    inline const LaunchProfilePlatform& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const LaunchProfilePlatform& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(LaunchProfilePlatform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline StudioComponentInitializationScript& WithPlatform(const LaunchProfilePlatform& value) { SetPlatform(value); return *this;}
    inline StudioComponentInitializationScript& WithPlatform(LaunchProfilePlatform&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method to use when running the initialization script.</p>
     */
    inline const StudioComponentInitializationScriptRunContext& GetRunContext() const{ return m_runContext; }
    inline bool RunContextHasBeenSet() const { return m_runContextHasBeenSet; }
    inline void SetRunContext(const StudioComponentInitializationScriptRunContext& value) { m_runContextHasBeenSet = true; m_runContext = value; }
    inline void SetRunContext(StudioComponentInitializationScriptRunContext&& value) { m_runContextHasBeenSet = true; m_runContext = std::move(value); }
    inline StudioComponentInitializationScript& WithRunContext(const StudioComponentInitializationScriptRunContext& value) { SetRunContext(value); return *this;}
    inline StudioComponentInitializationScript& WithRunContext(StudioComponentInitializationScriptRunContext&& value) { SetRunContext(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The initialization script.</p>
     */
    inline const Aws::String& GetScript() const{ return m_script; }
    inline bool ScriptHasBeenSet() const { return m_scriptHasBeenSet; }
    inline void SetScript(const Aws::String& value) { m_scriptHasBeenSet = true; m_script = value; }
    inline void SetScript(Aws::String&& value) { m_scriptHasBeenSet = true; m_script = std::move(value); }
    inline void SetScript(const char* value) { m_scriptHasBeenSet = true; m_script.assign(value); }
    inline StudioComponentInitializationScript& WithScript(const Aws::String& value) { SetScript(value); return *this;}
    inline StudioComponentInitializationScript& WithScript(Aws::String&& value) { SetScript(std::move(value)); return *this;}
    inline StudioComponentInitializationScript& WithScript(const char* value) { SetScript(value); return *this;}
    ///@}
  private:

    Aws::String m_launchProfileProtocolVersion;
    bool m_launchProfileProtocolVersionHasBeenSet = false;

    LaunchProfilePlatform m_platform;
    bool m_platformHasBeenSet = false;

    StudioComponentInitializationScriptRunContext m_runContext;
    bool m_runContextHasBeenSet = false;

    Aws::String m_script;
    bool m_scriptHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
