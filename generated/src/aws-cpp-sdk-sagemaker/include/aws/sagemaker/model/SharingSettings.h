/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/NotebookOutputOption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies options for sharing Amazon SageMaker AI Studio notebooks. These
   * settings are specified as part of <code>DefaultUserSettings</code> when the
   * <code>CreateDomain</code> API is called, and as part of
   * <code>UserSettings</code> when the <code>CreateUserProfile</code> API is called.
   * When <code>SharingSettings</code> is not specified, notebook sharing isn't
   * allowed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SharingSettings">AWS
   * API Reference</a></p>
   */
  class SharingSettings
  {
  public:
    AWS_SAGEMAKER_API SharingSettings() = default;
    AWS_SAGEMAKER_API SharingSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SharingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether to include the notebook cell output when sharing the notebook. The
     * default is <code>Disabled</code>.</p>
     */
    inline NotebookOutputOption GetNotebookOutputOption() const { return m_notebookOutputOption; }
    inline bool NotebookOutputOptionHasBeenSet() const { return m_notebookOutputOptionHasBeenSet; }
    inline void SetNotebookOutputOption(NotebookOutputOption value) { m_notebookOutputOptionHasBeenSet = true; m_notebookOutputOption = value; }
    inline SharingSettings& WithNotebookOutputOption(NotebookOutputOption value) { SetNotebookOutputOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>NotebookOutputOption</code> is <code>Allowed</code>, the Amazon S3
     * bucket used to store the shared notebook snapshots.</p>
     */
    inline const Aws::String& GetS3OutputPath() const { return m_s3OutputPath; }
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }
    template<typename S3OutputPathT = Aws::String>
    void SetS3OutputPath(S3OutputPathT&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::forward<S3OutputPathT>(value); }
    template<typename S3OutputPathT = Aws::String>
    SharingSettings& WithS3OutputPath(S3OutputPathT&& value) { SetS3OutputPath(std::forward<S3OutputPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>NotebookOutputOption</code> is <code>Allowed</code>, the Amazon
     * Web Services Key Management Service (KMS) encryption key ID used to encrypt the
     * notebook cell output in the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetS3KmsKeyId() const { return m_s3KmsKeyId; }
    inline bool S3KmsKeyIdHasBeenSet() const { return m_s3KmsKeyIdHasBeenSet; }
    template<typename S3KmsKeyIdT = Aws::String>
    void SetS3KmsKeyId(S3KmsKeyIdT&& value) { m_s3KmsKeyIdHasBeenSet = true; m_s3KmsKeyId = std::forward<S3KmsKeyIdT>(value); }
    template<typename S3KmsKeyIdT = Aws::String>
    SharingSettings& WithS3KmsKeyId(S3KmsKeyIdT&& value) { SetS3KmsKeyId(std::forward<S3KmsKeyIdT>(value)); return *this;}
    ///@}
  private:

    NotebookOutputOption m_notebookOutputOption{NotebookOutputOption::NOT_SET};
    bool m_notebookOutputOptionHasBeenSet = false;

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet = false;

    Aws::String m_s3KmsKeyId;
    bool m_s3KmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
