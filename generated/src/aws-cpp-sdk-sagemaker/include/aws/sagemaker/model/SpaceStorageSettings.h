/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/EbsStorageSettings.h>
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
   * <p>The storage settings for a space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SpaceStorageSettings">AWS
   * API Reference</a></p>
   */
  class SpaceStorageSettings
  {
  public:
    AWS_SAGEMAKER_API SpaceStorageSettings() = default;
    AWS_SAGEMAKER_API SpaceStorageSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SpaceStorageSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A collection of EBS storage settings for a space.</p>
     */
    inline const EbsStorageSettings& GetEbsStorageSettings() const { return m_ebsStorageSettings; }
    inline bool EbsStorageSettingsHasBeenSet() const { return m_ebsStorageSettingsHasBeenSet; }
    template<typename EbsStorageSettingsT = EbsStorageSettings>
    void SetEbsStorageSettings(EbsStorageSettingsT&& value) { m_ebsStorageSettingsHasBeenSet = true; m_ebsStorageSettings = std::forward<EbsStorageSettingsT>(value); }
    template<typename EbsStorageSettingsT = EbsStorageSettings>
    SpaceStorageSettings& WithEbsStorageSettings(EbsStorageSettingsT&& value) { SetEbsStorageSettings(std::forward<EbsStorageSettingsT>(value)); return *this;}
    ///@}
  private:

    EbsStorageSettings m_ebsStorageSettings;
    bool m_ebsStorageSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
