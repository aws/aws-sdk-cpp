/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>OpsWorks Stacks supports five lifecycle events: <b>setup</b>,
   * <b>configuration</b>, <b>deploy</b>, <b>undeploy</b>, and <b>shutdown</b>. For
   * each layer, OpsWorks Stacks runs a set of standard recipes for each event. In
   * addition, you can provide custom recipes for any or all layers and events.
   * OpsWorks Stacks runs custom event recipes after the standard recipes.
   * <code>LayerCustomRecipes</code> specifies the custom recipes for a particular
   * layer to be run in response to each of the five events. </p> <p>To specify a
   * recipe, use the cookbook's directory name in the repository followed by two
   * colons and the recipe name, which is the recipe's file name without the .rb
   * extension. For example: phpapp2::dbsetup specifies the dbsetup.rb recipe in the
   * repository's phpapp2 folder.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/Recipes">AWS
   * API Reference</a></p>
   */
  class Recipes
  {
  public:
    AWS_OPSWORKS_API Recipes() = default;
    AWS_OPSWORKS_API Recipes(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Recipes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of custom recipe names to be run following a <code>setup</code>
     * event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSetup() const { return m_setup; }
    inline bool SetupHasBeenSet() const { return m_setupHasBeenSet; }
    template<typename SetupT = Aws::Vector<Aws::String>>
    void SetSetup(SetupT&& value) { m_setupHasBeenSet = true; m_setup = std::forward<SetupT>(value); }
    template<typename SetupT = Aws::Vector<Aws::String>>
    Recipes& WithSetup(SetupT&& value) { SetSetup(std::forward<SetupT>(value)); return *this;}
    template<typename SetupT = Aws::String>
    Recipes& AddSetup(SetupT&& value) { m_setupHasBeenSet = true; m_setup.emplace_back(std::forward<SetupT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of custom recipe names to be run following a <code>configure</code>
     * event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigure() const { return m_configure; }
    inline bool ConfigureHasBeenSet() const { return m_configureHasBeenSet; }
    template<typename ConfigureT = Aws::Vector<Aws::String>>
    void SetConfigure(ConfigureT&& value) { m_configureHasBeenSet = true; m_configure = std::forward<ConfigureT>(value); }
    template<typename ConfigureT = Aws::Vector<Aws::String>>
    Recipes& WithConfigure(ConfigureT&& value) { SetConfigure(std::forward<ConfigureT>(value)); return *this;}
    template<typename ConfigureT = Aws::String>
    Recipes& AddConfigure(ConfigureT&& value) { m_configureHasBeenSet = true; m_configure.emplace_back(std::forward<ConfigureT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of custom recipe names to be run following a <code>deploy</code>
     * event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeploy() const { return m_deploy; }
    inline bool DeployHasBeenSet() const { return m_deployHasBeenSet; }
    template<typename DeployT = Aws::Vector<Aws::String>>
    void SetDeploy(DeployT&& value) { m_deployHasBeenSet = true; m_deploy = std::forward<DeployT>(value); }
    template<typename DeployT = Aws::Vector<Aws::String>>
    Recipes& WithDeploy(DeployT&& value) { SetDeploy(std::forward<DeployT>(value)); return *this;}
    template<typename DeployT = Aws::String>
    Recipes& AddDeploy(DeployT&& value) { m_deployHasBeenSet = true; m_deploy.emplace_back(std::forward<DeployT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of custom recipe names to be run following a <code>undeploy</code>
     * event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUndeploy() const { return m_undeploy; }
    inline bool UndeployHasBeenSet() const { return m_undeployHasBeenSet; }
    template<typename UndeployT = Aws::Vector<Aws::String>>
    void SetUndeploy(UndeployT&& value) { m_undeployHasBeenSet = true; m_undeploy = std::forward<UndeployT>(value); }
    template<typename UndeployT = Aws::Vector<Aws::String>>
    Recipes& WithUndeploy(UndeployT&& value) { SetUndeploy(std::forward<UndeployT>(value)); return *this;}
    template<typename UndeployT = Aws::String>
    Recipes& AddUndeploy(UndeployT&& value) { m_undeployHasBeenSet = true; m_undeploy.emplace_back(std::forward<UndeployT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of custom recipe names to be run following a <code>shutdown</code>
     * event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetShutdown() const { return m_shutdown; }
    inline bool ShutdownHasBeenSet() const { return m_shutdownHasBeenSet; }
    template<typename ShutdownT = Aws::Vector<Aws::String>>
    void SetShutdown(ShutdownT&& value) { m_shutdownHasBeenSet = true; m_shutdown = std::forward<ShutdownT>(value); }
    template<typename ShutdownT = Aws::Vector<Aws::String>>
    Recipes& WithShutdown(ShutdownT&& value) { SetShutdown(std::forward<ShutdownT>(value)); return *this;}
    template<typename ShutdownT = Aws::String>
    Recipes& AddShutdown(ShutdownT&& value) { m_shutdownHasBeenSet = true; m_shutdown.emplace_back(std::forward<ShutdownT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_setup;
    bool m_setupHasBeenSet = false;

    Aws::Vector<Aws::String> m_configure;
    bool m_configureHasBeenSet = false;

    Aws::Vector<Aws::String> m_deploy;
    bool m_deployHasBeenSet = false;

    Aws::Vector<Aws::String> m_undeploy;
    bool m_undeployHasBeenSet = false;

    Aws::Vector<Aws::String> m_shutdown;
    bool m_shutdownHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
