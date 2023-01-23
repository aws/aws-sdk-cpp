/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/StackConfigurationManager.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes an agent version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AgentVersion">AWS
   * API Reference</a></p>
   */
  class AgentVersion
  {
  public:
    AWS_OPSWORKS_API AgentVersion();
    AWS_OPSWORKS_API AgentVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API AgentVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The agent version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The agent version.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The agent version.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The agent version.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The agent version.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The agent version.</p>
     */
    inline AgentVersion& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The agent version.</p>
     */
    inline AgentVersion& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The agent version.</p>
     */
    inline AgentVersion& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The configuration manager.</p>
     */
    inline const StackConfigurationManager& GetConfigurationManager() const{ return m_configurationManager; }

    /**
     * <p>The configuration manager.</p>
     */
    inline bool ConfigurationManagerHasBeenSet() const { return m_configurationManagerHasBeenSet; }

    /**
     * <p>The configuration manager.</p>
     */
    inline void SetConfigurationManager(const StackConfigurationManager& value) { m_configurationManagerHasBeenSet = true; m_configurationManager = value; }

    /**
     * <p>The configuration manager.</p>
     */
    inline void SetConfigurationManager(StackConfigurationManager&& value) { m_configurationManagerHasBeenSet = true; m_configurationManager = std::move(value); }

    /**
     * <p>The configuration manager.</p>
     */
    inline AgentVersion& WithConfigurationManager(const StackConfigurationManager& value) { SetConfigurationManager(value); return *this;}

    /**
     * <p>The configuration manager.</p>
     */
    inline AgentVersion& WithConfigurationManager(StackConfigurationManager&& value) { SetConfigurationManager(std::move(value)); return *this;}

  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    StackConfigurationManager m_configurationManager;
    bool m_configurationManagerHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
