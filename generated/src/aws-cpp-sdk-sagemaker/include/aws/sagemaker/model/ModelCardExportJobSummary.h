/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelCardExportJobStatus.h>
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
   * <p>The summary of the Amazon SageMaker Model Card export job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelCardExportJobSummary">AWS
   * API Reference</a></p>
   */
  class ModelCardExportJobSummary
  {
  public:
    AWS_SAGEMAKER_API ModelCardExportJobSummary() = default;
    AWS_SAGEMAKER_API ModelCardExportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelCardExportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the model card export job.</p>
     */
    inline const Aws::String& GetModelCardExportJobName() const { return m_modelCardExportJobName; }
    inline bool ModelCardExportJobNameHasBeenSet() const { return m_modelCardExportJobNameHasBeenSet; }
    template<typename ModelCardExportJobNameT = Aws::String>
    void SetModelCardExportJobName(ModelCardExportJobNameT&& value) { m_modelCardExportJobNameHasBeenSet = true; m_modelCardExportJobName = std::forward<ModelCardExportJobNameT>(value); }
    template<typename ModelCardExportJobNameT = Aws::String>
    ModelCardExportJobSummary& WithModelCardExportJobName(ModelCardExportJobNameT&& value) { SetModelCardExportJobName(std::forward<ModelCardExportJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline const Aws::String& GetModelCardExportJobArn() const { return m_modelCardExportJobArn; }
    inline bool ModelCardExportJobArnHasBeenSet() const { return m_modelCardExportJobArnHasBeenSet; }
    template<typename ModelCardExportJobArnT = Aws::String>
    void SetModelCardExportJobArn(ModelCardExportJobArnT&& value) { m_modelCardExportJobArnHasBeenSet = true; m_modelCardExportJobArn = std::forward<ModelCardExportJobArnT>(value); }
    template<typename ModelCardExportJobArnT = Aws::String>
    ModelCardExportJobSummary& WithModelCardExportJobArn(ModelCardExportJobArnT&& value) { SetModelCardExportJobArn(std::forward<ModelCardExportJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The completion status of the model card export job.</p>
     */
    inline ModelCardExportJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ModelCardExportJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ModelCardExportJobSummary& WithStatus(ModelCardExportJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the model card that the export job exports.</p>
     */
    inline const Aws::String& GetModelCardName() const { return m_modelCardName; }
    inline bool ModelCardNameHasBeenSet() const { return m_modelCardNameHasBeenSet; }
    template<typename ModelCardNameT = Aws::String>
    void SetModelCardName(ModelCardNameT&& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = std::forward<ModelCardNameT>(value); }
    template<typename ModelCardNameT = Aws::String>
    ModelCardExportJobSummary& WithModelCardName(ModelCardNameT&& value) { SetModelCardName(std::forward<ModelCardNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model card that the export job exports.</p>
     */
    inline int GetModelCardVersion() const { return m_modelCardVersion; }
    inline bool ModelCardVersionHasBeenSet() const { return m_modelCardVersionHasBeenSet; }
    inline void SetModelCardVersion(int value) { m_modelCardVersionHasBeenSet = true; m_modelCardVersion = value; }
    inline ModelCardExportJobSummary& WithModelCardVersion(int value) { SetModelCardVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the model card export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ModelCardExportJobSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the model card export job was last modified..</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    void SetLastModifiedAt(LastModifiedAtT&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::forward<LastModifiedAtT>(value); }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    ModelCardExportJobSummary& WithLastModifiedAt(LastModifiedAtT&& value) { SetLastModifiedAt(std::forward<LastModifiedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelCardExportJobName;
    bool m_modelCardExportJobNameHasBeenSet = false;

    Aws::String m_modelCardExportJobArn;
    bool m_modelCardExportJobArnHasBeenSet = false;

    ModelCardExportJobStatus m_status{ModelCardExportJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_modelCardName;
    bool m_modelCardNameHasBeenSet = false;

    int m_modelCardVersion{0};
    bool m_modelCardVersionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt{};
    bool m_lastModifiedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
