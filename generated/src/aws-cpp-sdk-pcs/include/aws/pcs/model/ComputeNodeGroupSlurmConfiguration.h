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
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/ComputeNodeGroupSlurmConfiguration">AWS
   * API Reference</a></p>
   */
  class ComputeNodeGroupSlurmConfiguration
  {
  public:
    AWS_PCS_API ComputeNodeGroupSlurmConfiguration();
    AWS_PCS_API ComputeNodeGroupSlurmConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API ComputeNodeGroupSlurmConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Additional Slurm-specific configuration that directly maps to Slurm
     * settings.</p>
     */
    inline const Aws::Vector<SlurmCustomSetting>& GetSlurmCustomSettings() const{ return m_slurmCustomSettings; }
    inline bool SlurmCustomSettingsHasBeenSet() const { return m_slurmCustomSettingsHasBeenSet; }
    inline void SetSlurmCustomSettings(const Aws::Vector<SlurmCustomSetting>& value) { m_slurmCustomSettingsHasBeenSet = true; m_slurmCustomSettings = value; }
    inline void SetSlurmCustomSettings(Aws::Vector<SlurmCustomSetting>&& value) { m_slurmCustomSettingsHasBeenSet = true; m_slurmCustomSettings = std::move(value); }
    inline ComputeNodeGroupSlurmConfiguration& WithSlurmCustomSettings(const Aws::Vector<SlurmCustomSetting>& value) { SetSlurmCustomSettings(value); return *this;}
    inline ComputeNodeGroupSlurmConfiguration& WithSlurmCustomSettings(Aws::Vector<SlurmCustomSetting>&& value) { SetSlurmCustomSettings(std::move(value)); return *this;}
    inline ComputeNodeGroupSlurmConfiguration& AddSlurmCustomSettings(const SlurmCustomSetting& value) { m_slurmCustomSettingsHasBeenSet = true; m_slurmCustomSettings.push_back(value); return *this; }
    inline ComputeNodeGroupSlurmConfiguration& AddSlurmCustomSettings(SlurmCustomSetting&& value) { m_slurmCustomSettingsHasBeenSet = true; m_slurmCustomSettings.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SlurmCustomSetting> m_slurmCustomSettings;
    bool m_slurmCustomSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
