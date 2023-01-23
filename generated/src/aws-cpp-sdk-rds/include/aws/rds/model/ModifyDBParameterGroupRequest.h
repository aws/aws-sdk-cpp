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
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBParameterGroupMessage">AWS
   * API Reference</a></p>
   */
  class ModifyDBParameterGroupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyDBParameterGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBParameterGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the name of an existing <code>DBParameterGroup</code>.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the name of an existing <code>DBParameterGroup</code>.</p>
     * </li> </ul>
     */
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the name of an existing <code>DBParameterGroup</code>.</p>
     * </li> </ul>
     */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the name of an existing <code>DBParameterGroup</code>.</p>
     * </li> </ul>
     */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the name of an existing <code>DBParameterGroup</code>.</p>
     * </li> </ul>
     */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the name of an existing <code>DBParameterGroup</code>.</p>
     * </li> </ul>
     */
    inline ModifyDBParameterGroupRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the name of an existing <code>DBParameterGroup</code>.</p>
     * </li> </ul>
     */
    inline ModifyDBParameterGroupRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>If
     * supplied, must match the name of an existing <code>DBParameterGroup</code>.</p>
     * </li> </ul>
     */
    inline ModifyDBParameterGroupRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}


    /**
     * <p>An array of parameter names, values, and the application methods for the
     * parameter update. At least one parameter name, value, and application method
     * must be supplied; later arguments are optional. A maximum of 20 parameters can
     * be modified in a single request.</p> <p>Valid Values (for the application
     * method): <code>immediate | pending-reboot</code> </p> <p>You can use the
     * <code>immediate</code> value with dynamic parameters only. You can use the
     * <code>pending-reboot</code> value for both dynamic and static parameters.</p>
     * <p>When the application method is <code>immediate</code>, changes to dynamic
     * parameters are applied immediately to the DB instances associated with the
     * parameter group.</p> <p>When the application method is
     * <code>pending-reboot</code>, changes to dynamic and static parameters are
     * applied after a reboot without failover to the DB instances associated with the
     * parameter group.</p>  <p>You can't use <code>pending-reboot</code> with
     * dynamic parameters on RDS for SQL Server DB instances. Use
     * <code>immediate</code>.</p>  <p>For more information on modifying DB
     * parameters, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithParamGroups.html">Working
     * with DB parameter groups</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>An array of parameter names, values, and the application methods for the
     * parameter update. At least one parameter name, value, and application method
     * must be supplied; later arguments are optional. A maximum of 20 parameters can
     * be modified in a single request.</p> <p>Valid Values (for the application
     * method): <code>immediate | pending-reboot</code> </p> <p>You can use the
     * <code>immediate</code> value with dynamic parameters only. You can use the
     * <code>pending-reboot</code> value for both dynamic and static parameters.</p>
     * <p>When the application method is <code>immediate</code>, changes to dynamic
     * parameters are applied immediately to the DB instances associated with the
     * parameter group.</p> <p>When the application method is
     * <code>pending-reboot</code>, changes to dynamic and static parameters are
     * applied after a reboot without failover to the DB instances associated with the
     * parameter group.</p>  <p>You can't use <code>pending-reboot</code> with
     * dynamic parameters on RDS for SQL Server DB instances. Use
     * <code>immediate</code>.</p>  <p>For more information on modifying DB
     * parameters, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithParamGroups.html">Working
     * with DB parameter groups</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>An array of parameter names, values, and the application methods for the
     * parameter update. At least one parameter name, value, and application method
     * must be supplied; later arguments are optional. A maximum of 20 parameters can
     * be modified in a single request.</p> <p>Valid Values (for the application
     * method): <code>immediate | pending-reboot</code> </p> <p>You can use the
     * <code>immediate</code> value with dynamic parameters only. You can use the
     * <code>pending-reboot</code> value for both dynamic and static parameters.</p>
     * <p>When the application method is <code>immediate</code>, changes to dynamic
     * parameters are applied immediately to the DB instances associated with the
     * parameter group.</p> <p>When the application method is
     * <code>pending-reboot</code>, changes to dynamic and static parameters are
     * applied after a reboot without failover to the DB instances associated with the
     * parameter group.</p>  <p>You can't use <code>pending-reboot</code> with
     * dynamic parameters on RDS for SQL Server DB instances. Use
     * <code>immediate</code>.</p>  <p>For more information on modifying DB
     * parameters, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithParamGroups.html">Working
     * with DB parameter groups</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>An array of parameter names, values, and the application methods for the
     * parameter update. At least one parameter name, value, and application method
     * must be supplied; later arguments are optional. A maximum of 20 parameters can
     * be modified in a single request.</p> <p>Valid Values (for the application
     * method): <code>immediate | pending-reboot</code> </p> <p>You can use the
     * <code>immediate</code> value with dynamic parameters only. You can use the
     * <code>pending-reboot</code> value for both dynamic and static parameters.</p>
     * <p>When the application method is <code>immediate</code>, changes to dynamic
     * parameters are applied immediately to the DB instances associated with the
     * parameter group.</p> <p>When the application method is
     * <code>pending-reboot</code>, changes to dynamic and static parameters are
     * applied after a reboot without failover to the DB instances associated with the
     * parameter group.</p>  <p>You can't use <code>pending-reboot</code> with
     * dynamic parameters on RDS for SQL Server DB instances. Use
     * <code>immediate</code>.</p>  <p>For more information on modifying DB
     * parameters, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithParamGroups.html">Working
     * with DB parameter groups</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>An array of parameter names, values, and the application methods for the
     * parameter update. At least one parameter name, value, and application method
     * must be supplied; later arguments are optional. A maximum of 20 parameters can
     * be modified in a single request.</p> <p>Valid Values (for the application
     * method): <code>immediate | pending-reboot</code> </p> <p>You can use the
     * <code>immediate</code> value with dynamic parameters only. You can use the
     * <code>pending-reboot</code> value for both dynamic and static parameters.</p>
     * <p>When the application method is <code>immediate</code>, changes to dynamic
     * parameters are applied immediately to the DB instances associated with the
     * parameter group.</p> <p>When the application method is
     * <code>pending-reboot</code>, changes to dynamic and static parameters are
     * applied after a reboot without failover to the DB instances associated with the
     * parameter group.</p>  <p>You can't use <code>pending-reboot</code> with
     * dynamic parameters on RDS for SQL Server DB instances. Use
     * <code>immediate</code>.</p>  <p>For more information on modifying DB
     * parameters, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithParamGroups.html">Working
     * with DB parameter groups</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline ModifyDBParameterGroupRequest& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>An array of parameter names, values, and the application methods for the
     * parameter update. At least one parameter name, value, and application method
     * must be supplied; later arguments are optional. A maximum of 20 parameters can
     * be modified in a single request.</p> <p>Valid Values (for the application
     * method): <code>immediate | pending-reboot</code> </p> <p>You can use the
     * <code>immediate</code> value with dynamic parameters only. You can use the
     * <code>pending-reboot</code> value for both dynamic and static parameters.</p>
     * <p>When the application method is <code>immediate</code>, changes to dynamic
     * parameters are applied immediately to the DB instances associated with the
     * parameter group.</p> <p>When the application method is
     * <code>pending-reboot</code>, changes to dynamic and static parameters are
     * applied after a reboot without failover to the DB instances associated with the
     * parameter group.</p>  <p>You can't use <code>pending-reboot</code> with
     * dynamic parameters on RDS for SQL Server DB instances. Use
     * <code>immediate</code>.</p>  <p>For more information on modifying DB
     * parameters, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithParamGroups.html">Working
     * with DB parameter groups</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline ModifyDBParameterGroupRequest& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>An array of parameter names, values, and the application methods for the
     * parameter update. At least one parameter name, value, and application method
     * must be supplied; later arguments are optional. A maximum of 20 parameters can
     * be modified in a single request.</p> <p>Valid Values (for the application
     * method): <code>immediate | pending-reboot</code> </p> <p>You can use the
     * <code>immediate</code> value with dynamic parameters only. You can use the
     * <code>pending-reboot</code> value for both dynamic and static parameters.</p>
     * <p>When the application method is <code>immediate</code>, changes to dynamic
     * parameters are applied immediately to the DB instances associated with the
     * parameter group.</p> <p>When the application method is
     * <code>pending-reboot</code>, changes to dynamic and static parameters are
     * applied after a reboot without failover to the DB instances associated with the
     * parameter group.</p>  <p>You can't use <code>pending-reboot</code> with
     * dynamic parameters on RDS for SQL Server DB instances. Use
     * <code>immediate</code>.</p>  <p>For more information on modifying DB
     * parameters, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithParamGroups.html">Working
     * with DB parameter groups</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline ModifyDBParameterGroupRequest& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>An array of parameter names, values, and the application methods for the
     * parameter update. At least one parameter name, value, and application method
     * must be supplied; later arguments are optional. A maximum of 20 parameters can
     * be modified in a single request.</p> <p>Valid Values (for the application
     * method): <code>immediate | pending-reboot</code> </p> <p>You can use the
     * <code>immediate</code> value with dynamic parameters only. You can use the
     * <code>pending-reboot</code> value for both dynamic and static parameters.</p>
     * <p>When the application method is <code>immediate</code>, changes to dynamic
     * parameters are applied immediately to the DB instances associated with the
     * parameter group.</p> <p>When the application method is
     * <code>pending-reboot</code>, changes to dynamic and static parameters are
     * applied after a reboot without failover to the DB instances associated with the
     * parameter group.</p>  <p>You can't use <code>pending-reboot</code> with
     * dynamic parameters on RDS for SQL Server DB instances. Use
     * <code>immediate</code>.</p>  <p>For more information on modifying DB
     * parameters, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithParamGroups.html">Working
     * with DB parameter groups</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline ModifyDBParameterGroupRequest& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet = false;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
