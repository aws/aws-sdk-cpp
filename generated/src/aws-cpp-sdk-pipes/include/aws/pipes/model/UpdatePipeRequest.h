/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/PipesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/RequestedPipeState.h>
#include <aws/pipes/model/UpdatePipeSourceParameters.h>
#include <aws/pipes/model/PipeEnrichmentParameters.h>
#include <aws/pipes/model/PipeTargetParameters.h>
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
  class UpdatePipeRequest : public PipesRequest
  {
  public:
    AWS_PIPES_API UpdatePipeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePipe"; }

    AWS_PIPES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the pipe.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdatePipeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdatePipeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdatePipeRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the pipe.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdatePipeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdatePipeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdatePipeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state the pipe should be in.</p>
     */
    inline const RequestedPipeState& GetDesiredState() const{ return m_desiredState; }
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }
    inline void SetDesiredState(const RequestedPipeState& value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }
    inline void SetDesiredState(RequestedPipeState&& value) { m_desiredStateHasBeenSet = true; m_desiredState = std::move(value); }
    inline UpdatePipeRequest& WithDesiredState(const RequestedPipeState& value) { SetDesiredState(value); return *this;}
    inline UpdatePipeRequest& WithDesiredState(RequestedPipeState&& value) { SetDesiredState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters required to set up a source for your pipe.</p>
     */
    inline const UpdatePipeSourceParameters& GetSourceParameters() const{ return m_sourceParameters; }
    inline bool SourceParametersHasBeenSet() const { return m_sourceParametersHasBeenSet; }
    inline void SetSourceParameters(const UpdatePipeSourceParameters& value) { m_sourceParametersHasBeenSet = true; m_sourceParameters = value; }
    inline void SetSourceParameters(UpdatePipeSourceParameters&& value) { m_sourceParametersHasBeenSet = true; m_sourceParameters = std::move(value); }
    inline UpdatePipeRequest& WithSourceParameters(const UpdatePipeSourceParameters& value) { SetSourceParameters(value); return *this;}
    inline UpdatePipeRequest& WithSourceParameters(UpdatePipeSourceParameters&& value) { SetSourceParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the enrichment resource.</p>
     */
    inline const Aws::String& GetEnrichment() const{ return m_enrichment; }
    inline bool EnrichmentHasBeenSet() const { return m_enrichmentHasBeenSet; }
    inline void SetEnrichment(const Aws::String& value) { m_enrichmentHasBeenSet = true; m_enrichment = value; }
    inline void SetEnrichment(Aws::String&& value) { m_enrichmentHasBeenSet = true; m_enrichment = std::move(value); }
    inline void SetEnrichment(const char* value) { m_enrichmentHasBeenSet = true; m_enrichment.assign(value); }
    inline UpdatePipeRequest& WithEnrichment(const Aws::String& value) { SetEnrichment(value); return *this;}
    inline UpdatePipeRequest& WithEnrichment(Aws::String&& value) { SetEnrichment(std::move(value)); return *this;}
    inline UpdatePipeRequest& WithEnrichment(const char* value) { SetEnrichment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters required to set up enrichment on your pipe.</p>
     */
    inline const PipeEnrichmentParameters& GetEnrichmentParameters() const{ return m_enrichmentParameters; }
    inline bool EnrichmentParametersHasBeenSet() const { return m_enrichmentParametersHasBeenSet; }
    inline void SetEnrichmentParameters(const PipeEnrichmentParameters& value) { m_enrichmentParametersHasBeenSet = true; m_enrichmentParameters = value; }
    inline void SetEnrichmentParameters(PipeEnrichmentParameters&& value) { m_enrichmentParametersHasBeenSet = true; m_enrichmentParameters = std::move(value); }
    inline UpdatePipeRequest& WithEnrichmentParameters(const PipeEnrichmentParameters& value) { SetEnrichmentParameters(value); return *this;}
    inline UpdatePipeRequest& WithEnrichmentParameters(PipeEnrichmentParameters&& value) { SetEnrichmentParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the target resource.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }
    inline UpdatePipeRequest& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}
    inline UpdatePipeRequest& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}
    inline UpdatePipeRequest& WithTarget(const char* value) { SetTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters required to set up a target for your pipe.</p> <p>For more
     * information about pipe target parameters, including how to use dynamic path
     * parameters, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes-event-target.html">Target
     * parameters</a> in the <i>Amazon EventBridge User Guide</i>.</p>
     */
    inline const PipeTargetParameters& GetTargetParameters() const{ return m_targetParameters; }
    inline bool TargetParametersHasBeenSet() const { return m_targetParametersHasBeenSet; }
    inline void SetTargetParameters(const PipeTargetParameters& value) { m_targetParametersHasBeenSet = true; m_targetParameters = value; }
    inline void SetTargetParameters(PipeTargetParameters&& value) { m_targetParametersHasBeenSet = true; m_targetParameters = std::move(value); }
    inline UpdatePipeRequest& WithTargetParameters(const PipeTargetParameters& value) { SetTargetParameters(value); return *this;}
    inline UpdatePipeRequest& WithTargetParameters(PipeTargetParameters&& value) { SetTargetParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that allows the pipe to send data to the target.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline UpdatePipeRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline UpdatePipeRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline UpdatePipeRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging configuration settings for the pipe.</p>
     */
    inline const PipeLogConfigurationParameters& GetLogConfiguration() const{ return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    inline void SetLogConfiguration(const PipeLogConfigurationParameters& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }
    inline void SetLogConfiguration(PipeLogConfigurationParameters&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }
    inline UpdatePipeRequest& WithLogConfiguration(const PipeLogConfigurationParameters& value) { SetLogConfiguration(value); return *this;}
    inline UpdatePipeRequest& WithLogConfiguration(PipeLogConfigurationParameters&& value) { SetLogConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS customer managed key for EventBridge to use, if you
     * choose to use a customer managed key to encrypt pipe data. The identifier can be
     * the key Amazon Resource Name (ARN), KeyId, key alias, or key alias ARN.</p>
     * <p>To update a pipe that is using the default Amazon Web Services owned key to
     * use a customer managed key instead, or update a pipe that is using a customer
     * managed key to use a different customer managed key, specify a customer managed
     * key identifier.</p> <p>To update a pipe that is using a customer managed key to
     * use the default Amazon Web Services owned key, specify an empty string.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/getting-started.html">Managing
     * keys</a> in the <i>Key Management Service Developer Guide</i>. </p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const{ return m_kmsKeyIdentifier; }
    inline bool KmsKeyIdentifierHasBeenSet() const { return m_kmsKeyIdentifierHasBeenSet; }
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = value; }
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::move(value); }
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier.assign(value); }
    inline UpdatePipeRequest& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}
    inline UpdatePipeRequest& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}
    inline UpdatePipeRequest& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    RequestedPipeState m_desiredState;
    bool m_desiredStateHasBeenSet = false;

    UpdatePipeSourceParameters m_sourceParameters;
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

    PipeLogConfigurationParameters m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
