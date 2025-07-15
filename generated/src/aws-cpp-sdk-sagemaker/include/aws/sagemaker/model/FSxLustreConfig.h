/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
   * <p>Configuration settings for an Amazon FSx for Lustre file system to be used
   * with the cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FSxLustreConfig">AWS
   * API Reference</a></p>
   */
  class FSxLustreConfig
  {
  public:
    AWS_SAGEMAKER_API FSxLustreConfig() = default;
    AWS_SAGEMAKER_API FSxLustreConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FSxLustreConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The storage capacity of the Amazon FSx for Lustre file system, specified in
     * gibibytes (GiB).</p>
     */
    inline int GetSizeInGiB() const { return m_sizeInGiB; }
    inline bool SizeInGiBHasBeenSet() const { return m_sizeInGiBHasBeenSet; }
    inline void SetSizeInGiB(int value) { m_sizeInGiBHasBeenSet = true; m_sizeInGiB = value; }
    inline FSxLustreConfig& WithSizeInGiB(int value) { SetSizeInGiB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throughput capacity of the Amazon FSx for Lustre file system, measured in
     * MB/s per TiB of storage.</p>
     */
    inline int GetPerUnitStorageThroughput() const { return m_perUnitStorageThroughput; }
    inline bool PerUnitStorageThroughputHasBeenSet() const { return m_perUnitStorageThroughputHasBeenSet; }
    inline void SetPerUnitStorageThroughput(int value) { m_perUnitStorageThroughputHasBeenSet = true; m_perUnitStorageThroughput = value; }
    inline FSxLustreConfig& WithPerUnitStorageThroughput(int value) { SetPerUnitStorageThroughput(value); return *this;}
    ///@}
  private:

    int m_sizeInGiB{0};
    bool m_sizeInGiBHasBeenSet = false;

    int m_perUnitStorageThroughput{0};
    bool m_perUnitStorageThroughputHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
