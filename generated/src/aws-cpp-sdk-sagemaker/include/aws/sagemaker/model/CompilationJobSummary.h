/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/TargetDevice.h>
#include <aws/sagemaker/model/TargetPlatformOs.h>
#include <aws/sagemaker/model/TargetPlatformArch.h>
#include <aws/sagemaker/model/TargetPlatformAccelerator.h>
#include <aws/sagemaker/model/CompilationJobStatus.h>
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
   * <p>A summary of a model compilation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CompilationJobSummary">AWS
   * API Reference</a></p>
   */
  class CompilationJobSummary
  {
  public:
    AWS_SAGEMAKER_API CompilationJobSummary() = default;
    AWS_SAGEMAKER_API CompilationJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CompilationJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the model compilation job that you want a summary for.</p>
     */
    inline const Aws::String& GetCompilationJobName() const { return m_compilationJobName; }
    inline bool CompilationJobNameHasBeenSet() const { return m_compilationJobNameHasBeenSet; }
    template<typename CompilationJobNameT = Aws::String>
    void SetCompilationJobName(CompilationJobNameT&& value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName = std::forward<CompilationJobNameT>(value); }
    template<typename CompilationJobNameT = Aws::String>
    CompilationJobSummary& WithCompilationJobName(CompilationJobNameT&& value) { SetCompilationJobName(std::forward<CompilationJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model compilation job.</p>
     */
    inline const Aws::String& GetCompilationJobArn() const { return m_compilationJobArn; }
    inline bool CompilationJobArnHasBeenSet() const { return m_compilationJobArnHasBeenSet; }
    template<typename CompilationJobArnT = Aws::String>
    void SetCompilationJobArn(CompilationJobArnT&& value) { m_compilationJobArnHasBeenSet = true; m_compilationJobArn = std::forward<CompilationJobArnT>(value); }
    template<typename CompilationJobArnT = Aws::String>
    CompilationJobSummary& WithCompilationJobArn(CompilationJobArnT&& value) { SetCompilationJobArn(std::forward<CompilationJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the model compilation job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    CompilationJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the model compilation job started.</p>
     */
    inline const Aws::Utils::DateTime& GetCompilationStartTime() const { return m_compilationStartTime; }
    inline bool CompilationStartTimeHasBeenSet() const { return m_compilationStartTimeHasBeenSet; }
    template<typename CompilationStartTimeT = Aws::Utils::DateTime>
    void SetCompilationStartTime(CompilationStartTimeT&& value) { m_compilationStartTimeHasBeenSet = true; m_compilationStartTime = std::forward<CompilationStartTimeT>(value); }
    template<typename CompilationStartTimeT = Aws::Utils::DateTime>
    CompilationJobSummary& WithCompilationStartTime(CompilationStartTimeT&& value) { SetCompilationStartTime(std::forward<CompilationStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the model compilation job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompilationEndTime() const { return m_compilationEndTime; }
    inline bool CompilationEndTimeHasBeenSet() const { return m_compilationEndTimeHasBeenSet; }
    template<typename CompilationEndTimeT = Aws::Utils::DateTime>
    void SetCompilationEndTime(CompilationEndTimeT&& value) { m_compilationEndTimeHasBeenSet = true; m_compilationEndTime = std::forward<CompilationEndTimeT>(value); }
    template<typename CompilationEndTimeT = Aws::Utils::DateTime>
    CompilationJobSummary& WithCompilationEndTime(CompilationEndTimeT&& value) { SetCompilationEndTime(std::forward<CompilationEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of device that the model will run on after the compilation job has
     * completed.</p>
     */
    inline TargetDevice GetCompilationTargetDevice() const { return m_compilationTargetDevice; }
    inline bool CompilationTargetDeviceHasBeenSet() const { return m_compilationTargetDeviceHasBeenSet; }
    inline void SetCompilationTargetDevice(TargetDevice value) { m_compilationTargetDeviceHasBeenSet = true; m_compilationTargetDevice = value; }
    inline CompilationJobSummary& WithCompilationTargetDevice(TargetDevice value) { SetCompilationTargetDevice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of OS that the model will run on after the compilation job has
     * completed.</p>
     */
    inline TargetPlatformOs GetCompilationTargetPlatformOs() const { return m_compilationTargetPlatformOs; }
    inline bool CompilationTargetPlatformOsHasBeenSet() const { return m_compilationTargetPlatformOsHasBeenSet; }
    inline void SetCompilationTargetPlatformOs(TargetPlatformOs value) { m_compilationTargetPlatformOsHasBeenSet = true; m_compilationTargetPlatformOs = value; }
    inline CompilationJobSummary& WithCompilationTargetPlatformOs(TargetPlatformOs value) { SetCompilationTargetPlatformOs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of architecture that the model will run on after the compilation job
     * has completed.</p>
     */
    inline TargetPlatformArch GetCompilationTargetPlatformArch() const { return m_compilationTargetPlatformArch; }
    inline bool CompilationTargetPlatformArchHasBeenSet() const { return m_compilationTargetPlatformArchHasBeenSet; }
    inline void SetCompilationTargetPlatformArch(TargetPlatformArch value) { m_compilationTargetPlatformArchHasBeenSet = true; m_compilationTargetPlatformArch = value; }
    inline CompilationJobSummary& WithCompilationTargetPlatformArch(TargetPlatformArch value) { SetCompilationTargetPlatformArch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of accelerator that the model will run on after the compilation job
     * has completed.</p>
     */
    inline TargetPlatformAccelerator GetCompilationTargetPlatformAccelerator() const { return m_compilationTargetPlatformAccelerator; }
    inline bool CompilationTargetPlatformAcceleratorHasBeenSet() const { return m_compilationTargetPlatformAcceleratorHasBeenSet; }
    inline void SetCompilationTargetPlatformAccelerator(TargetPlatformAccelerator value) { m_compilationTargetPlatformAcceleratorHasBeenSet = true; m_compilationTargetPlatformAccelerator = value; }
    inline CompilationJobSummary& WithCompilationTargetPlatformAccelerator(TargetPlatformAccelerator value) { SetCompilationTargetPlatformAccelerator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the model compilation job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    CompilationJobSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the model compilation job.</p>
     */
    inline CompilationJobStatus GetCompilationJobStatus() const { return m_compilationJobStatus; }
    inline bool CompilationJobStatusHasBeenSet() const { return m_compilationJobStatusHasBeenSet; }
    inline void SetCompilationJobStatus(CompilationJobStatus value) { m_compilationJobStatusHasBeenSet = true; m_compilationJobStatus = value; }
    inline CompilationJobSummary& WithCompilationJobStatus(CompilationJobStatus value) { SetCompilationJobStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_compilationJobName;
    bool m_compilationJobNameHasBeenSet = false;

    Aws::String m_compilationJobArn;
    bool m_compilationJobArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_compilationStartTime{};
    bool m_compilationStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_compilationEndTime{};
    bool m_compilationEndTimeHasBeenSet = false;

    TargetDevice m_compilationTargetDevice{TargetDevice::NOT_SET};
    bool m_compilationTargetDeviceHasBeenSet = false;

    TargetPlatformOs m_compilationTargetPlatformOs{TargetPlatformOs::NOT_SET};
    bool m_compilationTargetPlatformOsHasBeenSet = false;

    TargetPlatformArch m_compilationTargetPlatformArch{TargetPlatformArch::NOT_SET};
    bool m_compilationTargetPlatformArchHasBeenSet = false;

    TargetPlatformAccelerator m_compilationTargetPlatformAccelerator{TargetPlatformAccelerator::NOT_SET};
    bool m_compilationTargetPlatformAcceleratorHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    CompilationJobStatus m_compilationJobStatus{CompilationJobStatus::NOT_SET};
    bool m_compilationJobStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
