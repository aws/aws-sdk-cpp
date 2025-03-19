/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/S3Presign.h>
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
   * <p>Use this optional parameter to constrain access to an Amazon S3 resource
   * based on the IP address using supported IAM global condition keys. The Amazon S3
   * resource is accessed in the worker portal using a Amazon S3 presigned
   * URL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/WorkerAccessConfiguration">AWS
   * API Reference</a></p>
   */
  class WorkerAccessConfiguration
  {
  public:
    AWS_SAGEMAKER_API WorkerAccessConfiguration() = default;
    AWS_SAGEMAKER_API WorkerAccessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API WorkerAccessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines any Amazon S3 resource constraints.</p>
     */
    inline const S3Presign& GetS3Presign() const { return m_s3Presign; }
    inline bool S3PresignHasBeenSet() const { return m_s3PresignHasBeenSet; }
    template<typename S3PresignT = S3Presign>
    void SetS3Presign(S3PresignT&& value) { m_s3PresignHasBeenSet = true; m_s3Presign = std::forward<S3PresignT>(value); }
    template<typename S3PresignT = S3Presign>
    WorkerAccessConfiguration& WithS3Presign(S3PresignT&& value) { SetS3Presign(std::forward<S3PresignT>(value)); return *this;}
    ///@}
  private:

    S3Presign m_s3Presign;
    bool m_s3PresignHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
