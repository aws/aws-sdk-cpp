/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Parameter.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ResetDBParameterGroupMessage">AWS
   * API Reference</a></p>
   */
  class ResetDBParameterGroupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ResetDBParameterGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetDBParameterGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * match the name of an existing <code>DBParameterGroup</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const { return m_dBParameterGroupName; }
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }
    template<typename DBParameterGroupNameT = Aws::String>
    void SetDBParameterGroupName(DBParameterGroupNameT&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::forward<DBParameterGroupNameT>(value); }
    template<typename DBParameterGroupNameT = Aws::String>
    ResetDBParameterGroupRequest& WithDBParameterGroupName(DBParameterGroupNameT&& value) { SetDBParameterGroupName(std::forward<DBParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to reset all parameters in the DB parameter group to
     * default values. By default, all parameters in the DB parameter group are reset
     * to default values.</p>
     */
    inline bool GetResetAllParameters() const { return m_resetAllParameters; }
    inline bool ResetAllParametersHasBeenSet() const { return m_resetAllParametersHasBeenSet; }
    inline void SetResetAllParameters(bool value) { m_resetAllParametersHasBeenSet = true; m_resetAllParameters = value; }
    inline ResetDBParameterGroupRequest& WithResetAllParameters(bool value) { SetResetAllParameters(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To reset the entire DB parameter group, specify the
     * <code>DBParameterGroup</code> name and <code>ResetAllParameters</code>
     * parameters. To reset specific parameters, provide a list of the following:
     * <code>ParameterName</code> and <code>ApplyMethod</code>. A maximum of 20
     * parameters can be modified in a single request.</p> <p> <b>MySQL</b> </p>
     * <p>Valid Values (for Apply method): <code>immediate</code> |
     * <code>pending-reboot</code> </p> <p>You can use the immediate value with dynamic
     * parameters only. You can use the <code>pending-reboot</code> value for both
     * dynamic and static parameters, and changes are applied when DB instance
     * reboots.</p> <p> <b>MariaDB</b> </p> <p>Valid Values (for Apply method):
     * <code>immediate</code> | <code>pending-reboot</code> </p> <p>You can use the
     * immediate value with dynamic parameters only. You can use the
     * <code>pending-reboot</code> value for both dynamic and static parameters, and
     * changes are applied when DB instance reboots.</p> <p> <b>Oracle</b> </p>
     * <p>Valid Values (for Apply method): <code>pending-reboot</code> </p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<Parameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<Parameter>>
    ResetDBParameterGroupRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = Parameter>
    ResetDBParameterGroupRequest& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet = false;

    bool m_resetAllParameters{false};
    bool m_resetAllParametersHasBeenSet = false;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
