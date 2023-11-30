/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AppType.h>
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
    AWS_SAGEMAKER_API SpaceSettingsSummary();
    AWS_SAGEMAKER_API SpaceSettingsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SpaceSettingsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of app created within the space.</p>
     */
    inline const AppType& GetAppType() const{ return m_appType; }

    /**
     * <p>The type of app created within the space.</p>
     */
    inline bool AppTypeHasBeenSet() const { return m_appTypeHasBeenSet; }

    /**
     * <p>The type of app created within the space.</p>
     */
    inline void SetAppType(const AppType& value) { m_appTypeHasBeenSet = true; m_appType = value; }

    /**
     * <p>The type of app created within the space.</p>
     */
    inline void SetAppType(AppType&& value) { m_appTypeHasBeenSet = true; m_appType = std::move(value); }

    /**
     * <p>The type of app created within the space.</p>
     */
    inline SpaceSettingsSummary& WithAppType(const AppType& value) { SetAppType(value); return *this;}

    /**
     * <p>The type of app created within the space.</p>
     */
    inline SpaceSettingsSummary& WithAppType(AppType&& value) { SetAppType(std::move(value)); return *this;}


    /**
     * <p>The storage settings for a private space.</p>
     */
    inline const SpaceStorageSettings& GetSpaceStorageSettings() const{ return m_spaceStorageSettings; }

    /**
     * <p>The storage settings for a private space.</p>
     */
    inline bool SpaceStorageSettingsHasBeenSet() const { return m_spaceStorageSettingsHasBeenSet; }

    /**
     * <p>The storage settings for a private space.</p>
     */
    inline void SetSpaceStorageSettings(const SpaceStorageSettings& value) { m_spaceStorageSettingsHasBeenSet = true; m_spaceStorageSettings = value; }

    /**
     * <p>The storage settings for a private space.</p>
     */
    inline void SetSpaceStorageSettings(SpaceStorageSettings&& value) { m_spaceStorageSettingsHasBeenSet = true; m_spaceStorageSettings = std::move(value); }

    /**
     * <p>The storage settings for a private space.</p>
     */
    inline SpaceSettingsSummary& WithSpaceStorageSettings(const SpaceStorageSettings& value) { SetSpaceStorageSettings(value); return *this;}

    /**
     * <p>The storage settings for a private space.</p>
     */
    inline SpaceSettingsSummary& WithSpaceStorageSettings(SpaceStorageSettings&& value) { SetSpaceStorageSettings(std::move(value)); return *this;}

  private:

    AppType m_appType;
    bool m_appTypeHasBeenSet = false;

    SpaceStorageSettings m_spaceStorageSettings;
    bool m_spaceStorageSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
