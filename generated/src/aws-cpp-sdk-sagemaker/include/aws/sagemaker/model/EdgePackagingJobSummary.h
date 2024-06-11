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
    AWS_SAGEMAKER_API EdgePackagingJobSummary();
    AWS_SAGEMAKER_API EdgePackagingJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EdgePackagingJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the edge packaging job.</p>
     */
    inline const Aws::String& GetEdgePackagingJobArn() const{ return m_edgePackagingJobArn; }
    inline bool EdgePackagingJobArnHasBeenSet() const { return m_edgePackagingJobArnHasBeenSet; }
    inline void SetEdgePackagingJobArn(const Aws::String& value) { m_edgePackagingJobArnHasBeenSet = true; m_edgePackagingJobArn = value; }
    inline void SetEdgePackagingJobArn(Aws::String&& value) { m_edgePackagingJobArnHasBeenSet = true; m_edgePackagingJobArn = std::move(value); }
    inline void SetEdgePackagingJobArn(const char* value) { m_edgePackagingJobArnHasBeenSet = true; m_edgePackagingJobArn.assign(value); }
    inline EdgePackagingJobSummary& WithEdgePackagingJobArn(const Aws::String& value) { SetEdgePackagingJobArn(value); return *this;}
    inline EdgePackagingJobSummary& WithEdgePackagingJobArn(Aws::String&& value) { SetEdgePackagingJobArn(std::move(value)); return *this;}
    inline EdgePackagingJobSummary& WithEdgePackagingJobArn(const char* value) { SetEdgePackagingJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline const Aws::String& GetEdgePackagingJobName() const{ return m_edgePackagingJobName; }
    inline bool EdgePackagingJobNameHasBeenSet() const { return m_edgePackagingJobNameHasBeenSet; }
    inline void SetEdgePackagingJobName(const Aws::String& value) { m_edgePackagingJobNameHasBeenSet = true; m_edgePackagingJobName = value; }
    inline void SetEdgePackagingJobName(Aws::String&& value) { m_edgePackagingJobNameHasBeenSet = true; m_edgePackagingJobName = std::move(value); }
    inline void SetEdgePackagingJobName(const char* value) { m_edgePackagingJobNameHasBeenSet = true; m_edgePackagingJobName.assign(value); }
    inline EdgePackagingJobSummary& WithEdgePackagingJobName(const Aws::String& value) { SetEdgePackagingJobName(value); return *this;}
    inline EdgePackagingJobSummary& WithEdgePackagingJobName(Aws::String&& value) { SetEdgePackagingJobName(std::move(value)); return *this;}
    inline EdgePackagingJobSummary& WithEdgePackagingJobName(const char* value) { SetEdgePackagingJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the edge packaging job.</p>
     */
    inline const EdgePackagingJobStatus& GetEdgePackagingJobStatus() const{ return m_edgePackagingJobStatus; }
    inline bool EdgePackagingJobStatusHasBeenSet() const { return m_edgePackagingJobStatusHasBeenSet; }
    inline void SetEdgePackagingJobStatus(const EdgePackagingJobStatus& value) { m_edgePackagingJobStatusHasBeenSet = true; m_edgePackagingJobStatus = value; }
    inline void SetEdgePackagingJobStatus(EdgePackagingJobStatus&& value) { m_edgePackagingJobStatusHasBeenSet = true; m_edgePackagingJobStatus = std::move(value); }
    inline EdgePackagingJobSummary& WithEdgePackagingJobStatus(const EdgePackagingJobStatus& value) { SetEdgePackagingJobStatus(value); return *this;}
    inline EdgePackagingJobSummary& WithEdgePackagingJobStatus(EdgePackagingJobStatus&& value) { SetEdgePackagingJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SageMaker Neo compilation job.</p>
     */
    inline const Aws::String& GetCompilationJobName() const{ return m_compilationJobName; }
    inline bool CompilationJobNameHasBeenSet() const { return m_compilationJobNameHasBeenSet; }
    inline void SetCompilationJobName(const Aws::String& value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName = value; }
    inline void SetCompilationJobName(Aws::String&& value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName = std::move(value); }
    inline void SetCompilationJobName(const char* value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName.assign(value); }
    inline EdgePackagingJobSummary& WithCompilationJobName(const Aws::String& value) { SetCompilationJobName(value); return *this;}
    inline EdgePackagingJobSummary& WithCompilationJobName(Aws::String&& value) { SetCompilationJobName(std::move(value)); return *this;}
    inline EdgePackagingJobSummary& WithCompilationJobName(const char* value) { SetCompilationJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }
    inline EdgePackagingJobSummary& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline EdgePackagingJobSummary& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline EdgePackagingJobSummary& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }
    inline EdgePackagingJobSummary& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}
    inline EdgePackagingJobSummary& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}
    inline EdgePackagingJobSummary& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline EdgePackagingJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline EdgePackagingJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the edge packaging job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline EdgePackagingJobSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline EdgePackagingJobSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_edgePackagingJobArn;
    bool m_edgePackagingJobArnHasBeenSet = false;

    Aws::String m_edgePackagingJobName;
    bool m_edgePackagingJobNameHasBeenSet = false;

    EdgePackagingJobStatus m_edgePackagingJobStatus;
    bool m_edgePackagingJobStatusHasBeenSet = false;

    Aws::String m_compilationJobName;
    bool m_compilationJobNameHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
