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
    AWS_OPSWORKS_API Recipes();
    AWS_OPSWORKS_API Recipes(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Recipes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of custom recipe names to be run following a <code>setup</code>
     * event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSetup() const{ return m_setup; }
    inline bool SetupHasBeenSet() const { return m_setupHasBeenSet; }
    inline void SetSetup(const Aws::Vector<Aws::String>& value) { m_setupHasBeenSet = true; m_setup = value; }
    inline void SetSetup(Aws::Vector<Aws::String>&& value) { m_setupHasBeenSet = true; m_setup = std::move(value); }
    inline Recipes& WithSetup(const Aws::Vector<Aws::String>& value) { SetSetup(value); return *this;}
    inline Recipes& WithSetup(Aws::Vector<Aws::String>&& value) { SetSetup(std::move(value)); return *this;}
    inline Recipes& AddSetup(const Aws::String& value) { m_setupHasBeenSet = true; m_setup.push_back(value); return *this; }
    inline Recipes& AddSetup(Aws::String&& value) { m_setupHasBeenSet = true; m_setup.push_back(std::move(value)); return *this; }
    inline Recipes& AddSetup(const char* value) { m_setupHasBeenSet = true; m_setup.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of custom recipe names to be run following a <code>configure</code>
     * event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigure() const{ return m_configure; }
    inline bool ConfigureHasBeenSet() const { return m_configureHasBeenSet; }
    inline void SetConfigure(const Aws::Vector<Aws::String>& value) { m_configureHasBeenSet = true; m_configure = value; }
    inline void SetConfigure(Aws::Vector<Aws::String>&& value) { m_configureHasBeenSet = true; m_configure = std::move(value); }
    inline Recipes& WithConfigure(const Aws::Vector<Aws::String>& value) { SetConfigure(value); return *this;}
    inline Recipes& WithConfigure(Aws::Vector<Aws::String>&& value) { SetConfigure(std::move(value)); return *this;}
    inline Recipes& AddConfigure(const Aws::String& value) { m_configureHasBeenSet = true; m_configure.push_back(value); return *this; }
    inline Recipes& AddConfigure(Aws::String&& value) { m_configureHasBeenSet = true; m_configure.push_back(std::move(value)); return *this; }
    inline Recipes& AddConfigure(const char* value) { m_configureHasBeenSet = true; m_configure.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of custom recipe names to be run following a <code>deploy</code>
     * event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeploy() const{ return m_deploy; }
    inline bool DeployHasBeenSet() const { return m_deployHasBeenSet; }
    inline void SetDeploy(const Aws::Vector<Aws::String>& value) { m_deployHasBeenSet = true; m_deploy = value; }
    inline void SetDeploy(Aws::Vector<Aws::String>&& value) { m_deployHasBeenSet = true; m_deploy = std::move(value); }
    inline Recipes& WithDeploy(const Aws::Vector<Aws::String>& value) { SetDeploy(value); return *this;}
    inline Recipes& WithDeploy(Aws::Vector<Aws::String>&& value) { SetDeploy(std::move(value)); return *this;}
    inline Recipes& AddDeploy(const Aws::String& value) { m_deployHasBeenSet = true; m_deploy.push_back(value); return *this; }
    inline Recipes& AddDeploy(Aws::String&& value) { m_deployHasBeenSet = true; m_deploy.push_back(std::move(value)); return *this; }
    inline Recipes& AddDeploy(const char* value) { m_deployHasBeenSet = true; m_deploy.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of custom recipe names to be run following a <code>undeploy</code>
     * event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUndeploy() const{ return m_undeploy; }
    inline bool UndeployHasBeenSet() const { return m_undeployHasBeenSet; }
    inline void SetUndeploy(const Aws::Vector<Aws::String>& value) { m_undeployHasBeenSet = true; m_undeploy = value; }
    inline void SetUndeploy(Aws::Vector<Aws::String>&& value) { m_undeployHasBeenSet = true; m_undeploy = std::move(value); }
    inline Recipes& WithUndeploy(const Aws::Vector<Aws::String>& value) { SetUndeploy(value); return *this;}
    inline Recipes& WithUndeploy(Aws::Vector<Aws::String>&& value) { SetUndeploy(std::move(value)); return *this;}
    inline Recipes& AddUndeploy(const Aws::String& value) { m_undeployHasBeenSet = true; m_undeploy.push_back(value); return *this; }
    inline Recipes& AddUndeploy(Aws::String&& value) { m_undeployHasBeenSet = true; m_undeploy.push_back(std::move(value)); return *this; }
    inline Recipes& AddUndeploy(const char* value) { m_undeployHasBeenSet = true; m_undeploy.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of custom recipe names to be run following a <code>shutdown</code>
     * event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetShutdown() const{ return m_shutdown; }
    inline bool ShutdownHasBeenSet() const { return m_shutdownHasBeenSet; }
    inline void SetShutdown(const Aws::Vector<Aws::String>& value) { m_shutdownHasBeenSet = true; m_shutdown = value; }
    inline void SetShutdown(Aws::Vector<Aws::String>&& value) { m_shutdownHasBeenSet = true; m_shutdown = std::move(value); }
    inline Recipes& WithShutdown(const Aws::Vector<Aws::String>& value) { SetShutdown(value); return *this;}
    inline Recipes& WithShutdown(Aws::Vector<Aws::String>&& value) { SetShutdown(std::move(value)); return *this;}
    inline Recipes& AddShutdown(const Aws::String& value) { m_shutdownHasBeenSet = true; m_shutdown.push_back(value); return *this; }
    inline Recipes& AddShutdown(Aws::String&& value) { m_shutdownHasBeenSet = true; m_shutdown.push_back(std::move(value)); return *this; }
    inline Recipes& AddShutdown(const char* value) { m_shutdownHasBeenSet = true; m_shutdown.push_back(value); return *this; }
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
