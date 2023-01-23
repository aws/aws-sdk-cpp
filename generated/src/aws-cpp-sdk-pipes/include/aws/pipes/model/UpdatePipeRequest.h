/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/PipesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/RequestedPipeState.h>
#include <aws/pipes/model/PipeEnrichmentParameters.h>
#include <aws/pipes/model/UpdatePipeSourceParameters.h>
#include <aws/pipes/model/PipeTargetParameters.h>
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


    /**
     * <p>A description of the pipe.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the pipe.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the pipe.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the pipe.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the pipe.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the pipe.</p>
     */
    inline UpdatePipeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the pipe.</p>
     */
    inline UpdatePipeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the pipe.</p>
     */
    inline UpdatePipeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The state the pipe should be in.</p>
     */
    inline const RequestedPipeState& GetDesiredState() const{ return m_desiredState; }

    /**
     * <p>The state the pipe should be in.</p>
     */
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }

    /**
     * <p>The state the pipe should be in.</p>
     */
    inline void SetDesiredState(const RequestedPipeState& value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }

    /**
     * <p>The state the pipe should be in.</p>
     */
    inline void SetDesiredState(RequestedPipeState&& value) { m_desiredStateHasBeenSet = true; m_desiredState = std::move(value); }

    /**
     * <p>The state the pipe should be in.</p>
     */
    inline UpdatePipeRequest& WithDesiredState(const RequestedPipeState& value) { SetDesiredState(value); return *this;}

    /**
     * <p>The state the pipe should be in.</p>
     */
    inline UpdatePipeRequest& WithDesiredState(RequestedPipeState&& value) { SetDesiredState(std::move(value)); return *this;}


    /**
     * <p>The ARN of the enrichment resource.</p>
     */
    inline const Aws::String& GetEnrichment() const{ return m_enrichment; }

    /**
     * <p>The ARN of the enrichment resource.</p>
     */
    inline bool EnrichmentHasBeenSet() const { return m_enrichmentHasBeenSet; }

    /**
     * <p>The ARN of the enrichment resource.</p>
     */
    inline void SetEnrichment(const Aws::String& value) { m_enrichmentHasBeenSet = true; m_enrichment = value; }

    /**
     * <p>The ARN of the enrichment resource.</p>
     */
    inline void SetEnrichment(Aws::String&& value) { m_enrichmentHasBeenSet = true; m_enrichment = std::move(value); }

    /**
     * <p>The ARN of the enrichment resource.</p>
     */
    inline void SetEnrichment(const char* value) { m_enrichmentHasBeenSet = true; m_enrichment.assign(value); }

    /**
     * <p>The ARN of the enrichment resource.</p>
     */
    inline UpdatePipeRequest& WithEnrichment(const Aws::String& value) { SetEnrichment(value); return *this;}

    /**
     * <p>The ARN of the enrichment resource.</p>
     */
    inline UpdatePipeRequest& WithEnrichment(Aws::String&& value) { SetEnrichment(std::move(value)); return *this;}

    /**
     * <p>The ARN of the enrichment resource.</p>
     */
    inline UpdatePipeRequest& WithEnrichment(const char* value) { SetEnrichment(value); return *this;}


    /**
     * <p>The parameters required to set up enrichment on your pipe.</p>
     */
    inline const PipeEnrichmentParameters& GetEnrichmentParameters() const{ return m_enrichmentParameters; }

    /**
     * <p>The parameters required to set up enrichment on your pipe.</p>
     */
    inline bool EnrichmentParametersHasBeenSet() const { return m_enrichmentParametersHasBeenSet; }

    /**
     * <p>The parameters required to set up enrichment on your pipe.</p>
     */
    inline void SetEnrichmentParameters(const PipeEnrichmentParameters& value) { m_enrichmentParametersHasBeenSet = true; m_enrichmentParameters = value; }

    /**
     * <p>The parameters required to set up enrichment on your pipe.</p>
     */
    inline void SetEnrichmentParameters(PipeEnrichmentParameters&& value) { m_enrichmentParametersHasBeenSet = true; m_enrichmentParameters = std::move(value); }

    /**
     * <p>The parameters required to set up enrichment on your pipe.</p>
     */
    inline UpdatePipeRequest& WithEnrichmentParameters(const PipeEnrichmentParameters& value) { SetEnrichmentParameters(value); return *this;}

    /**
     * <p>The parameters required to set up enrichment on your pipe.</p>
     */
    inline UpdatePipeRequest& WithEnrichmentParameters(PipeEnrichmentParameters&& value) { SetEnrichmentParameters(std::move(value)); return *this;}


    /**
     * <p>The name of the pipe.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the pipe.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the pipe.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the pipe.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the pipe.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the pipe.</p>
     */
    inline UpdatePipeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pipe.</p>
     */
    inline UpdatePipeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipe.</p>
     */
    inline UpdatePipeRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the role that allows the pipe to send data to the target.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role that allows the pipe to send data to the target.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the role that allows the pipe to send data to the target.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the role that allows the pipe to send data to the target.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role that allows the pipe to send data to the target.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role that allows the pipe to send data to the target.</p>
     */
    inline UpdatePipeRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that allows the pipe to send data to the target.</p>
     */
    inline UpdatePipeRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that allows the pipe to send data to the target.</p>
     */
    inline UpdatePipeRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The parameters required to set up a source for your pipe.</p>
     */
    inline const UpdatePipeSourceParameters& GetSourceParameters() const{ return m_sourceParameters; }

    /**
     * <p>The parameters required to set up a source for your pipe.</p>
     */
    inline bool SourceParametersHasBeenSet() const { return m_sourceParametersHasBeenSet; }

    /**
     * <p>The parameters required to set up a source for your pipe.</p>
     */
    inline void SetSourceParameters(const UpdatePipeSourceParameters& value) { m_sourceParametersHasBeenSet = true; m_sourceParameters = value; }

    /**
     * <p>The parameters required to set up a source for your pipe.</p>
     */
    inline void SetSourceParameters(UpdatePipeSourceParameters&& value) { m_sourceParametersHasBeenSet = true; m_sourceParameters = std::move(value); }

    /**
     * <p>The parameters required to set up a source for your pipe.</p>
     */
    inline UpdatePipeRequest& WithSourceParameters(const UpdatePipeSourceParameters& value) { SetSourceParameters(value); return *this;}

    /**
     * <p>The parameters required to set up a source for your pipe.</p>
     */
    inline UpdatePipeRequest& WithSourceParameters(UpdatePipeSourceParameters&& value) { SetSourceParameters(std::move(value)); return *this;}


    /**
     * <p>The ARN of the target resource.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The ARN of the target resource.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The ARN of the target resource.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The ARN of the target resource.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The ARN of the target resource.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The ARN of the target resource.</p>
     */
    inline UpdatePipeRequest& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The ARN of the target resource.</p>
     */
    inline UpdatePipeRequest& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The ARN of the target resource.</p>
     */
    inline UpdatePipeRequest& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>The parameters required to set up a target for your pipe.</p>
     */
    inline const PipeTargetParameters& GetTargetParameters() const{ return m_targetParameters; }

    /**
     * <p>The parameters required to set up a target for your pipe.</p>
     */
    inline bool TargetParametersHasBeenSet() const { return m_targetParametersHasBeenSet; }

    /**
     * <p>The parameters required to set up a target for your pipe.</p>
     */
    inline void SetTargetParameters(const PipeTargetParameters& value) { m_targetParametersHasBeenSet = true; m_targetParameters = value; }

    /**
     * <p>The parameters required to set up a target for your pipe.</p>
     */
    inline void SetTargetParameters(PipeTargetParameters&& value) { m_targetParametersHasBeenSet = true; m_targetParameters = std::move(value); }

    /**
     * <p>The parameters required to set up a target for your pipe.</p>
     */
    inline UpdatePipeRequest& WithTargetParameters(const PipeTargetParameters& value) { SetTargetParameters(value); return *this;}

    /**
     * <p>The parameters required to set up a target for your pipe.</p>
     */
    inline UpdatePipeRequest& WithTargetParameters(PipeTargetParameters&& value) { SetTargetParameters(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    RequestedPipeState m_desiredState;
    bool m_desiredStateHasBeenSet = false;

    Aws::String m_enrichment;
    bool m_enrichmentHasBeenSet = false;

    PipeEnrichmentParameters m_enrichmentParameters;
    bool m_enrichmentParametersHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    UpdatePipeSourceParameters m_sourceParameters;
    bool m_sourceParametersHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    PipeTargetParameters m_targetParameters;
    bool m_targetParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
