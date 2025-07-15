/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/sagemaker/model/PipelineExecutionStatus.h>
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
   * <p>The version of the pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PipelineVersion">AWS
   * API Reference</a></p>
   */
  class PipelineVersion
  {
  public:
    AWS_SAGEMAKER_API PipelineVersion() = default;
    AWS_SAGEMAKER_API PipelineVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PipelineVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    PipelineVersion& WithPipelineArn(PipelineArnT&& value) { SetPipelineArn(std::forward<PipelineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pipeline version.</p>
     */
    inline long long GetPipelineVersionId() const { return m_pipelineVersionId; }
    inline bool PipelineVersionIdHasBeenSet() const { return m_pipelineVersionIdHasBeenSet; }
    inline void SetPipelineVersionId(long long value) { m_pipelineVersionIdHasBeenSet = true; m_pipelineVersionId = value; }
    inline PipelineVersion& WithPipelineVersionId(long long value) { SetPipelineVersionId(value); return *this;}
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
    PipelineVersion& WithPipelineVersionDisplayName(PipelineVersionDisplayNameT&& value) { SetPipelineVersionDisplayName(std::forward<PipelineVersionDisplayNameT>(value)); return *this;}
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
    PipelineVersion& WithPipelineVersionDescription(PipelineVersionDescriptionT&& value) { SetPipelineVersionDescription(std::forward<PipelineVersionDescriptionT>(value)); return *this;}
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
    PipelineVersion& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the pipeline version was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    PipelineVersion& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = UserContext>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = UserContext>
    PipelineVersion& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const { return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    template<typename LastModifiedByT = UserContext>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = UserContext>
    PipelineVersion& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the most recent pipeline execution created
     * from this pipeline version.</p>
     */
    inline const Aws::String& GetLastExecutedPipelineExecutionArn() const { return m_lastExecutedPipelineExecutionArn; }
    inline bool LastExecutedPipelineExecutionArnHasBeenSet() const { return m_lastExecutedPipelineExecutionArnHasBeenSet; }
    template<typename LastExecutedPipelineExecutionArnT = Aws::String>
    void SetLastExecutedPipelineExecutionArn(LastExecutedPipelineExecutionArnT&& value) { m_lastExecutedPipelineExecutionArnHasBeenSet = true; m_lastExecutedPipelineExecutionArn = std::forward<LastExecutedPipelineExecutionArnT>(value); }
    template<typename LastExecutedPipelineExecutionArnT = Aws::String>
    PipelineVersion& WithLastExecutedPipelineExecutionArn(LastExecutedPipelineExecutionArnT&& value) { SetLastExecutedPipelineExecutionArn(std::forward<LastExecutedPipelineExecutionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the most recent pipeline execution created from this
     * pipeline version.</p>
     */
    inline const Aws::String& GetLastExecutedPipelineExecutionDisplayName() const { return m_lastExecutedPipelineExecutionDisplayName; }
    inline bool LastExecutedPipelineExecutionDisplayNameHasBeenSet() const { return m_lastExecutedPipelineExecutionDisplayNameHasBeenSet; }
    template<typename LastExecutedPipelineExecutionDisplayNameT = Aws::String>
    void SetLastExecutedPipelineExecutionDisplayName(LastExecutedPipelineExecutionDisplayNameT&& value) { m_lastExecutedPipelineExecutionDisplayNameHasBeenSet = true; m_lastExecutedPipelineExecutionDisplayName = std::forward<LastExecutedPipelineExecutionDisplayNameT>(value); }
    template<typename LastExecutedPipelineExecutionDisplayNameT = Aws::String>
    PipelineVersion& WithLastExecutedPipelineExecutionDisplayName(LastExecutedPipelineExecutionDisplayNameT&& value) { SetLastExecutedPipelineExecutionDisplayName(std::forward<LastExecutedPipelineExecutionDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the most recent pipeline execution created from this pipeline
     * version.</p>
     */
    inline PipelineExecutionStatus GetLastExecutedPipelineExecutionStatus() const { return m_lastExecutedPipelineExecutionStatus; }
    inline bool LastExecutedPipelineExecutionStatusHasBeenSet() const { return m_lastExecutedPipelineExecutionStatusHasBeenSet; }
    inline void SetLastExecutedPipelineExecutionStatus(PipelineExecutionStatus value) { m_lastExecutedPipelineExecutionStatusHasBeenSet = true; m_lastExecutedPipelineExecutionStatus = value; }
    inline PipelineVersion& WithLastExecutedPipelineExecutionStatus(PipelineExecutionStatus value) { SetLastExecutedPipelineExecutionStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_pipelineArn;
    bool m_pipelineArnHasBeenSet = false;

    long long m_pipelineVersionId{0};
    bool m_pipelineVersionIdHasBeenSet = false;

    Aws::String m_pipelineVersionDisplayName;
    bool m_pipelineVersionDisplayNameHasBeenSet = false;

    Aws::String m_pipelineVersionDescription;
    bool m_pipelineVersionDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    UserContext m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::String m_lastExecutedPipelineExecutionArn;
    bool m_lastExecutedPipelineExecutionArnHasBeenSet = false;

    Aws::String m_lastExecutedPipelineExecutionDisplayName;
    bool m_lastExecutedPipelineExecutionDisplayNameHasBeenSet = false;

    PipelineExecutionStatus m_lastExecutedPipelineExecutionStatus{PipelineExecutionStatus::NOT_SET};
    bool m_lastExecutedPipelineExecutionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
