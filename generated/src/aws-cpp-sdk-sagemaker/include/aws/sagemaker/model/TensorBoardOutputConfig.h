/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
   * <p>Configuration of storage locations for the Amazon SageMaker Debugger
   * TensorBoard output data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TensorBoardOutputConfig">AWS
   * API Reference</a></p>
   */
  class TensorBoardOutputConfig
  {
  public:
    AWS_SAGEMAKER_API TensorBoardOutputConfig() = default;
    AWS_SAGEMAKER_API TensorBoardOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TensorBoardOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Path to local storage location for tensorBoard output. Defaults to
     * <code>/opt/ml/output/tensorboard</code>.</p>
     */
    inline const Aws::String& GetLocalPath() const { return m_localPath; }
    inline bool LocalPathHasBeenSet() const { return m_localPathHasBeenSet; }
    template<typename LocalPathT = Aws::String>
    void SetLocalPath(LocalPathT&& value) { m_localPathHasBeenSet = true; m_localPath = std::forward<LocalPathT>(value); }
    template<typename LocalPathT = Aws::String>
    TensorBoardOutputConfig& WithLocalPath(LocalPathT&& value) { SetLocalPath(std::forward<LocalPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Path to Amazon S3 storage location for TensorBoard output.</p>
     */
    inline const Aws::String& GetS3OutputPath() const { return m_s3OutputPath; }
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }
    template<typename S3OutputPathT = Aws::String>
    void SetS3OutputPath(S3OutputPathT&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::forward<S3OutputPathT>(value); }
    template<typename S3OutputPathT = Aws::String>
    TensorBoardOutputConfig& WithS3OutputPath(S3OutputPathT&& value) { SetS3OutputPath(std::forward<S3OutputPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_localPath;
    bool m_localPathHasBeenSet = false;

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
