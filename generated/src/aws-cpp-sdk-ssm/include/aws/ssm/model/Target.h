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
   * following.</p> <p> <b>For all Systems Manager capabilities:</b> </p> <ul> <li>
   * <p> <code>Key=tag-key,Values=tag-value-1,tag-value-2</code> </p> </li> </ul> <p>
   * <b>For Automation and Change Manager:</b> </p> <ul> <li> <p>
   * <code>Key=tag:tag-key,Values=tag-value</code> </p> </li> <li> <p>
   * <code>Key=ResourceGroup,Values=resource-group-name</code> </p> </li> <li> <p>
   * <code>Key=ParameterValues,Values=value-1,value-2,value-3</code> </p> </li> <li>
   * <p>To target all instances in the Amazon Web Services Region:</p> <ul> <li> <p>
   * <code>Key=AWS::EC2::Instance,Values=*</code> </p> </li> <li> <p>
   * <code>Key=InstanceIds,Values=*</code> </p> </li> </ul> </li> </ul> <p> <b>For
   * Run Command and Maintenance Windows:</b> </p> <ul> <li> <p>
   * <code>Key=InstanceIds,Values=instance-id-1,instance-id-2,instance-id-3</code>
   * </p> </li> <li> <p> <code>Key=tag:tag-key,Values=tag-value-1,tag-value-2</code>
   * </p> </li> <li> <p>
   * <code>Key=resource-groups:Name,Values=resource-group-name</code> </p> </li> <li>
   * <p>Additionally, Maintenance Windows support targeting resource types:</p> <ul>
   * <li> <p>
   * <code>Key=resource-groups:ResourceTypeFilters,Values=resource-type-1,resource-type-2</code>
   * </p> </li> </ul> </li> </ul> <p> <b>For State Manager:</b> </p> <ul> <li> <p>
   * <code>Key=InstanceIds,Values=instance-id-1,instance-id-2,instance-id-3</code>
   * </p> </li> <li> <p> <code>Key=tag:tag-key,Values=tag-value-1,tag-value-2</code>
   * </p> </li> <li> <p>To target all instances in the Amazon Web Services
   * Region:</p> <ul> <li> <p> <code>Key=InstanceIds,Values=*</code> </p> </li> </ul>
   * </li> </ul> <p>For more information about how to send commands that target
   * managed nodes using <code>Key,Value</code> parameters, see <a
   * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/send-commands-multiple.html#send-commands-targeting">Targeting
   * multiple managed nodes</a> in the <i>Amazon Web Services Systems Manager User
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


    ///@{
    /**
     * <p>User-defined criteria for sending commands that target managed nodes that
     * meet the criteria.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline Target& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline Target& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline Target& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-defined criteria that maps to <code>Key</code>. For example, if you
     * specified <code>tag:ServerRole</code>, you could specify
     * <code>value:WebServer</code> to run a command on instances that include EC2 tags
     * of <code>ServerRole,WebServer</code>. </p> <p>Depending on the type of target,
     * the maximum number of values for a key might be lower than the global maximum of
     * 50.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline Target& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline Target& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline Target& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline Target& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline Target& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
