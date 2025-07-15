/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The summary of the pipeline version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PipelineVersionSummary">AWS
   * API Reference</a></p>
   */
  class PipelineVersionSummary
  {
  public:
    AWS_SAGEMAKER_API PipelineVersionSummary() = default;
    AWS_SAGEMAKER_API PipelineVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PipelineVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineArn() const { return m_pipelineArn; }
    inline bool PipelineArnHasBeenSet() const { return m_pipelineArnHasBeenSet; }
    template<typename PipelineArnT = Aws::String>
    void SetPipelineArn(PipelineArnT&& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = std::forward<PipelineArnT>(value); }
    template<typename PipelineArnT = Aws::String>
    PipelineVersionSummary& WithPipelineArn(PipelineArnT&& value) { SetPipelineArn(std::forward<PipelineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pipeline version.</p>
     */
    inline long long GetPipelineVersionId() const { return m_pipelineVersionId; }
    inline bool PipelineVersionIdHasBeenSet() const { return m_pipelineVersionIdHasBeenSet; }
    inline void SetPipelineVersionId(long long value) { m_pipelineVersionIdHasBeenSet = true; m_pipelineVersionId = value; }
    inline PipelineVersionSummary& WithPipelineVersionId(long long value) { SetPipelineVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the pipeline version.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    PipelineVersionSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the pipeline version.</p>
     */
    inline const Aws::String& GetPipelineVersionDescription() const { return m_pipelineVersionDescription; }
    inline bool PipelineVersionDescriptionHasBeenSet() const { return m_pipelineVersionDescriptionHasBeenSet; }
    template<typename PipelineVersionDescriptionT = Aws::String>
    void SetPipelineVersionDescription(PipelineVersionDescriptionT&& value) { m_pipelineVersionDescriptionHasBeenSet = true; m_pipelineVersionDescription = std::forward<PipelineVersionDescriptionT>(value); }
    template<typename PipelineVersionDescriptionT = Aws::String>
    PipelineVersionSummary& WithPipelineVersionDescription(PipelineVersionDescriptionT&& value) { SetPipelineVersionDescription(std::forward<PipelineVersionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the pipeline version.</p>
     */
    inline const Aws::String& GetPipelineVersionDisplayName() const { return m_pipelineVersionDisplayName; }
    inline bool PipelineVersionDisplayNameHasBeenSet() const { return m_pipelineVersionDisplayNameHasBeenSet; }
    template<typename PipelineVersionDisplayNameT = Aws::String>
    void SetPipelineVersionDisplayName(PipelineVersionDisplayNameT&& value) { m_pipelineVersionDisplayNameHasBeenSet = true; m_pipelineVersionDisplayName = std::forward<PipelineVersionDisplayNameT>(value); }
    template<typename PipelineVersionDisplayNameT = Aws::String>
    PipelineVersionSummary& WithPipelineVersionDisplayName(PipelineVersionDisplayNameT&& value) { SetPipelineVersionDisplayName(std::forward<PipelineVersionDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the most recent pipeline execution created
     * from this pipeline version.</p>
     */
    inline const Aws::String& GetLastExecutionPipelineExecutionArn() const { return m_lastExecutionPipelineExecutionArn; }
    inline bool LastExecutionPipelineExecutionArnHasBeenSet() const { return m_lastExecutionPipelineExecutionArnHasBeenSet; }
    template<typename LastExecutionPipelineExecutionArnT = Aws::String>
    void SetLastExecutionPipelineExecutionArn(LastExecutionPipelineExecutionArnT&& value) { m_lastExecutionPipelineExecutionArnHasBeenSet = true; m_lastExecutionPipelineExecutionArn = std::forward<LastExecutionPipelineExecutionArnT>(value); }
    template<typename LastExecutionPipelineExecutionArnT = Aws::String>
    PipelineVersionSummary& WithLastExecutionPipelineExecutionArn(LastExecutionPipelineExecutionArnT&& value) { SetLastExecutionPipelineExecutionArn(std::forward<LastExecutionPipelineExecutionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineArn;
    bool m_pipelineArnHasBeenSet = false;

    long long m_pipelineVersionId{0};
    bool m_pipelineVersionIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_pipelineVersionDescription;
    bool m_pipelineVersionDescriptionHasBeenSet = false;

    Aws::String m_pipelineVersionDisplayName;
    bool m_pipelineVersionDisplayNameHasBeenSet = false;

    Aws::String m_lastExecutionPipelineExecutionArn;
    bool m_lastExecutionPipelineExecutionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
