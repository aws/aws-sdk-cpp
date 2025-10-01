/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Additional settings that directly map to Slurm settings.</p> 
   * <p>PCS supports a subset of Slurm settings. For more information, see <a
   * href="https://docs.aws.amazon.com/pcs/latest/userguide/slurm-custom-settings.html">Configuring
   * custom Slurm settings in PCS</a> in the <i>PCS User Guide</i>.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/SlurmCustomSetting">AWS
   * API Reference</a></p>
   */
  class SlurmCustomSetting
  {
  public:
    AWS_PCS_API SlurmCustomSetting() = default;
    AWS_PCS_API SlurmCustomSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API SlurmCustomSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>PCS supports custom Slurm settings for clusters, compute node groups, and
     * queues. For more information, see <a
     * href="https://docs.aws.amazon.com/pcs/latest/userguide/slurm-custom-settings.html">Configuring
     * custom Slurm settings in PCS</a> in the <i>PCS User Guide</i>.</p>
     */
    inline const Aws::String& GetParameterName() const { return m_parameterName; }
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
    template<typename ParameterNameT = Aws::String>
    void SetParameterName(ParameterNameT&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::forward<ParameterNameT>(value); }
    template<typename ParameterNameT = Aws::String>
    SlurmCustomSetting& WithParameterName(ParameterNameT&& value) { SetParameterName(std::forward<ParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values for the configured Slurm settings.</p>
     */
    inline const Aws::String& GetParameterValue() const { return m_parameterValue; }
    inline bool ParameterValueHasBeenSet() const { return m_parameterValueHasBeenSet; }
    template<typename ParameterValueT = Aws::String>
    void SetParameterValue(ParameterValueT&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = std::forward<ParameterValueT>(value); }
    template<typename ParameterValueT = Aws::String>
    SlurmCustomSetting& WithParameterValue(ParameterValueT&& value) { SetParameterValue(std::forward<ParameterValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    Aws::String m_parameterValue;
    bool m_parameterValueHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
