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
    AWS_SAGEMAKER_API ModelCardExportJobSummary();
    AWS_SAGEMAKER_API ModelCardExportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelCardExportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the model card export job.</p>
     */
    inline const Aws::String& GetModelCardExportJobName() const{ return m_modelCardExportJobName; }

    /**
     * <p>The name of the model card export job.</p>
     */
    inline bool ModelCardExportJobNameHasBeenSet() const { return m_modelCardExportJobNameHasBeenSet; }

    /**
     * <p>The name of the model card export job.</p>
     */
    inline void SetModelCardExportJobName(const Aws::String& value) { m_modelCardExportJobNameHasBeenSet = true; m_modelCardExportJobName = value; }

    /**
     * <p>The name of the model card export job.</p>
     */
    inline void SetModelCardExportJobName(Aws::String&& value) { m_modelCardExportJobNameHasBeenSet = true; m_modelCardExportJobName = std::move(value); }

    /**
     * <p>The name of the model card export job.</p>
     */
    inline void SetModelCardExportJobName(const char* value) { m_modelCardExportJobNameHasBeenSet = true; m_modelCardExportJobName.assign(value); }

    /**
     * <p>The name of the model card export job.</p>
     */
    inline ModelCardExportJobSummary& WithModelCardExportJobName(const Aws::String& value) { SetModelCardExportJobName(value); return *this;}

    /**
     * <p>The name of the model card export job.</p>
     */
    inline ModelCardExportJobSummary& WithModelCardExportJobName(Aws::String&& value) { SetModelCardExportJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the model card export job.</p>
     */
    inline ModelCardExportJobSummary& WithModelCardExportJobName(const char* value) { SetModelCardExportJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline const Aws::String& GetModelCardExportJobArn() const{ return m_modelCardExportJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline bool ModelCardExportJobArnHasBeenSet() const { return m_modelCardExportJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline void SetModelCardExportJobArn(const Aws::String& value) { m_modelCardExportJobArnHasBeenSet = true; m_modelCardExportJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline void SetModelCardExportJobArn(Aws::String&& value) { m_modelCardExportJobArnHasBeenSet = true; m_modelCardExportJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline void SetModelCardExportJobArn(const char* value) { m_modelCardExportJobArnHasBeenSet = true; m_modelCardExportJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline ModelCardExportJobSummary& WithModelCardExportJobArn(const Aws::String& value) { SetModelCardExportJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline ModelCardExportJobSummary& WithModelCardExportJobArn(Aws::String&& value) { SetModelCardExportJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline ModelCardExportJobSummary& WithModelCardExportJobArn(const char* value) { SetModelCardExportJobArn(value); return *this;}


    /**
     * <p>The completion status of the model card export job.</p>
     */
    inline const ModelCardExportJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The completion status of the model card export job.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The completion status of the model card export job.</p>
     */
    inline void SetStatus(const ModelCardExportJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The completion status of the model card export job.</p>
     */
    inline void SetStatus(ModelCardExportJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The completion status of the model card export job.</p>
     */
    inline ModelCardExportJobSummary& WithStatus(const ModelCardExportJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The completion status of the model card export job.</p>
     */
    inline ModelCardExportJobSummary& WithStatus(ModelCardExportJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The name of the model card that the export job exports.</p>
     */
    inline const Aws::String& GetModelCardName() const{ return m_modelCardName; }

    /**
     * <p>The name of the model card that the export job exports.</p>
     */
    inline bool ModelCardNameHasBeenSet() const { return m_modelCardNameHasBeenSet; }

    /**
     * <p>The name of the model card that the export job exports.</p>
     */
    inline void SetModelCardName(const Aws::String& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = value; }

    /**
     * <p>The name of the model card that the export job exports.</p>
     */
    inline void SetModelCardName(Aws::String&& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = std::move(value); }

    /**
     * <p>The name of the model card that the export job exports.</p>
     */
    inline void SetModelCardName(const char* value) { m_modelCardNameHasBeenSet = true; m_modelCardName.assign(value); }

    /**
     * <p>The name of the model card that the export job exports.</p>
     */
    inline ModelCardExportJobSummary& WithModelCardName(const Aws::String& value) { SetModelCardName(value); return *this;}

    /**
     * <p>The name of the model card that the export job exports.</p>
     */
    inline ModelCardExportJobSummary& WithModelCardName(Aws::String&& value) { SetModelCardName(std::move(value)); return *this;}

    /**
     * <p>The name of the model card that the export job exports.</p>
     */
    inline ModelCardExportJobSummary& WithModelCardName(const char* value) { SetModelCardName(value); return *this;}


    /**
     * <p>The version of the model card that the export job exports.</p>
     */
    inline int GetModelCardVersion() const{ return m_modelCardVersion; }

    /**
     * <p>The version of the model card that the export job exports.</p>
     */
    inline bool ModelCardVersionHasBeenSet() const { return m_modelCardVersionHasBeenSet; }

    /**
     * <p>The version of the model card that the export job exports.</p>
     */
    inline void SetModelCardVersion(int value) { m_modelCardVersionHasBeenSet = true; m_modelCardVersion = value; }

    /**
     * <p>The version of the model card that the export job exports.</p>
     */
    inline ModelCardExportJobSummary& WithModelCardVersion(int value) { SetModelCardVersion(value); return *this;}


    /**
     * <p>The date and time that the model card export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the model card export job was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the model card export job was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the model card export job was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the model card export job was created.</p>
     */
    inline ModelCardExportJobSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the model card export job was created.</p>
     */
    inline ModelCardExportJobSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date and time that the model card export job was last modified..</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }

    /**
     * <p>The date and time that the model card export job was last modified..</p>
     */
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }

    /**
     * <p>The date and time that the model card export job was last modified..</p>
     */
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = value; }

    /**
     * <p>The date and time that the model card export job was last modified..</p>
     */
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::move(value); }

    /**
     * <p>The date and time that the model card export job was last modified..</p>
     */
    inline ModelCardExportJobSummary& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}

    /**
     * <p>The date and time that the model card export job was last modified..</p>
     */
    inline ModelCardExportJobSummary& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}

  private:

    Aws::String m_modelCardExportJobName;
    bool m_modelCardExportJobNameHasBeenSet = false;

    Aws::String m_modelCardExportJobArn;
    bool m_modelCardExportJobArnHasBeenSet = false;

    ModelCardExportJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_modelCardName;
    bool m_modelCardNameHasBeenSet = false;

    int m_modelCardVersion;
    bool m_modelCardVersionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt;
    bool m_lastModifiedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
