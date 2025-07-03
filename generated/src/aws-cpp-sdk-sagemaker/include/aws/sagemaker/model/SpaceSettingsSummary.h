/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AppType.h>
#include <aws/sagemaker/model/FeatureStatus.h>
#include <aws/sagemaker/model/SpaceStorageSettings.h>
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
   * <p>Specifies summary information about the space settings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SpaceSettingsSummary">AWS
   * API Reference</a></p>
   */
  class SpaceSettingsSummary
  {
  public:
    AWS_SAGEMAKER_API SpaceSettingsSummary() = default;
    AWS_SAGEMAKER_API SpaceSettingsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SpaceSettingsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of app created within the space.</p>
     */
    inline AppType GetAppType() const { return m_appType; }
    inline bool AppTypeHasBeenSet() const { return m_appTypeHasBeenSet; }
    inline void SetAppType(AppType value) { m_appTypeHasBeenSet = true; m_appType = value; }
    inline SpaceSettingsSummary& WithAppType(AppType value) { SetAppType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A setting that enables or disables remote access for a SageMaker space. When
     * enabled, this allows you to connect to the remote space from your local IDE.</p>
     */
    inline FeatureStatus GetRemoteAccess() const { return m_remoteAccess; }
    inline bool RemoteAccessHasBeenSet() const { return m_remoteAccessHasBeenSet; }
    inline void SetRemoteAccess(FeatureStatus value) { m_remoteAccessHasBeenSet = true; m_remoteAccess = value; }
    inline SpaceSettingsSummary& WithRemoteAccess(FeatureStatus value) { SetRemoteAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage settings for a space.</p>
     */
    inline const SpaceStorageSettings& GetSpaceStorageSettings() const { return m_spaceStorageSettings; }
    inline bool SpaceStorageSettingsHasBeenSet() const { return m_spaceStorageSettingsHasBeenSet; }
    template<typename SpaceStorageSettingsT = SpaceStorageSettings>
    void SetSpaceStorageSettings(SpaceStorageSettingsT&& value) { m_spaceStorageSettingsHasBeenSet = true; m_spaceStorageSettings = std::forward<SpaceStorageSettingsT>(value); }
    template<typename SpaceStorageSettingsT = SpaceStorageSettings>
    SpaceSettingsSummary& WithSpaceStorageSettings(SpaceStorageSettingsT&& value) { SetSpaceStorageSettings(std::forward<SpaceStorageSettingsT>(value)); return *this;}
    ///@}
  private:

    AppType m_appType{AppType::NOT_SET};
    bool m_appTypeHasBeenSet = false;

    FeatureStatus m_remoteAccess{FeatureStatus::NOT_SET};
    bool m_remoteAccessHasBeenSet = false;

    SpaceStorageSettings m_spaceStorageSettings;
    bool m_spaceStorageSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
