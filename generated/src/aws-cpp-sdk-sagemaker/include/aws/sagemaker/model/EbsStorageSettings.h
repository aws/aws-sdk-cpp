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
   * <p>A collection of EBS storage settings that applies to private
   * spaces.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EbsStorageSettings">AWS
   * API Reference</a></p>
   */
  class EbsStorageSettings
  {
  public:
    AWS_SAGEMAKER_API EbsStorageSettings();
    AWS_SAGEMAKER_API EbsStorageSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EbsStorageSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The size of an EBS storage volume for a private space.</p>
     */
    inline int GetEbsVolumeSizeInGb() const{ return m_ebsVolumeSizeInGb; }

    /**
     * <p>The size of an EBS storage volume for a private space.</p>
     */
    inline bool EbsVolumeSizeInGbHasBeenSet() const { return m_ebsVolumeSizeInGbHasBeenSet; }

    /**
     * <p>The size of an EBS storage volume for a private space.</p>
     */
    inline void SetEbsVolumeSizeInGb(int value) { m_ebsVolumeSizeInGbHasBeenSet = true; m_ebsVolumeSizeInGb = value; }

    /**
     * <p>The size of an EBS storage volume for a private space.</p>
     */
    inline EbsStorageSettings& WithEbsVolumeSizeInGb(int value) { SetEbsVolumeSizeInGb(value); return *this;}

  private:

    int m_ebsVolumeSizeInGb;
    bool m_ebsVolumeSizeInGbHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
