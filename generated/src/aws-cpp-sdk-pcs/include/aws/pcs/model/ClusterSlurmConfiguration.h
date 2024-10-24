/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pcs/model/SlurmAuthKey.h>
#include <aws/pcs/model/SlurmCustomSetting.h>
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
namespace PCS
{
namespace Model
{

  /**
   * <p>Additional options related to the Slurm scheduler.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/ClusterSlurmConfiguration">AWS
   * API Reference</a></p>
   */
  class ClusterSlurmConfiguration
  {
  public:
    AWS_PCS_API ClusterSlurmConfiguration();
    AWS_PCS_API ClusterSlurmConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API ClusterSlurmConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time (in seconds) before an idle node is scaled down.</p> <p>Default:
     * <code>600</code> </p>
     */
    inline int GetScaleDownIdleTimeInSeconds() const{ return m_scaleDownIdleTimeInSeconds; }
    inline bool ScaleDownIdleTimeInSecondsHasBeenSet() const { return m_scaleDownIdleTimeInSecondsHasBeenSet; }
    inline void SetScaleDownIdleTimeInSeconds(int value) { m_scaleDownIdleTimeInSecondsHasBeenSet = true; m_scaleDownIdleTimeInSeconds = value; }
    inline ClusterSlurmConfiguration& WithScaleDownIdleTimeInSeconds(int value) { SetScaleDownIdleTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional Slurm-specific configuration that directly maps to Slurm
     * settings.</p>
     */
    inline const Aws::Vector<SlurmCustomSetting>& GetSlurmCustomSettings() const{ return m_slurmCustomSettings; }
    inline bool SlurmCustomSettingsHasBeenSet() const { return m_slurmCustomSettingsHasBeenSet; }
    inline void SetSlurmCustomSettings(const Aws::Vector<SlurmCustomSetting>& value) { m_slurmCustomSettingsHasBeenSet = true; m_slurmCustomSettings = value; }
    inline void SetSlurmCustomSettings(Aws::Vector<SlurmCustomSetting>&& value) { m_slurmCustomSettingsHasBeenSet = true; m_slurmCustomSettings = std::move(value); }
    inline ClusterSlurmConfiguration& WithSlurmCustomSettings(const Aws::Vector<SlurmCustomSetting>& value) { SetSlurmCustomSettings(value); return *this;}
    inline ClusterSlurmConfiguration& WithSlurmCustomSettings(Aws::Vector<SlurmCustomSetting>&& value) { SetSlurmCustomSettings(std::move(value)); return *this;}
    inline ClusterSlurmConfiguration& AddSlurmCustomSettings(const SlurmCustomSetting& value) { m_slurmCustomSettingsHasBeenSet = true; m_slurmCustomSettings.push_back(value); return *this; }
    inline ClusterSlurmConfiguration& AddSlurmCustomSettings(SlurmCustomSetting&& value) { m_slurmCustomSettingsHasBeenSet = true; m_slurmCustomSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The shared Slurm key for authentication, also known as the <b>cluster
     * secret</b>.</p>
     */
    inline const SlurmAuthKey& GetAuthKey() const{ return m_authKey; }
    inline bool AuthKeyHasBeenSet() const { return m_authKeyHasBeenSet; }
    inline void SetAuthKey(const SlurmAuthKey& value) { m_authKeyHasBeenSet = true; m_authKey = value; }
    inline void SetAuthKey(SlurmAuthKey&& value) { m_authKeyHasBeenSet = true; m_authKey = std::move(value); }
    inline ClusterSlurmConfiguration& WithAuthKey(const SlurmAuthKey& value) { SetAuthKey(value); return *this;}
    inline ClusterSlurmConfiguration& WithAuthKey(SlurmAuthKey&& value) { SetAuthKey(std::move(value)); return *this;}
    ///@}
  private:

    int m_scaleDownIdleTimeInSeconds;
    bool m_scaleDownIdleTimeInSecondsHasBeenSet = false;

    Aws::Vector<SlurmCustomSetting> m_slurmCustomSettings;
    bool m_slurmCustomSettingsHasBeenSet = false;

    SlurmAuthKey m_authKey;
    bool m_authKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
