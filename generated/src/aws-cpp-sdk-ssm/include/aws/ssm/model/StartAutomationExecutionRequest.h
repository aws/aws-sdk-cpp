/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/ExecutionMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/AlarmConfiguration.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/TargetLocation.h>
#include <aws/ssm/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class StartAutomationExecutionRequest : public SSMRequest
  {
  public:
    AWS_SSM_API StartAutomationExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAutomationExecution"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the SSM document to run. This can be a public document or a
     * custom document. To run a shared document belonging to another account, specify
     * the document ARN. For more information about how to use shared documents, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/documents-ssm-sharing.html">Sharing
     * SSM documents</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetDocumentName() const { return m_documentName; }
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }
    template<typename DocumentNameT = Aws::String>
    void SetDocumentName(DocumentNameT&& value) { m_documentNameHasBeenSet = true; m_documentName = std::forward<DocumentNameT>(value); }
    template<typename DocumentNameT = Aws::String>
    StartAutomationExecutionRequest& WithDocumentName(DocumentNameT&& value) { SetDocumentName(std::forward<DocumentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Automation runbook to use for this execution.</p>
     */
    inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    template<typename DocumentVersionT = Aws::String>
    void SetDocumentVersion(DocumentVersionT&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::forward<DocumentVersionT>(value); }
    template<typename DocumentVersionT = Aws::String>
    StartAutomationExecutionRequest& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value map of execution parameters, which match the declared parameters
     * in the Automation runbook.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    StartAutomationExecutionRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::Vector<Aws::String>>
    StartAutomationExecutionRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>User-provided idempotency token. The token must be unique, is case
     * insensitive, enforces the UUID format, and can't be reused.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartAutomationExecutionRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution mode of the automation. Valid modes include the following: Auto
     * and Interactive. The default mode is Auto.</p>
     */
    inline ExecutionMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(ExecutionMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline StartAutomationExecutionRequest& WithMode(ExecutionMode value) { SetMode(value); return *this;}
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
    StartAutomationExecutionRequest& WithTargetParameterName(TargetParameterNameT&& value) { SetTargetParameterName(std::forward<TargetParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value mapping to target resources. Required if you specify
     * TargetParameterName.</p> <p>If both this parameter and the
     * <code>TargetLocation:Targets</code> parameter are supplied,
     * <code>TargetLocation:Targets</code> takes precedence.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Target>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Target>>
    StartAutomationExecutionRequest& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Target>
    StartAutomationExecutionRequest& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
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
    StartAutomationExecutionRequest& WithTargetMaps(TargetMapsT&& value) { SetTargetMaps(std::forward<TargetMapsT>(value)); return *this;}
    template<typename TargetMapsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    StartAutomationExecutionRequest& AddTargetMaps(TargetMapsT&& value) { m_targetMapsHasBeenSet = true; m_targetMaps.emplace_back(std::forward<TargetMapsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of targets allowed to run this task in parallel. You can
     * specify a number, such as 10, or a percentage, such as 10%. The default value is
     * <code>10</code>.</p> <p>If both this parameter and the
     * <code>TargetLocation:TargetsMaxConcurrency</code> are supplied,
     * <code>TargetLocation:TargetsMaxConcurrency</code> takes precedence.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const { return m_maxConcurrency; }
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }
    template<typename MaxConcurrencyT = Aws::String>
    void SetMaxConcurrency(MaxConcurrencyT&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::forward<MaxConcurrencyT>(value); }
    template<typename MaxConcurrencyT = Aws::String>
    StartAutomationExecutionRequest& WithMaxConcurrency(MaxConcurrencyT&& value) { SetMaxConcurrency(std::forward<MaxConcurrencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of errors that are allowed before the system stops running the
     * automation on additional targets. You can specify either an absolute number of
     * errors, for example 10, or a percentage of the target set, for example 10%. If
     * you specify 3, for example, the system stops running the automation when the
     * fourth error is received. If you specify 0, then the system stops running the
     * automation on additional targets after the first error result is returned. If
     * you run an automation on 50 resources and set max-errors to 10%, then the system
     * stops running the automation on additional targets when the sixth error is
     * received.</p> <p>Executions that are already running an automation when
     * max-errors is reached are allowed to complete, but some of these executions may
     * fail as well. If you need to ensure that there won't be more than max-errors
     * failed executions, set max-concurrency to 1 so the executions proceed one at a
     * time.</p> <p>If this parameter and the
     * <code>TargetLocation:TargetsMaxErrors</code> parameter are both supplied,
     * <code>TargetLocation:TargetsMaxErrors</code> takes precedence.</p>
     */
    inline const Aws::String& GetMaxErrors() const { return m_maxErrors; }
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }
    template<typename MaxErrorsT = Aws::String>
    void SetMaxErrors(MaxErrorsT&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::forward<MaxErrorsT>(value); }
    template<typename MaxErrorsT = Aws::String>
    StartAutomationExecutionRequest& WithMaxErrors(MaxErrorsT&& value) { SetMaxErrors(std::forward<MaxErrorsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A location is a combination of Amazon Web Services Regions and/or Amazon Web
     * Services accounts where you want to run the automation. Use this operation to
     * start an automation in multiple Amazon Web Services Regions and multiple Amazon
     * Web Services accounts. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-automation-multiple-accounts-and-regions.html">Running
     * automations in multiple Amazon Web Services Regions and accounts</a> in the
     * <i>Amazon Web Services Systems Manager User Guide</i>. </p>
     */
    inline const Aws::Vector<TargetLocation>& GetTargetLocations() const { return m_targetLocations; }
    inline bool TargetLocationsHasBeenSet() const { return m_targetLocationsHasBeenSet; }
    template<typename TargetLocationsT = Aws::Vector<TargetLocation>>
    void SetTargetLocations(TargetLocationsT&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations = std::forward<TargetLocationsT>(value); }
    template<typename TargetLocationsT = Aws::Vector<TargetLocation>>
    StartAutomationExecutionRequest& WithTargetLocations(TargetLocationsT&& value) { SetTargetLocations(std::forward<TargetLocationsT>(value)); return *this;}
    template<typename TargetLocationsT = TargetLocation>
    StartAutomationExecutionRequest& AddTargetLocations(TargetLocationsT&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations.emplace_back(std::forward<TargetLocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional metadata that you assign to a resource. You can specify a maximum of
     * five tags for an automation. Tags enable you to categorize a resource in
     * different ways, such as by purpose, owner, or environment. For example, you
     * might want to tag an automation to identify an environment or operating system.
     * In this case, you could specify the following key-value pairs:</p> <ul> <li> <p>
     * <code>Key=environment,Value=test</code> </p> </li> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> </ul>  <p>The <code>Array
     * Members</code> maximum value is reported as 1000. This number includes capacity
     * reserved for internal operations. When calling the
     * <code>StartAutomationExecution</code> action, you can specify a maximum of 5
     * tags. You can, however, use the <a>AddTagsToResource</a> action to add up to a
     * total of 50 tags to an existing automation configuration.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    StartAutomationExecutionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    StartAutomationExecutionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarm you want to apply to your automation.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const { return m_alarmConfiguration; }
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    void SetAlarmConfiguration(AlarmConfigurationT&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::forward<AlarmConfigurationT>(value); }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    StartAutomationExecutionRequest& WithAlarmConfiguration(AlarmConfigurationT&& value) { SetAlarmConfiguration(std::forward<AlarmConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a publicly accessible URL for a file that contains the
     * <code>TargetLocations</code> body. Currently, only files in presigned Amazon S3
     * buckets are supported. </p>
     */
    inline const Aws::String& GetTargetLocationsURL() const { return m_targetLocationsURL; }
    inline bool TargetLocationsURLHasBeenSet() const { return m_targetLocationsURLHasBeenSet; }
    template<typename TargetLocationsURLT = Aws::String>
    void SetTargetLocationsURL(TargetLocationsURLT&& value) { m_targetLocationsURLHasBeenSet = true; m_targetLocationsURL = std::forward<TargetLocationsURLT>(value); }
    template<typename TargetLocationsURLT = Aws::String>
    StartAutomationExecutionRequest& WithTargetLocationsURL(TargetLocationsURLT&& value) { SetTargetLocationsURL(std::forward<TargetLocationsURLT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ExecutionMode m_mode{ExecutionMode::NOT_SET};
    bool m_modeHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    AlarmConfiguration m_alarmConfiguration;
    bool m_alarmConfigurationHasBeenSet = false;

    Aws::String m_targetLocationsURL;
    bool m_targetLocationsURLHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
