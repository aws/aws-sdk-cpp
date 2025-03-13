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
   * <p>The default storage settings for a space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DefaultSpaceStorageSettings">AWS
   * API Reference</a></p>
   */
  class DefaultSpaceStorageSettings
  {
  public:
    AWS_SAGEMAKER_API DefaultSpaceStorageSettings() = default;
    AWS_SAGEMAKER_API DefaultSpaceStorageSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DefaultSpaceStorageSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default EBS storage settings for a space.</p>
     */
    inline const DefaultEbsStorageSettings& GetDefaultEbsStorageSettings() const { return m_defaultEbsStorageSettings; }
    inline bool DefaultEbsStorageSettingsHasBeenSet() const { return m_defaultEbsStorageSettingsHasBeenSet; }
    template<typename DefaultEbsStorageSettingsT = DefaultEbsStorageSettings>
    void SetDefaultEbsStorageSettings(DefaultEbsStorageSettingsT&& value) { m_defaultEbsStorageSettingsHasBeenSet = true; m_defaultEbsStorageSettings = std::forward<DefaultEbsStorageSettingsT>(value); }
    template<typename DefaultEbsStorageSettingsT = DefaultEbsStorageSettings>
    DefaultSpaceStorageSettings& WithDefaultEbsStorageSettings(DefaultEbsStorageSettingsT&& value) { SetDefaultEbsStorageSettings(std::forward<DefaultEbsStorageSettingsT>(value)); return *this;}
    ///@}
  private:

    DefaultEbsStorageSettings m_defaultEbsStorageSettings;
    bool m_defaultEbsStorageSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
