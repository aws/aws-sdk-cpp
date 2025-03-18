/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/SpaceIdleSettings.h>
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
   * <p>Settings that are used to configure and manage the lifecycle of Amazon
   * SageMaker Studio applications in a space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SpaceAppLifecycleManagement">AWS
   * API Reference</a></p>
   */
  class SpaceAppLifecycleManagement
  {
  public:
    AWS_SAGEMAKER_API SpaceAppLifecycleManagement() = default;
    AWS_SAGEMAKER_API SpaceAppLifecycleManagement(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SpaceAppLifecycleManagement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Settings related to idle shutdown of Studio applications.</p>
     */
    inline const SpaceIdleSettings& GetIdleSettings() const { return m_idleSettings; }
    inline bool IdleSettingsHasBeenSet() const { return m_idleSettingsHasBeenSet; }
    template<typename IdleSettingsT = SpaceIdleSettings>
    void SetIdleSettings(IdleSettingsT&& value) { m_idleSettingsHasBeenSet = true; m_idleSettings = std::forward<IdleSettingsT>(value); }
    template<typename IdleSettingsT = SpaceIdleSettings>
    SpaceAppLifecycleManagement& WithIdleSettings(IdleSettingsT&& value) { SetIdleSettings(std::forward<IdleSettingsT>(value)); return *this;}
    ///@}
  private:

    SpaceIdleSettings m_idleSettings;
    bool m_idleSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
