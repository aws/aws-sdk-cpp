/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/TargetLocation.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about the optional inputs that can be specified for an automation
   * execution preview.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AutomationExecutionInputs">AWS
   * API Reference</a></p>
   */
  class AutomationExecutionInputs
  {
  public:
    AWS_SSM_API AutomationExecutionInputs() = default;
    AWS_SSM_API AutomationExecutionInputs(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AutomationExecutionInputs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about parameters that can be specified for the preview operation.
     * </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    AutomationExecutionInputs& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::Vector<Aws::String>>
    AutomationExecutionInputs& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of the parameter used as the target resource for the rate-controlled
     * execution. Required if you specify targets.</p>
     */
    inline const Aws::String& GetTargetParameterName() const { return m_targetParameterName; }
    inline bool TargetParameterNameHasBeenSet() const { return m_targetParameterNameHasBeenSet; }
    template<typename TargetParameterNameT = Aws::String>
    void SetTargetParameterName(TargetParameterNameT&& value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName = std::forward<TargetParameterNameT>(value); }
    template<typename TargetParameterNameT = Aws::String>
    AutomationExecutionInputs& WithTargetParameterName(TargetParameterNameT&& value) { SetTargetParameterName(std::forward<TargetParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the resources that would be included in the actual runbook
     * execution, if it were to be run. Both Targets and TargetMaps can't be specified
     * together.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Target>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Target>>
    AutomationExecutionInputs& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Target>
    AutomationExecutionInputs& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A key-value mapping of document parameters to target resources. Both Targets
     * and TargetMaps can't be specified together.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetTargetMaps() const { return m_targetMaps; }
    inline bool TargetMapsHasBeenSet() const { return m_targetMapsHasBeenSet; }
    template<typename TargetMapsT = Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>
    void SetTargetMaps(TargetMapsT&& value) { m_targetMapsHasBeenSet = true; m_targetMaps = std::forward<TargetMapsT>(value); }
    template<typename TargetMapsT = Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>
    AutomationExecutionInputs& WithTargetMaps(TargetMapsT&& value) { SetTargetMaps(std::forward<TargetMapsT>(value)); return *this;}
    template<typename TargetMapsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    AutomationExecutionInputs& AddTargetMaps(TargetMapsT&& value) { m_targetMapsHasBeenSet = true; m_targetMaps.emplace_back(std::forward<TargetMapsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the Amazon Web Services Regions and Amazon Web Services
     * accounts targeted by the Automation execution preview operation.</p>
     */
    inline const Aws::Vector<TargetLocation>& GetTargetLocations() const { return m_targetLocations; }
    inline bool TargetLocationsHasBeenSet() const { return m_targetLocationsHasBeenSet; }
    template<typename TargetLocationsT = Aws::Vector<TargetLocation>>
    void SetTargetLocations(TargetLocationsT&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations = std::forward<TargetLocationsT>(value); }
    template<typename TargetLocationsT = Aws::Vector<TargetLocation>>
    AutomationExecutionInputs& WithTargetLocations(TargetLocationsT&& value) { SetTargetLocations(std::forward<TargetLocationsT>(value)); return *this;}
    template<typename TargetLocationsT = TargetLocation>
    AutomationExecutionInputs& AddTargetLocations(TargetLocationsT&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations.emplace_back(std::forward<TargetLocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A publicly accessible URL for a file that contains the
     * <code>TargetLocations</code> body. Currently, only files in presigned Amazon S3
     * buckets are supported.</p>
     */
    inline const Aws::String& GetTargetLocationsURL() const { return m_targetLocationsURL; }
    inline bool TargetLocationsURLHasBeenSet() const { return m_targetLocationsURLHasBeenSet; }
    template<typename TargetLocationsURLT = Aws::String>
    void SetTargetLocationsURL(TargetLocationsURLT&& value) { m_targetLocationsURLHasBeenSet = true; m_targetLocationsURL = std::forward<TargetLocationsURLT>(value); }
    template<typename TargetLocationsURLT = Aws::String>
    AutomationExecutionInputs& WithTargetLocationsURL(TargetLocationsURLT&& value) { SetTargetLocationsURL(std::forward<TargetLocationsURLT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_targetParameterName;
    bool m_targetParameterNameHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_targetMaps;
    bool m_targetMapsHasBeenSet = false;

    Aws::Vector<TargetLocation> m_targetLocations;
    bool m_targetLocationsHasBeenSet = false;

    Aws::String m_targetLocationsURL;
    bool m_targetLocationsURLHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
