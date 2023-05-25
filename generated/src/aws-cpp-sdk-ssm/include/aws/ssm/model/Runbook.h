/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Information about an Automation runbook used in a runbook workflow in Change
   * Manager.</p>  <p>The Automation runbooks specified for the runbook
   * workflow can't run until all required approvals for the change request have been
   * received.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/Runbook">AWS API
   * Reference</a></p>
   */
  class Runbook
  {
  public:
    AWS_SSM_API Runbook();
    AWS_SSM_API Runbook(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Runbook& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Automation runbook used in a runbook workflow.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * <p>The name of the Automation runbook used in a runbook workflow.</p>
     */
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }

    /**
     * <p>The name of the Automation runbook used in a runbook workflow.</p>
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>The name of the Automation runbook used in a runbook workflow.</p>
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = std::move(value); }

    /**
     * <p>The name of the Automation runbook used in a runbook workflow.</p>
     */
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }

    /**
     * <p>The name of the Automation runbook used in a runbook workflow.</p>
     */
    inline Runbook& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name of the Automation runbook used in a runbook workflow.</p>
     */
    inline Runbook& WithDocumentName(Aws::String&& value) { SetDocumentName(std::move(value)); return *this;}

    /**
     * <p>The name of the Automation runbook used in a runbook workflow.</p>
     */
    inline Runbook& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}


    /**
     * <p>The version of the Automation runbook used in a runbook workflow.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The version of the Automation runbook used in a runbook workflow.</p>
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>The version of the Automation runbook used in a runbook workflow.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The version of the Automation runbook used in a runbook workflow.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>The version of the Automation runbook used in a runbook workflow.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The version of the Automation runbook used in a runbook workflow.</p>
     */
    inline Runbook& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The version of the Automation runbook used in a runbook workflow.</p>
     */
    inline Runbook& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the Automation runbook used in a runbook workflow.</p>
     */
    inline Runbook& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartChangeRequestExecution</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartChangeRequestExecution</code>.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartChangeRequestExecution</code>.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartChangeRequestExecution</code>.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartChangeRequestExecution</code>.</p>
     */
    inline Runbook& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartChangeRequestExecution</code>.</p>
     */
    inline Runbook& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartChangeRequestExecution</code>.</p>
     */
    inline Runbook& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartChangeRequestExecution</code>.</p>
     */
    inline Runbook& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartChangeRequestExecution</code>.</p>
     */
    inline Runbook& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartChangeRequestExecution</code>.</p>
     */
    inline Runbook& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartChangeRequestExecution</code>.</p>
     */
    inline Runbook& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartChangeRequestExecution</code>.</p>
     */
    inline Runbook& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The name of the parameter used as the target resource for the rate-controlled
     * runbook workflow. Required if you specify <code>Targets</code>. </p>
     */
    inline const Aws::String& GetTargetParameterName() const{ return m_targetParameterName; }

    /**
     * <p>The name of the parameter used as the target resource for the rate-controlled
     * runbook workflow. Required if you specify <code>Targets</code>. </p>
     */
    inline bool TargetParameterNameHasBeenSet() const { return m_targetParameterNameHasBeenSet; }

    /**
     * <p>The name of the parameter used as the target resource for the rate-controlled
     * runbook workflow. Required if you specify <code>Targets</code>. </p>
     */
    inline void SetTargetParameterName(const Aws::String& value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName = value; }

    /**
     * <p>The name of the parameter used as the target resource for the rate-controlled
     * runbook workflow. Required if you specify <code>Targets</code>. </p>
     */
    inline void SetTargetParameterName(Aws::String&& value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName = std::move(value); }

    /**
     * <p>The name of the parameter used as the target resource for the rate-controlled
     * runbook workflow. Required if you specify <code>Targets</code>. </p>
     */
    inline void SetTargetParameterName(const char* value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName.assign(value); }

    /**
     * <p>The name of the parameter used as the target resource for the rate-controlled
     * runbook workflow. Required if you specify <code>Targets</code>. </p>
     */
    inline Runbook& WithTargetParameterName(const Aws::String& value) { SetTargetParameterName(value); return *this;}

    /**
     * <p>The name of the parameter used as the target resource for the rate-controlled
     * runbook workflow. Required if you specify <code>Targets</code>. </p>
     */
    inline Runbook& WithTargetParameterName(Aws::String&& value) { SetTargetParameterName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter used as the target resource for the rate-controlled
     * runbook workflow. Required if you specify <code>Targets</code>. </p>
     */
    inline Runbook& WithTargetParameterName(const char* value) { SetTargetParameterName(value); return *this;}


    /**
     * <p>A key-value mapping to target resources that the runbook operation performs
     * tasks on. Required if you specify <code>TargetParameterName</code>.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>A key-value mapping to target resources that the runbook operation performs
     * tasks on. Required if you specify <code>TargetParameterName</code>.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>A key-value mapping to target resources that the runbook operation performs
     * tasks on. Required if you specify <code>TargetParameterName</code>.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>A key-value mapping to target resources that the runbook operation performs
     * tasks on. Required if you specify <code>TargetParameterName</code>.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>A key-value mapping to target resources that the runbook operation performs
     * tasks on. Required if you specify <code>TargetParameterName</code>.</p>
     */
    inline Runbook& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>A key-value mapping to target resources that the runbook operation performs
     * tasks on. Required if you specify <code>TargetParameterName</code>.</p>
     */
    inline Runbook& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>A key-value mapping to target resources that the runbook operation performs
     * tasks on. Required if you specify <code>TargetParameterName</code>.</p>
     */
    inline Runbook& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>A key-value mapping to target resources that the runbook operation performs
     * tasks on. Required if you specify <code>TargetParameterName</code>.</p>
     */
    inline Runbook& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>A key-value mapping of runbook parameters to target resources. Both Targets
     * and TargetMaps can't be specified together.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetTargetMaps() const{ return m_targetMaps; }

    /**
     * <p>A key-value mapping of runbook parameters to target resources. Both Targets
     * and TargetMaps can't be specified together.</p>
     */
    inline bool TargetMapsHasBeenSet() const { return m_targetMapsHasBeenSet; }

    /**
     * <p>A key-value mapping of runbook parameters to target resources. Both Targets
     * and TargetMaps can't be specified together.</p>
     */
    inline void SetTargetMaps(const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { m_targetMapsHasBeenSet = true; m_targetMaps = value; }

    /**
     * <p>A key-value mapping of runbook parameters to target resources. Both Targets
     * and TargetMaps can't be specified together.</p>
     */
    inline void SetTargetMaps(Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { m_targetMapsHasBeenSet = true; m_targetMaps = std::move(value); }

    /**
     * <p>A key-value mapping of runbook parameters to target resources. Both Targets
     * and TargetMaps can't be specified together.</p>
     */
    inline Runbook& WithTargetMaps(const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { SetTargetMaps(value); return *this;}

    /**
     * <p>A key-value mapping of runbook parameters to target resources. Both Targets
     * and TargetMaps can't be specified together.</p>
     */
    inline Runbook& WithTargetMaps(Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { SetTargetMaps(std::move(value)); return *this;}

    /**
     * <p>A key-value mapping of runbook parameters to target resources. Both Targets
     * and TargetMaps can't be specified together.</p>
     */
    inline Runbook& AddTargetMaps(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_targetMapsHasBeenSet = true; m_targetMaps.push_back(value); return *this; }

    /**
     * <p>A key-value mapping of runbook parameters to target resources. Both Targets
     * and TargetMaps can't be specified together.</p>
     */
    inline Runbook& AddTargetMaps(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_targetMapsHasBeenSet = true; m_targetMaps.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>MaxConcurrency</code> value specified by the user when the
     * operation started, indicating the maximum number of resources that the runbook
     * operation can run on at the same time.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>The <code>MaxConcurrency</code> value specified by the user when the
     * operation started, indicating the maximum number of resources that the runbook
     * operation can run on at the same time.</p>
     */
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }

    /**
     * <p>The <code>MaxConcurrency</code> value specified by the user when the
     * operation started, indicating the maximum number of resources that the runbook
     * operation can run on at the same time.</p>
     */
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

    /**
     * <p>The <code>MaxConcurrency</code> value specified by the user when the
     * operation started, indicating the maximum number of resources that the runbook
     * operation can run on at the same time.</p>
     */
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::move(value); }

    /**
     * <p>The <code>MaxConcurrency</code> value specified by the user when the
     * operation started, indicating the maximum number of resources that the runbook
     * operation can run on at the same time.</p>
     */
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency.assign(value); }

    /**
     * <p>The <code>MaxConcurrency</code> value specified by the user when the
     * operation started, indicating the maximum number of resources that the runbook
     * operation can run on at the same time.</p>
     */
    inline Runbook& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}

    /**
     * <p>The <code>MaxConcurrency</code> value specified by the user when the
     * operation started, indicating the maximum number of resources that the runbook
     * operation can run on at the same time.</p>
     */
    inline Runbook& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}

    /**
     * <p>The <code>MaxConcurrency</code> value specified by the user when the
     * operation started, indicating the maximum number of resources that the runbook
     * operation can run on at the same time.</p>
     */
    inline Runbook& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}


    /**
     * <p>The <code>MaxErrors</code> value specified by the user when the execution
     * started, indicating the maximum number of errors that can occur during the
     * operation before the updates are stopped or rolled back.</p>
     */
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }

    /**
     * <p>The <code>MaxErrors</code> value specified by the user when the execution
     * started, indicating the maximum number of errors that can occur during the
     * operation before the updates are stopped or rolled back.</p>
     */
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }

    /**
     * <p>The <code>MaxErrors</code> value specified by the user when the execution
     * started, indicating the maximum number of errors that can occur during the
     * operation before the updates are stopped or rolled back.</p>
     */
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = value; }

    /**
     * <p>The <code>MaxErrors</code> value specified by the user when the execution
     * started, indicating the maximum number of errors that can occur during the
     * operation before the updates are stopped or rolled back.</p>
     */
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::move(value); }

    /**
     * <p>The <code>MaxErrors</code> value specified by the user when the execution
     * started, indicating the maximum number of errors that can occur during the
     * operation before the updates are stopped or rolled back.</p>
     */
    inline void SetMaxErrors(const char* value) { m_maxErrorsHasBeenSet = true; m_maxErrors.assign(value); }

    /**
     * <p>The <code>MaxErrors</code> value specified by the user when the execution
     * started, indicating the maximum number of errors that can occur during the
     * operation before the updates are stopped or rolled back.</p>
     */
    inline Runbook& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}

    /**
     * <p>The <code>MaxErrors</code> value specified by the user when the execution
     * started, indicating the maximum number of errors that can occur during the
     * operation before the updates are stopped or rolled back.</p>
     */
    inline Runbook& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}

    /**
     * <p>The <code>MaxErrors</code> value specified by the user when the execution
     * started, indicating the maximum number of errors that can occur during the
     * operation before the updates are stopped or rolled back.</p>
     */
    inline Runbook& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}


    /**
     * <p>Information about the Amazon Web Services Regions and Amazon Web Services
     * accounts targeted by the current Runbook operation.</p>
     */
    inline const Aws::Vector<TargetLocation>& GetTargetLocations() const{ return m_targetLocations; }

    /**
     * <p>Information about the Amazon Web Services Regions and Amazon Web Services
     * accounts targeted by the current Runbook operation.</p>
     */
    inline bool TargetLocationsHasBeenSet() const { return m_targetLocationsHasBeenSet; }

    /**
     * <p>Information about the Amazon Web Services Regions and Amazon Web Services
     * accounts targeted by the current Runbook operation.</p>
     */
    inline void SetTargetLocations(const Aws::Vector<TargetLocation>& value) { m_targetLocationsHasBeenSet = true; m_targetLocations = value; }

    /**
     * <p>Information about the Amazon Web Services Regions and Amazon Web Services
     * accounts targeted by the current Runbook operation.</p>
     */
    inline void SetTargetLocations(Aws::Vector<TargetLocation>&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations = std::move(value); }

    /**
     * <p>Information about the Amazon Web Services Regions and Amazon Web Services
     * accounts targeted by the current Runbook operation.</p>
     */
    inline Runbook& WithTargetLocations(const Aws::Vector<TargetLocation>& value) { SetTargetLocations(value); return *this;}

    /**
     * <p>Information about the Amazon Web Services Regions and Amazon Web Services
     * accounts targeted by the current Runbook operation.</p>
     */
    inline Runbook& WithTargetLocations(Aws::Vector<TargetLocation>&& value) { SetTargetLocations(std::move(value)); return *this;}

    /**
     * <p>Information about the Amazon Web Services Regions and Amazon Web Services
     * accounts targeted by the current Runbook operation.</p>
     */
    inline Runbook& AddTargetLocations(const TargetLocation& value) { m_targetLocationsHasBeenSet = true; m_targetLocations.push_back(value); return *this; }

    /**
     * <p>Information about the Amazon Web Services Regions and Amazon Web Services
     * accounts targeted by the current Runbook operation.</p>
     */
    inline Runbook& AddTargetLocations(TargetLocation&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_targetParameterName;
    bool m_targetParameterNameHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_targetMaps;
    bool m_targetMapsHasBeenSet = false;

    Aws::String m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet = false;

    Aws::String m_maxErrors;
    bool m_maxErrorsHasBeenSet = false;

    Aws::Vector<TargetLocation> m_targetLocations;
    bool m_targetLocationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
