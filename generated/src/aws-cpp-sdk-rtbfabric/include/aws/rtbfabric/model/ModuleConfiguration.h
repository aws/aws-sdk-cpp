/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/model/ModuleParameters.h>
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
namespace RTBFabric
{
namespace Model
{

  /**
   * <p>Describes the configuration of a module.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/ModuleConfiguration">AWS
   * API Reference</a></p>
   */
  class ModuleConfiguration
  {
  public:
    AWS_RTBFABRIC_API ModuleConfiguration() = default;
    AWS_RTBFABRIC_API ModuleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_RTBFABRIC_API ModuleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the module.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    ModuleConfiguration& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the module.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ModuleConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dependencies of the module.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDependsOn() const { return m_dependsOn; }
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
    template<typename DependsOnT = Aws::Vector<Aws::String>>
    void SetDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::forward<DependsOnT>(value); }
    template<typename DependsOnT = Aws::Vector<Aws::String>>
    ModuleConfiguration& WithDependsOn(DependsOnT&& value) { SetDependsOn(std::forward<DependsOnT>(value)); return *this;}
    template<typename DependsOnT = Aws::String>
    ModuleConfiguration& AddDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.emplace_back(std::forward<DependsOnT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the parameters of a module.</p>
     */
    inline const ModuleParameters& GetModuleParameters() const { return m_moduleParameters; }
    inline bool ModuleParametersHasBeenSet() const { return m_moduleParametersHasBeenSet; }
    template<typename ModuleParametersT = ModuleParameters>
    void SetModuleParameters(ModuleParametersT&& value) { m_moduleParametersHasBeenSet = true; m_moduleParameters = std::forward<ModuleParametersT>(value); }
    template<typename ModuleParametersT = ModuleParameters>
    ModuleConfiguration& WithModuleParameters(ModuleParametersT&& value) { SetModuleParameters(std::forward<ModuleParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_dependsOn;
    bool m_dependsOnHasBeenSet = false;

    ModuleParameters m_moduleParameters;
    bool m_moduleParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace RTBFabric
} // namespace Aws
