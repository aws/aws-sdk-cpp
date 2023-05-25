/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ParallelismConfiguration.h>
#include <aws/sagemaker/model/Parameter.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class StartPipelineExecutionRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API StartPipelineExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartPipelineExecution"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline StartPipelineExecutionRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline StartPipelineExecutionRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline StartPipelineExecutionRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionDisplayName() const{ return m_pipelineExecutionDisplayName; }

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline bool PipelineExecutionDisplayNameHasBeenSet() const { return m_pipelineExecutionDisplayNameHasBeenSet; }

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDisplayName(const Aws::String& value) { m_pipelineExecutionDisplayNameHasBeenSet = true; m_pipelineExecutionDisplayName = value; }

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDisplayName(Aws::String&& value) { m_pipelineExecutionDisplayNameHasBeenSet = true; m_pipelineExecutionDisplayName = std::move(value); }

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDisplayName(const char* value) { m_pipelineExecutionDisplayNameHasBeenSet = true; m_pipelineExecutionDisplayName.assign(value); }

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline StartPipelineExecutionRequest& WithPipelineExecutionDisplayName(const Aws::String& value) { SetPipelineExecutionDisplayName(value); return *this;}

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline StartPipelineExecutionRequest& WithPipelineExecutionDisplayName(Aws::String&& value) { SetPipelineExecutionDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline StartPipelineExecutionRequest& WithPipelineExecutionDisplayName(const char* value) { SetPipelineExecutionDisplayName(value); return *this;}


    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline const Aws::Vector<Parameter>& GetPipelineParameters() const{ return m_pipelineParameters; }

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline bool PipelineParametersHasBeenSet() const { return m_pipelineParametersHasBeenSet; }

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline void SetPipelineParameters(const Aws::Vector<Parameter>& value) { m_pipelineParametersHasBeenSet = true; m_pipelineParameters = value; }

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline void SetPipelineParameters(Aws::Vector<Parameter>&& value) { m_pipelineParametersHasBeenSet = true; m_pipelineParameters = std::move(value); }

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline StartPipelineExecutionRequest& WithPipelineParameters(const Aws::Vector<Parameter>& value) { SetPipelineParameters(value); return *this;}

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline StartPipelineExecutionRequest& WithPipelineParameters(Aws::Vector<Parameter>&& value) { SetPipelineParameters(std::move(value)); return *this;}

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline StartPipelineExecutionRequest& AddPipelineParameters(const Parameter& value) { m_pipelineParametersHasBeenSet = true; m_pipelineParameters.push_back(value); return *this; }

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline StartPipelineExecutionRequest& AddPipelineParameters(Parameter&& value) { m_pipelineParametersHasBeenSet = true; m_pipelineParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionDescription() const{ return m_pipelineExecutionDescription; }

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline bool PipelineExecutionDescriptionHasBeenSet() const { return m_pipelineExecutionDescriptionHasBeenSet; }

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDescription(const Aws::String& value) { m_pipelineExecutionDescriptionHasBeenSet = true; m_pipelineExecutionDescription = value; }

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDescription(Aws::String&& value) { m_pipelineExecutionDescriptionHasBeenSet = true; m_pipelineExecutionDescription = std::move(value); }

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDescription(const char* value) { m_pipelineExecutionDescriptionHasBeenSet = true; m_pipelineExecutionDescription.assign(value); }

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline StartPipelineExecutionRequest& WithPipelineExecutionDescription(const Aws::String& value) { SetPipelineExecutionDescription(value); return *this;}

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline StartPipelineExecutionRequest& WithPipelineExecutionDescription(Aws::String&& value) { SetPipelineExecutionDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline StartPipelineExecutionRequest& WithPipelineExecutionDescription(const char* value) { SetPipelineExecutionDescription(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once.</p>
     */
    inline StartPipelineExecutionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once.</p>
     */
    inline StartPipelineExecutionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once.</p>
     */
    inline StartPipelineExecutionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>This configuration, if specified, overrides the parallelism configuration of
     * the parent pipeline for this specific run.</p>
     */
    inline const ParallelismConfiguration& GetParallelismConfiguration() const{ return m_parallelismConfiguration; }

    /**
     * <p>This configuration, if specified, overrides the parallelism configuration of
     * the parent pipeline for this specific run.</p>
     */
    inline bool ParallelismConfigurationHasBeenSet() const { return m_parallelismConfigurationHasBeenSet; }

    /**
     * <p>This configuration, if specified, overrides the parallelism configuration of
     * the parent pipeline for this specific run.</p>
     */
    inline void SetParallelismConfiguration(const ParallelismConfiguration& value) { m_parallelismConfigurationHasBeenSet = true; m_parallelismConfiguration = value; }

    /**
     * <p>This configuration, if specified, overrides the parallelism configuration of
     * the parent pipeline for this specific run.</p>
     */
    inline void SetParallelismConfiguration(ParallelismConfiguration&& value) { m_parallelismConfigurationHasBeenSet = true; m_parallelismConfiguration = std::move(value); }

    /**
     * <p>This configuration, if specified, overrides the parallelism configuration of
     * the parent pipeline for this specific run.</p>
     */
    inline StartPipelineExecutionRequest& WithParallelismConfiguration(const ParallelismConfiguration& value) { SetParallelismConfiguration(value); return *this;}

    /**
     * <p>This configuration, if specified, overrides the parallelism configuration of
     * the parent pipeline for this specific run.</p>
     */
    inline StartPipelineExecutionRequest& WithParallelismConfiguration(ParallelismConfiguration&& value) { SetParallelismConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    Aws::String m_pipelineExecutionDisplayName;
    bool m_pipelineExecutionDisplayNameHasBeenSet = false;

    Aws::Vector<Parameter> m_pipelineParameters;
    bool m_pipelineParametersHasBeenSet = false;

    Aws::String m_pipelineExecutionDescription;
    bool m_pipelineExecutionDescriptionHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    ParallelismConfiguration m_parallelismConfiguration;
    bool m_parallelismConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
