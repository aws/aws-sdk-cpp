/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pcs/model/SlurmAuthKey.h>
#include <aws/pcs/model/Accounting.h>
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
    AWS_PCS_API ClusterSlurmConfiguration() = default;
    AWS_PCS_API ClusterSlurmConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API ClusterSlurmConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time (in seconds) before an idle node is scaled down.</p> <p>Default:
     * <code>600</code> </p>
     */
    inline int GetScaleDownIdleTimeInSeconds() const { return m_scaleDownIdleTimeInSeconds; }
    inline bool ScaleDownIdleTimeInSecondsHasBeenSet() const { return m_scaleDownIdleTimeInSecondsHasBeenSet; }
    inline void SetScaleDownIdleTimeInSeconds(int value) { m_scaleDownIdleTimeInSecondsHasBeenSet = true; m_scaleDownIdleTimeInSeconds = value; }
    inline ClusterSlurmConfiguration& WithScaleDownIdleTimeInSeconds(int value) { SetScaleDownIdleTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional Slurm-specific configuration that directly maps to Slurm
     * settings.</p>
     */
    inline const Aws::Vector<SlurmCustomSetting>& GetSlurmCustomSettings() const { return m_slurmCustomSettings; }
    inline bool SlurmCustomSettingsHasBeenSet() const { return m_slurmCustomSettingsHasBeenSet; }
    template<typename SlurmCustomSettingsT = Aws::Vector<SlurmCustomSetting>>
    void SetSlurmCustomSettings(SlurmCustomSettingsT&& value) { m_slurmCustomSettingsHasBeenSet = true; m_slurmCustomSettings = std::forward<SlurmCustomSettingsT>(value); }
    template<typename SlurmCustomSettingsT = Aws::Vector<SlurmCustomSetting>>
    ClusterSlurmConfiguration& WithSlurmCustomSettings(SlurmCustomSettingsT&& value) { SetSlurmCustomSettings(std::forward<SlurmCustomSettingsT>(value)); return *this;}
    template<typename SlurmCustomSettingsT = SlurmCustomSetting>
    ClusterSlurmConfiguration& AddSlurmCustomSettings(SlurmCustomSettingsT&& value) { m_slurmCustomSettingsHasBeenSet = true; m_slurmCustomSettings.emplace_back(std::forward<SlurmCustomSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The shared Slurm key for authentication, also known as the <b>cluster
     * secret</b>.</p>
     */
    inline const SlurmAuthKey& GetAuthKey() const { return m_authKey; }
    inline bool AuthKeyHasBeenSet() const { return m_authKeyHasBeenSet; }
    template<typename AuthKeyT = SlurmAuthKey>
    void SetAuthKey(AuthKeyT&& value) { m_authKeyHasBeenSet = true; m_authKey = std::forward<AuthKeyT>(value); }
    template<typename AuthKeyT = SlurmAuthKey>
    ClusterSlurmConfiguration& WithAuthKey(AuthKeyT&& value) { SetAuthKey(std::forward<AuthKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The accounting configuration includes configurable settings for Slurm
     * accounting.</p>
     */
    inline const Accounting& GetAccounting() const { return m_accounting; }
    inline bool AccountingHasBeenSet() const { return m_accountingHasBeenSet; }
    template<typename AccountingT = Accounting>
    void SetAccounting(AccountingT&& value) { m_accountingHasBeenSet = true; m_accounting = std::forward<AccountingT>(value); }
    template<typename AccountingT = Accounting>
    ClusterSlurmConfiguration& WithAccounting(AccountingT&& value) { SetAccounting(std::forward<AccountingT>(value)); return *this;}
    ///@}
  private:

    int m_scaleDownIdleTimeInSeconds{0};
    bool m_scaleDownIdleTimeInSecondsHasBeenSet = false;

    Aws::Vector<SlurmCustomSetting> m_slurmCustomSettings;
    bool m_slurmCustomSettingsHasBeenSet = false;

    SlurmAuthKey m_authKey;
    bool m_authKeyHasBeenSet = false;

    Accounting m_accounting;
    bool m_accountingHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
