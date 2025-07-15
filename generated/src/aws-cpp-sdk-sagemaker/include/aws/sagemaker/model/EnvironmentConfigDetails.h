/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/FSxLustreConfig.h>
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
   * <p>The configuration details for the restricted instance groups (RIG)
   * environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EnvironmentConfigDetails">AWS
   * API Reference</a></p>
   */
  class EnvironmentConfigDetails
  {
  public:
    AWS_SAGEMAKER_API EnvironmentConfigDetails() = default;
    AWS_SAGEMAKER_API EnvironmentConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EnvironmentConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration settings for an Amazon FSx for Lustre file system to be used
     * with the cluster.</p>
     */
    inline const FSxLustreConfig& GetFSxLustreConfig() const { return m_fSxLustreConfig; }
    inline bool FSxLustreConfigHasBeenSet() const { return m_fSxLustreConfigHasBeenSet; }
    template<typename FSxLustreConfigT = FSxLustreConfig>
    void SetFSxLustreConfig(FSxLustreConfigT&& value) { m_fSxLustreConfigHasBeenSet = true; m_fSxLustreConfig = std::forward<FSxLustreConfigT>(value); }
    template<typename FSxLustreConfigT = FSxLustreConfig>
    EnvironmentConfigDetails& WithFSxLustreConfig(FSxLustreConfigT&& value) { SetFSxLustreConfig(std::forward<FSxLustreConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path where output data from the restricted instance group (RIG)
     * environment will be stored.</p>
     */
    inline const Aws::String& GetS3OutputPath() const { return m_s3OutputPath; }
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }
    template<typename S3OutputPathT = Aws::String>
    void SetS3OutputPath(S3OutputPathT&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::forward<S3OutputPathT>(value); }
    template<typename S3OutputPathT = Aws::String>
    EnvironmentConfigDetails& WithS3OutputPath(S3OutputPathT&& value) { SetS3OutputPath(std::forward<S3OutputPathT>(value)); return *this;}
    ///@}
  private:

    FSxLustreConfig m_fSxLustreConfig;
    bool m_fSxLustreConfigHasBeenSet = false;

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
