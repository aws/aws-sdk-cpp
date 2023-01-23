/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>An array of search criteria that targets managed nodes using a key-value pair
   * that you specify.</p>  <p> One or more targets must be specified for
   * maintenance window Run Command-type tasks. Depending on the task, targets are
   * optional for other maintenance window task types (Automation, Lambda, and Step
   * Functions). For more information about running tasks that don't specify targets,
   * see <a
   * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">Registering
   * maintenance window tasks without targets</a> in the <i>Amazon Web Services
   * Systems Manager User Guide</i>.</p>  <p>Supported formats include the
   * following.</p> <ul> <li> <p>
   * <code>Key=InstanceIds,Values=&lt;instance-id-1&gt;,&lt;instance-id-2&gt;,&lt;instance-id-3&gt;</code>
   * </p> </li> <li> <p>
   * <code>Key=tag:&lt;my-tag-key&gt;,Values=&lt;my-tag-value-1&gt;,&lt;my-tag-value-2&gt;</code>
   * </p> </li> <li> <p>
   * <code>Key=tag-key,Values=&lt;my-tag-key-1&gt;,&lt;my-tag-key-2&gt;</code> </p>
   * </li> <li> <p> <b>Run Command and Maintenance window targets only</b>:
   * <code>Key=resource-groups:Name,Values=&lt;resource-group-name&gt;</code> </p>
   * </li> <li> <p> <b>Maintenance window targets only</b>:
   * <code>Key=resource-groups:ResourceTypeFilters,Values=&lt;resource-type-1&gt;,&lt;resource-type-2&gt;</code>
   * </p> </li> <li> <p> <b>Automation targets only</b>:
   * <code>Key=ResourceGroup;Values=&lt;resource-group-name&gt;</code> </p> </li>
   * </ul> <p>For example:</p> <ul> <li> <p>
   * <code>Key=InstanceIds,Values=i-02573cafcfEXAMPLE,i-0471e04240EXAMPLE,i-07782c72faEXAMPLE</code>
   * </p> </li> <li> <p>
   * <code>Key=tag:CostCenter,Values=CostCenter1,CostCenter2,CostCenter3</code> </p>
   * </li> <li> <p> <code>Key=tag-key,Values=Name,Instance-Type,CostCenter</code>
   * </p> </li> <li> <p> <b>Run Command and Maintenance window targets only</b>:
   * <code>Key=resource-groups:Name,Values=ProductionResourceGroup</code> </p>
   * <p>This example demonstrates how to target all resources in the resource group
   * <b>ProductionResourceGroup</b> in your maintenance window.</p> </li> <li> <p>
   * <b>Maintenance window targets only</b>:
   * <code>Key=resource-groups:ResourceTypeFilters,Values=AWS::EC2::INSTANCE,AWS::EC2::VPC</code>
   * </p> <p>This example demonstrates how to target only Amazon Elastic Compute
   * Cloud (Amazon EC2) instances and VPCs in your maintenance window.</p> </li> <li>
   * <p> <b>Automation targets only</b>:
   * <code>Key=ResourceGroup,Values=MyResourceGroup</code> </p> </li> <li> <p>
   * <b>State Manager association targets only</b>:
   * <code>Key=InstanceIds,Values=*</code> </p> <p>This example demonstrates how to
   * target all managed instances in the Amazon Web Services Region where the
   * association was created.</p> </li> </ul> <p>For more information about how to
   * send commands that target managed nodes using <code>Key,Value</code> parameters,
   * see <a
   * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-targeting">Targeting
   * multiple instances</a> in the <i>Amazon Web Services Systems Manager User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/Target">AWS API
   * Reference</a></p>
   */
  class Target
  {
  public:
    AWS_SSM_API Target();
    AWS_SSM_API Target(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>User-defined criteria for sending commands that target managed nodes that
     * meet the criteria.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>User-defined criteria for sending commands that target managed nodes that
     * meet the criteria.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>User-defined criteria for sending commands that target managed nodes that
     * meet the criteria.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>User-defined criteria for sending commands that target managed nodes that
     * meet the criteria.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>User-defined criteria for sending commands that target managed nodes that
     * meet the criteria.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>User-defined criteria for sending commands that target managed nodes that
     * meet the criteria.</p>
     */
    inline Target& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>User-defined criteria for sending commands that target managed nodes that
     * meet the criteria.</p>
     */
    inline Target& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>User-defined criteria for sending commands that target managed nodes that
     * meet the criteria.</p>
     */
    inline Target& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>User-defined criteria that maps to <code>Key</code>. For example, if you
     * specified <code>tag:ServerRole</code>, you could specify
     * <code>value:WebServer</code> to run a command on instances that include EC2 tags
     * of <code>ServerRole,WebServer</code>. </p> <p>Depending on the type of target,
     * the maximum number of values for a key might be lower than the global maximum of
     * 50.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>User-defined criteria that maps to <code>Key</code>. For example, if you
     * specified <code>tag:ServerRole</code>, you could specify
     * <code>value:WebServer</code> to run a command on instances that include EC2 tags
     * of <code>ServerRole,WebServer</code>. </p> <p>Depending on the type of target,
     * the maximum number of values for a key might be lower than the global maximum of
     * 50.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>User-defined criteria that maps to <code>Key</code>. For example, if you
     * specified <code>tag:ServerRole</code>, you could specify
     * <code>value:WebServer</code> to run a command on instances that include EC2 tags
     * of <code>ServerRole,WebServer</code>. </p> <p>Depending on the type of target,
     * the maximum number of values for a key might be lower than the global maximum of
     * 50.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>User-defined criteria that maps to <code>Key</code>. For example, if you
     * specified <code>tag:ServerRole</code>, you could specify
     * <code>value:WebServer</code> to run a command on instances that include EC2 tags
     * of <code>ServerRole,WebServer</code>. </p> <p>Depending on the type of target,
     * the maximum number of values for a key might be lower than the global maximum of
     * 50.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>User-defined criteria that maps to <code>Key</code>. For example, if you
     * specified <code>tag:ServerRole</code>, you could specify
     * <code>value:WebServer</code> to run a command on instances that include EC2 tags
     * of <code>ServerRole,WebServer</code>. </p> <p>Depending on the type of target,
     * the maximum number of values for a key might be lower than the global maximum of
     * 50.</p>
     */
    inline Target& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>User-defined criteria that maps to <code>Key</code>. For example, if you
     * specified <code>tag:ServerRole</code>, you could specify
     * <code>value:WebServer</code> to run a command on instances that include EC2 tags
     * of <code>ServerRole,WebServer</code>. </p> <p>Depending on the type of target,
     * the maximum number of values for a key might be lower than the global maximum of
     * 50.</p>
     */
    inline Target& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>User-defined criteria that maps to <code>Key</code>. For example, if you
     * specified <code>tag:ServerRole</code>, you could specify
     * <code>value:WebServer</code> to run a command on instances that include EC2 tags
     * of <code>ServerRole,WebServer</code>. </p> <p>Depending on the type of target,
     * the maximum number of values for a key might be lower than the global maximum of
     * 50.</p>
     */
    inline Target& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>User-defined criteria that maps to <code>Key</code>. For example, if you
     * specified <code>tag:ServerRole</code>, you could specify
     * <code>value:WebServer</code> to run a command on instances that include EC2 tags
     * of <code>ServerRole,WebServer</code>. </p> <p>Depending on the type of target,
     * the maximum number of values for a key might be lower than the global maximum of
     * 50.</p>
     */
    inline Target& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>User-defined criteria that maps to <code>Key</code>. For example, if you
     * specified <code>tag:ServerRole</code>, you could specify
     * <code>value:WebServer</code> to run a command on instances that include EC2 tags
     * of <code>ServerRole,WebServer</code>. </p> <p>Depending on the type of target,
     * the maximum number of values for a key might be lower than the global maximum of
     * 50.</p>
     */
    inline Target& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
