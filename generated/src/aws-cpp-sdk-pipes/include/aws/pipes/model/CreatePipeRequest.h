/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/PipesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/RequestedPipeState.h>
#include <aws/pipes/model/PipeSourceParameters.h>
#include <aws/pipes/model/PipeEnrichmentParameters.h>
#include <aws/pipes/model/PipeTargetParameters.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pipes/model/PipeLogConfigurationParameters.h>
#include <utility>

namespace Aws
{
namespace Pipes
{
namespace Model
{

  /**
   */
  class CreatePipeRequest : public PipesRequest
  {
  public:
    AWS_PIPES_API CreatePipeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePipe"; }

    AWS_PIPES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the pipe.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreatePipeRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the pipe.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreatePipeRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state the pipe should be in.</p>
     */
    inline RequestedPipeState GetDesiredState() const { return m_desiredState; }
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }
    inline void SetDesiredState(RequestedPipeState value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }
    inline CreatePipeRequest& WithDesiredState(RequestedPipeState value) { SetDesiredState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the source resource.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    CreatePipeRequest& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters required to set up a source for your pipe.</p>
     */
    inline const PipeSourceParameters& GetSourceParameters() const { return m_sourceParameters; }
    inline bool SourceParametersHasBeenSet() const { return m_sourceParametersHasBeenSet; }
    template<typename SourceParametersT = PipeSourceParameters>
    void SetSourceParameters(SourceParametersT&& value) { m_sourceParametersHasBeenSet = true; m_sourceParameters = std::forward<SourceParametersT>(value); }
    template<typename SourceParametersT = PipeSourceParameters>
    CreatePipeRequest& WithSourceParameters(SourceParametersT&& value) { SetSourceParameters(std::forward<SourceParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the enrichment resource.</p>
     */
    inline const Aws::String& GetEnrichment() const { return m_enrichment; }
    inline bool EnrichmentHasBeenSet() const { return m_enrichmentHasBeenSet; }
    template<typename EnrichmentT = Aws::String>
    void SetEnrichment(EnrichmentT&& value) { m_enrichmentHasBeenSet = true; m_enrichment = std::forward<EnrichmentT>(value); }
    template<typename EnrichmentT = Aws::String>
    CreatePipeRequest& WithEnrichment(EnrichmentT&& value) { SetEnrichment(std::forward<EnrichmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters required to set up enrichment on your pipe.</p>
     */
    inline const PipeEnrichmentParameters& GetEnrichmentParameters() const { return m_enrichmentParameters; }
    inline bool EnrichmentParametersHasBeenSet() const { return m_enrichmentParametersHasBeenSet; }
    template<typename EnrichmentParametersT = PipeEnrichmentParameters>
    void SetEnrichmentParameters(EnrichmentParametersT&& value) { m_enrichmentParametersHasBeenSet = true; m_enrichmentParameters = std::forward<EnrichmentParametersT>(value); }
    template<typename EnrichmentParametersT = PipeEnrichmentParameters>
    CreatePipeRequest& WithEnrichmentParameters(EnrichmentParametersT&& value) { SetEnrichmentParameters(std::forward<EnrichmentParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the target resource.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    CreatePipeRequest& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
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
    inline bool TargetParametersHasBeenSet() const { return m_targetParametersHasBeenSet; }
    template<typename TargetParametersT = PipeTargetParameters>
    void SetTargetParameters(TargetParametersT&& value) { m_targetParametersHasBeenSet = true; m_targetParameters = std::forward<TargetParametersT>(value); }
    template<typename TargetParametersT = PipeTargetParameters>
    CreatePipeRequest& WithTargetParameters(TargetParametersT&& value) { SetTargetParameters(std::forward<TargetParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that allows the pipe to send data to the target.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreatePipeRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of key-value pairs to associate with the pipe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreatePipeRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreatePipeRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The logging configuration settings for the pipe.</p>
     */
    inline const PipeLogConfigurationParameters& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = PipeLogConfigurationParameters>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = PipeLogConfigurationParameters>
    CreatePipeRequest& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use, if you
     * choose to use a customer managed key to encrypt pipe data. The identifier can be
     * the key Amazon Resource Name (ARN), KeyId, key alias, or key alias ARN.</p>
     * <p>If you do not specify a customer managed key identifier, EventBridge uses an
     * Amazon Web Services owned key to encrypt pipe data.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/getting-started.html">Managing
     * keys</a> in the <i>Key Management Service Developer Guide</i>. </p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
    inline bool KmsKeyIdentifierHasBeenSet() const { return m_kmsKeyIdentifierHasBeenSet; }
    template<typename KmsKeyIdentifierT = Aws::String>
    void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value); }
    template<typename KmsKeyIdentifierT = Aws::String>
    CreatePipeRequest& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) { SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    RequestedPipeState m_desiredState{RequestedPipeState::NOT_SET};
    bool m_desiredStateHasBeenSet = false;

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

    PipeLogConfigurationParameters m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
