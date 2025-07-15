/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/FSxLustreConfig.h>
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
   * <p>The configuration for the restricted instance groups (RIG)
   * environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EnvironmentConfig">AWS
   * API Reference</a></p>
   */
  class EnvironmentConfig
  {
  public:
    AWS_SAGEMAKER_API EnvironmentConfig() = default;
    AWS_SAGEMAKER_API EnvironmentConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EnvironmentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    EnvironmentConfig& WithFSxLustreConfig(FSxLustreConfigT&& value) { SetFSxLustreConfig(std::forward<FSxLustreConfigT>(value)); return *this;}
    ///@}
  private:

    FSxLustreConfig m_fSxLustreConfig;
    bool m_fSxLustreConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
