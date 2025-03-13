/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/RequestedPipeStateDescribeResponse.h>
#include <aws/pipes/model/PipeState.h>
#include <aws/pipes/model/PipeSourceParameters.h>
#include <aws/pipes/model/PipeEnrichmentParameters.h>
#include <aws/pipes/model/PipeTargetParameters.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pipes/model/PipeLogConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Pipes
{
namespace Model
{
  class DescribePipeResult
  {
  public:
    AWS_PIPES_API DescribePipeResult() = default;
    AWS_PIPES_API DescribePipeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PIPES_API DescribePipeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the pipe.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribePipeResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the pipe.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribePipeResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the pipe.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribePipeResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state the pipe should be in.</p>
     */
    inline RequestedPipeStateDescribeResponse GetDesiredState() const { return m_desiredState; }
    inline void SetDesiredState(RequestedPipeStateDescribeResponse value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }
    inline DescribePipeResult& WithDesiredState(RequestedPipeStateDescribeResponse value) { SetDesiredState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state the pipe is in.</p>
     */
    inline PipeState GetCurrentState() const { return m_currentState; }
    inline void SetCurrentState(PipeState value) { m_currentStateHasBeenSet = true; m_currentState = value; }
    inline DescribePipeResult& WithCurrentState(PipeState value) { SetCurrentState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the pipe is in its current state.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    DescribePipeResult& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the source resource.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    DescribePipeResult& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters required to set up a source for your pipe.</p>
     */
    inline const PipeSourceParameters& GetSourceParameters() const { return m_sourceParameters; }
    template<typename SourceParametersT = PipeSourceParameters>
    void SetSourceParameters(SourceParametersT&& value) { m_sourceParametersHasBeenSet = true; m_sourceParameters = std::forward<SourceParametersT>(value); }
    template<typename SourceParametersT = PipeSourceParameters>
    DescribePipeResult& WithSourceParameters(SourceParametersT&& value) { SetSourceParameters(std::forward<SourceParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the enrichment resource.</p>
     */
    inline const Aws::String& GetEnrichment() const { return m_enrichment; }
    template<typename EnrichmentT = Aws::String>
    void SetEnrichment(EnrichmentT&& value) { m_enrichmentHasBeenSet = true; m_enrichment = std::forward<EnrichmentT>(value); }
    template<typename EnrichmentT = Aws::String>
    DescribePipeResult& WithEnrichment(EnrichmentT&& value) { SetEnrichment(std::forward<EnrichmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters required to set up enrichment on your pipe.</p>
     */
    inline const PipeEnrichmentParameters& GetEnrichmentParameters() const { return m_enrichmentParameters; }
    template<typename EnrichmentParametersT = PipeEnrichmentParameters>
    void SetEnrichmentParameters(EnrichmentParametersT&& value) { m_enrichmentParametersHasBeenSet = true; m_enrichmentParameters = std::forward<EnrichmentParametersT>(value); }
    template<typename EnrichmentParametersT = PipeEnrichmentParameters>
    DescribePipeResult& WithEnrichmentParameters(EnrichmentParametersT&& value) { SetEnrichmentParameters(std::forward<EnrichmentParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the target resource.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    DescribePipeResult& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters required to set up a target for your pipe.</p> <p>For more
     * information about pipe target parameters, including how to use dynamic path
     * parameters, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes-event-target.html">Target
     * parameters</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline const PipeTargetParameters& GetTargetParameters() const { return m_targetParameters; }
    template<typename TargetParametersT = PipeTargetParameters>
    void SetTargetParameters(TargetParametersT&& value) { m_targetParametersHasBeenSet = true; m_targetParameters = std::forward<TargetParametersT>(value); }
    template<typename TargetParametersT = PipeTargetParameters>
    DescribePipeResult& WithTargetParameters(TargetParametersT&& value) { SetTargetParameters(std::forward<TargetParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that allows the pipe to send data to the target.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribePipeResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of key-value pairs to associate with the pipe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribePipeResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribePipeResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The time the pipe was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribePipeResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the pipe was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribePipeResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging configuration settings for the pipe.</p>
     */
    inline const PipeLogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
    template<typename LogConfigurationT = PipeLogConfiguration>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = PipeLogConfiguration>
    DescribePipeResult& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use to
     * encrypt pipe data, if one has been specified.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-encryption.html">Data
     * encryption in EventBridge</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
    template<typename KmsKeyIdentifierT = Aws::String>
    void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value); }
    template<typename KmsKeyIdentifierT = Aws::String>
    DescribePipeResult& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) { SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePipeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    RequestedPipeStateDescribeResponse m_desiredState{RequestedPipeStateDescribeResponse::NOT_SET};
    bool m_desiredStateHasBeenSet = false;

    PipeState m_currentState{PipeState::NOT_SET};
    bool m_currentStateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    PipeSourceParameters m_sourceParameters;
    bool m_sourceParametersHasBeenSet = false;

    Aws::String m_enrichment;
    bool m_enrichmentHasBeenSet = false;

    PipeEnrichmentParameters m_enrichmentParameters;
    bool m_enrichmentParametersHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    PipeTargetParameters m_targetParameters;
    bool m_targetParametersHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    PipeLogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
