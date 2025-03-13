/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/EdgePackagingJobStatus.h>
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
   * <p>Summary of edge packaging job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EdgePackagingJobSummary">AWS
   * API Reference</a></p>
   */
  class EdgePackagingJobSummary
  {
  public:
    AWS_SAGEMAKER_API EdgePackagingJobSummary() = default;
    AWS_SAGEMAKER_API EdgePackagingJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EdgePackagingJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the edge packaging job.</p>
     */
    inline const Aws::String& GetEdgePackagingJobArn() const { return m_edgePackagingJobArn; }
    inline bool EdgePackagingJobArnHasBeenSet() const { return m_edgePackagingJobArnHasBeenSet; }
    template<typename EdgePackagingJobArnT = Aws::String>
    void SetEdgePackagingJobArn(EdgePackagingJobArnT&& value) { m_edgePackagingJobArnHasBeenSet = true; m_edgePackagingJobArn = std::forward<EdgePackagingJobArnT>(value); }
    template<typename EdgePackagingJobArnT = Aws::String>
    EdgePackagingJobSummary& WithEdgePackagingJobArn(EdgePackagingJobArnT&& value) { SetEdgePackagingJobArn(std::forward<EdgePackagingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline const Aws::String& GetEdgePackagingJobName() const { return m_edgePackagingJobName; }
    inline bool EdgePackagingJobNameHasBeenSet() const { return m_edgePackagingJobNameHasBeenSet; }
    template<typename EdgePackagingJobNameT = Aws::String>
    void SetEdgePackagingJobName(EdgePackagingJobNameT&& value) { m_edgePackagingJobNameHasBeenSet = true; m_edgePackagingJobName = std::forward<EdgePackagingJobNameT>(value); }
    template<typename EdgePackagingJobNameT = Aws::String>
    EdgePackagingJobSummary& WithEdgePackagingJobName(EdgePackagingJobNameT&& value) { SetEdgePackagingJobName(std::forward<EdgePackagingJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the edge packaging job.</p>
     */
    inline EdgePackagingJobStatus GetEdgePackagingJobStatus() const { return m_edgePackagingJobStatus; }
    inline bool EdgePackagingJobStatusHasBeenSet() const { return m_edgePackagingJobStatusHasBeenSet; }
    inline void SetEdgePackagingJobStatus(EdgePackagingJobStatus value) { m_edgePackagingJobStatusHasBeenSet = true; m_edgePackagingJobStatus = value; }
    inline EdgePackagingJobSummary& WithEdgePackagingJobStatus(EdgePackagingJobStatus value) { SetEdgePackagingJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SageMaker Neo compilation job.</p>
     */
    inline const Aws::String& GetCompilationJobName() const { return m_compilationJobName; }
    inline bool CompilationJobNameHasBeenSet() const { return m_compilationJobNameHasBeenSet; }
    template<typename CompilationJobNameT = Aws::String>
    void SetCompilationJobName(CompilationJobNameT&& value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName = std::forward<CompilationJobNameT>(value); }
    template<typename CompilationJobNameT = Aws::String>
    EdgePackagingJobSummary& WithCompilationJobName(CompilationJobNameT&& value) { SetCompilationJobName(std::forward<CompilationJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    EdgePackagingJobSummary& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model.</p>
     */
    inline const Aws::String& GetModelVersion() const { return m_modelVersion; }
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
    template<typename ModelVersionT = Aws::String>
    void SetModelVersion(ModelVersionT&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::forward<ModelVersionT>(value); }
    template<typename ModelVersionT = Aws::String>
    EdgePackagingJobSummary& WithModelVersion(ModelVersionT&& value) { SetModelVersion(std::forward<ModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    EdgePackagingJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the edge packaging job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    EdgePackagingJobSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_edgePackagingJobArn;
    bool m_edgePackagingJobArnHasBeenSet = false;

    Aws::String m_edgePackagingJobName;
    bool m_edgePackagingJobNameHasBeenSet = false;

    EdgePackagingJobStatus m_edgePackagingJobStatus{EdgePackagingJobStatus::NOT_SET};
    bool m_edgePackagingJobStatusHasBeenSet = false;

    Aws::String m_compilationJobName;
    bool m_compilationJobNameHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
