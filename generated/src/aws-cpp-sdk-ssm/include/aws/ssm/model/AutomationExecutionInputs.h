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
    AWS_SSM_API AutomationExecutionInputs();
    AWS_SSM_API AutomationExecutionInputs(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AutomationExecutionInputs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about parameters that can be specified for the preview operation.
     * </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline AutomationExecutionInputs& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}
    inline AutomationExecutionInputs& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}
    inline AutomationExecutionInputs& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline AutomationExecutionInputs& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline AutomationExecutionInputs& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline AutomationExecutionInputs& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline AutomationExecutionInputs& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline AutomationExecutionInputs& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the parameter used as the target resource for the rate-controlled
     * execution. Required if you specify targets.</p>
     */
    inline const Aws::String& GetTargetParameterName() const{ return m_targetParameterName; }
    inline bool TargetParameterNameHasBeenSet() const { return m_targetParameterNameHasBeenSet; }
    inline void SetTargetParameterName(const Aws::String& value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName = value; }
    inline void SetTargetParameterName(Aws::String&& value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName = std::move(value); }
    inline void SetTargetParameterName(const char* value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName.assign(value); }
    inline AutomationExecutionInputs& WithTargetParameterName(const Aws::String& value) { SetTargetParameterName(value); return *this;}
    inline AutomationExecutionInputs& WithTargetParameterName(Aws::String&& value) { SetTargetParameterName(std::move(value)); return *this;}
    inline AutomationExecutionInputs& WithTargetParameterName(const char* value) { SetTargetParameterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the resources that would be included in the actual runbook
     * execution, if it were to be run. Both Targets and TargetMaps can't be specified
     * together.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline AutomationExecutionInputs& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}
    inline AutomationExecutionInputs& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}
    inline AutomationExecutionInputs& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    inline AutomationExecutionInputs& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A key-value mapping of document parameters to target resources. Both Targets
     * and TargetMaps can't be specified together.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetTargetMaps() const{ return m_targetMaps; }
    inline bool TargetMapsHasBeenSet() const { return m_targetMapsHasBeenSet; }
    inline void SetTargetMaps(const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { m_targetMapsHasBeenSet = true; m_targetMaps = value; }
    inline void SetTargetMaps(Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { m_targetMapsHasBeenSet = true; m_targetMaps = std::move(value); }
    inline AutomationExecutionInputs& WithTargetMaps(const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { SetTargetMaps(value); return *this;}
    inline AutomationExecutionInputs& WithTargetMaps(Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { SetTargetMaps(std::move(value)); return *this;}
    inline AutomationExecutionInputs& AddTargetMaps(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_targetMapsHasBeenSet = true; m_targetMaps.push_back(value); return *this; }
    inline AutomationExecutionInputs& AddTargetMaps(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_targetMapsHasBeenSet = true; m_targetMaps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the Amazon Web Services Regions and Amazon Web Services
     * accounts targeted by the Automation execution preview operation.</p>
     */
    inline const Aws::Vector<TargetLocation>& GetTargetLocations() const{ return m_targetLocations; }
    inline bool TargetLocationsHasBeenSet() const { return m_targetLocationsHasBeenSet; }
    inline void SetTargetLocations(const Aws::Vector<TargetLocation>& value) { m_targetLocationsHasBeenSet = true; m_targetLocations = value; }
    inline void SetTargetLocations(Aws::Vector<TargetLocation>&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations = std::move(value); }
    inline AutomationExecutionInputs& WithTargetLocations(const Aws::Vector<TargetLocation>& value) { SetTargetLocations(value); return *this;}
    inline AutomationExecutionInputs& WithTargetLocations(Aws::Vector<TargetLocation>&& value) { SetTargetLocations(std::move(value)); return *this;}
    inline AutomationExecutionInputs& AddTargetLocations(const TargetLocation& value) { m_targetLocationsHasBeenSet = true; m_targetLocations.push_back(value); return *this; }
    inline AutomationExecutionInputs& AddTargetLocations(TargetLocation&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A publicly accessible URL for a file that contains the
     * <code>TargetLocations</code> body. Currently, only files in presigned Amazon S3
     * buckets are supported.</p>
     */
    inline const Aws::String& GetTargetLocationsURL() const{ return m_targetLocationsURL; }
    inline bool TargetLocationsURLHasBeenSet() const { return m_targetLocationsURLHasBeenSet; }
    inline void SetTargetLocationsURL(const Aws::String& value) { m_targetLocationsURLHasBeenSet = true; m_targetLocationsURL = value; }
    inline void SetTargetLocationsURL(Aws::String&& value) { m_targetLocationsURLHasBeenSet = true; m_targetLocationsURL = std::move(value); }
    inline void SetTargetLocationsURL(const char* value) { m_targetLocationsURLHasBeenSet = true; m_targetLocationsURL.assign(value); }
    inline AutomationExecutionInputs& WithTargetLocationsURL(const Aws::String& value) { SetTargetLocationsURL(value); return *this;}
    inline AutomationExecutionInputs& WithTargetLocationsURL(Aws::String&& value) { SetTargetLocationsURL(std::move(value)); return *this;}
    inline AutomationExecutionInputs& WithTargetLocationsURL(const char* value) { SetTargetLocationsURL(value); return *this;}
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
