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
   * <p>A collection of default EBS storage settings that applies to private spaces
   * created within a domain or user profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DefaultEbsStorageSettings">AWS
   * API Reference</a></p>
   */
  class DefaultEbsStorageSettings
  {
  public:
    AWS_SAGEMAKER_API DefaultEbsStorageSettings();
    AWS_SAGEMAKER_API DefaultEbsStorageSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DefaultEbsStorageSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default size of the EBS storage volume for a private space.</p>
     */
    inline int GetDefaultEbsVolumeSizeInGb() const{ return m_defaultEbsVolumeSizeInGb; }

    /**
     * <p>The default size of the EBS storage volume for a private space.</p>
     */
    inline bool DefaultEbsVolumeSizeInGbHasBeenSet() const { return m_defaultEbsVolumeSizeInGbHasBeenSet; }

    /**
     * <p>The default size of the EBS storage volume for a private space.</p>
     */
    inline void SetDefaultEbsVolumeSizeInGb(int value) { m_defaultEbsVolumeSizeInGbHasBeenSet = true; m_defaultEbsVolumeSizeInGb = value; }

    /**
     * <p>The default size of the EBS storage volume for a private space.</p>
     */
    inline DefaultEbsStorageSettings& WithDefaultEbsVolumeSizeInGb(int value) { SetDefaultEbsVolumeSizeInGb(value); return *this;}


    /**
     * <p>The maximum size of the EBS storage volume for a private space.</p>
     */
    inline int GetMaximumEbsVolumeSizeInGb() const{ return m_maximumEbsVolumeSizeInGb; }

    /**
     * <p>The maximum size of the EBS storage volume for a private space.</p>
     */
    inline bool MaximumEbsVolumeSizeInGbHasBeenSet() const { return m_maximumEbsVolumeSizeInGbHasBeenSet; }

    /**
     * <p>The maximum size of the EBS storage volume for a private space.</p>
     */
    inline void SetMaximumEbsVolumeSizeInGb(int value) { m_maximumEbsVolumeSizeInGbHasBeenSet = true; m_maximumEbsVolumeSizeInGb = value; }

    /**
     * <p>The maximum size of the EBS storage volume for a private space.</p>
     */
    inline DefaultEbsStorageSettings& WithMaximumEbsVolumeSizeInGb(int value) { SetMaximumEbsVolumeSizeInGb(value); return *this;}

  private:

    int m_defaultEbsVolumeSizeInGb;
    bool m_defaultEbsVolumeSizeInGbHasBeenSet = false;

    int m_maximumEbsVolumeSizeInGb;
    bool m_maximumEbsVolumeSizeInGbHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
