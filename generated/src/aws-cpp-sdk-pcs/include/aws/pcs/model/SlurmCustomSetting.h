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
   * <p>Additional settings that directly map to Slurm settings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/SlurmCustomSetting">AWS
   * API Reference</a></p>
   */
  class SlurmCustomSetting
  {
  public:
    AWS_PCS_API SlurmCustomSetting();
    AWS_PCS_API SlurmCustomSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API SlurmCustomSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Web Services PCS supports configuration of the following Slurm
     * parameters:</p> <ul> <li> <p>For <b>clusters</b> </p> <ul> <li> <p> <a
     * href="https://slurm.schedmd.com/slurm.conf.html#OPT_Prolog_1">
     * <code>Prolog</code> </a> </p> </li> <li> <p> <a
     * href="https://slurm.schedmd.com/slurm.conf.html#OPT_Epilog_1">
     * <code>Epilog</code> </a> </p> </li> <li> <p> <a
     * href="https://slurm.schedmd.com/slurm.conf.html#OPT_SelectTypeParameters">
     * <code>SelectTypeParameters</code> </a> </p> </li> </ul> </li> <li> <p>For
     * <b>compute node groups</b> </p> <ul> <li> <p> <a
     * href="https://slurm.schedmd.com/slurm.conf.html#OPT_Weight"> <code>Weight</code>
     * </a> </p> </li> <li> <p> <a
     * href="https://slurm.schedmd.com/slurm.conf.html#OPT_Weight">
     * <code>RealMemory</code> </a> </p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }
    inline SlurmCustomSetting& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}
    inline SlurmCustomSetting& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}
    inline SlurmCustomSetting& WithParameterName(const char* value) { SetParameterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values for the configured Slurm settings.</p>
     */
    inline const Aws::String& GetParameterValue() const{ return m_parameterValue; }
    inline bool ParameterValueHasBeenSet() const { return m_parameterValueHasBeenSet; }
    inline void SetParameterValue(const Aws::String& value) { m_parameterValueHasBeenSet = true; m_parameterValue = value; }
    inline void SetParameterValue(Aws::String&& value) { m_parameterValueHasBeenSet = true; m_parameterValue = std::move(value); }
    inline void SetParameterValue(const char* value) { m_parameterValueHasBeenSet = true; m_parameterValue.assign(value); }
    inline SlurmCustomSetting& WithParameterValue(const Aws::String& value) { SetParameterValue(value); return *this;}
    inline SlurmCustomSetting& WithParameterValue(Aws::String&& value) { SetParameterValue(std::move(value)); return *this;}
    inline SlurmCustomSetting& WithParameterValue(const char* value) { SetParameterValue(value); return *this;}
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
