/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/UpdateComputeNodeGroupSlurmConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class UpdateComputeNodeGroupSlurmConfigurationRequest
  {
  public:
    AWS_PCS_API UpdateComputeNodeGroupSlurmConfigurationRequest() = default;
    AWS_PCS_API UpdateComputeNodeGroupSlurmConfigurationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API UpdateComputeNodeGroupSlurmConfigurationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    UpdateComputeNodeGroupSlurmConfigurationRequest& WithSlurmCustomSettings(SlurmCustomSettingsT&& value) { SetSlurmCustomSettings(std::forward<SlurmCustomSettingsT>(value)); return *this;}
    template<typename SlurmCustomSettingsT = SlurmCustomSetting>
    UpdateComputeNodeGroupSlurmConfigurationRequest& AddSlurmCustomSettings(SlurmCustomSettingsT&& value) { m_slurmCustomSettingsHasBeenSet = true; m_slurmCustomSettings.emplace_back(std::forward<SlurmCustomSettingsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SlurmCustomSetting> m_slurmCustomSettings;
    bool m_slurmCustomSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
