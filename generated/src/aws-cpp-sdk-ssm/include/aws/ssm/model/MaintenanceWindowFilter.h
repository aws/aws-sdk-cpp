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
   * <p>Filter used in the request. Supported filter keys depend on the API operation
   * that includes the filter. API operations that use
   * <code>MaintenanceWindowFilter&gt;</code> include the following:</p> <ul> <li>
   * <p> <a>DescribeMaintenanceWindowExecutions</a> </p> </li> <li> <p>
   * <a>DescribeMaintenanceWindowExecutionTaskInvocations</a> </p> </li> <li> <p>
   * <a>DescribeMaintenanceWindowExecutionTasks</a> </p> </li> <li> <p>
   * <a>DescribeMaintenanceWindows</a> </p> </li> <li> <p>
   * <a>DescribeMaintenanceWindowTargets</a> </p> </li> <li> <p>
   * <a>DescribeMaintenanceWindowTasks</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowFilter">AWS
   * API Reference</a></p>
   */
  class MaintenanceWindowFilter
  {
  public:
    AWS_SSM_API MaintenanceWindowFilter();
    AWS_SSM_API MaintenanceWindowFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API MaintenanceWindowFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the filter.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the filter.</p>
     */
    inline MaintenanceWindowFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline MaintenanceWindowFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline MaintenanceWindowFilter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The filter values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The filter values.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The filter values.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The filter values.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The filter values.</p>
     */
    inline MaintenanceWindowFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The filter values.</p>
     */
    inline MaintenanceWindowFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The filter values.</p>
     */
    inline MaintenanceWindowFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The filter values.</p>
     */
    inline MaintenanceWindowFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The filter values.</p>
     */
    inline MaintenanceWindowFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
