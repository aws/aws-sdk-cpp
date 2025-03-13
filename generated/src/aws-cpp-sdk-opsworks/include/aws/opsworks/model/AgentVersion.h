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
    AWS_OPSWORKS_API AgentVersion() = default;
    AWS_OPSWORKS_API AgentVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API AgentVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The agent version.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    AgentVersion& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration manager.</p>
     */
    inline const StackConfigurationManager& GetConfigurationManager() const { return m_configurationManager; }
    inline bool ConfigurationManagerHasBeenSet() const { return m_configurationManagerHasBeenSet; }
    template<typename ConfigurationManagerT = StackConfigurationManager>
    void SetConfigurationManager(ConfigurationManagerT&& value) { m_configurationManagerHasBeenSet = true; m_configurationManager = std::forward<ConfigurationManagerT>(value); }
    template<typename ConfigurationManagerT = StackConfigurationManager>
    AgentVersion& WithConfigurationManager(ConfigurationManagerT&& value) { SetConfigurationManager(std::forward<ConfigurationManagerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    StackConfigurationManager m_configurationManager;
    bool m_configurationManagerHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
