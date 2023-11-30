/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/DefaultEbsStorageSettings.h>
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
   * <p>The default storage settings for a private space.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DefaultSpaceStorageSettings">AWS
   * API Reference</a></p>
   */
  class DefaultSpaceStorageSettings
  {
  public:
    AWS_SAGEMAKER_API DefaultSpaceStorageSettings();
    AWS_SAGEMAKER_API DefaultSpaceStorageSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DefaultSpaceStorageSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default EBS storage settings for a private space.</p>
     */
    inline const DefaultEbsStorageSettings& GetDefaultEbsStorageSettings() const{ return m_defaultEbsStorageSettings; }

    /**
     * <p>The default EBS storage settings for a private space.</p>
     */
    inline bool DefaultEbsStorageSettingsHasBeenSet() const { return m_defaultEbsStorageSettingsHasBeenSet; }

    /**
     * <p>The default EBS storage settings for a private space.</p>
     */
    inline void SetDefaultEbsStorageSettings(const DefaultEbsStorageSettings& value) { m_defaultEbsStorageSettingsHasBeenSet = true; m_defaultEbsStorageSettings = value; }

    /**
     * <p>The default EBS storage settings for a private space.</p>
     */
    inline void SetDefaultEbsStorageSettings(DefaultEbsStorageSettings&& value) { m_defaultEbsStorageSettingsHasBeenSet = true; m_defaultEbsStorageSettings = std::move(value); }

    /**
     * <p>The default EBS storage settings for a private space.</p>
     */
    inline DefaultSpaceStorageSettings& WithDefaultEbsStorageSettings(const DefaultEbsStorageSettings& value) { SetDefaultEbsStorageSettings(value); return *this;}

    /**
     * <p>The default EBS storage settings for a private space.</p>
     */
    inline DefaultSpaceStorageSettings& WithDefaultEbsStorageSettings(DefaultEbsStorageSettings&& value) { SetDefaultEbsStorageSettings(std::move(value)); return *this;}

  private:

    DefaultEbsStorageSettings m_defaultEbsStorageSettings;
    bool m_defaultEbsStorageSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
