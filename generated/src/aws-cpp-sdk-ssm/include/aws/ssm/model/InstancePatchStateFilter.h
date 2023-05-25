/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/InstancePatchStateOperatorType.h>
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
   * <p>Defines a filter used in <a>DescribeInstancePatchStatesForPatchGroup</a> to
   * scope down the information returned by the API.</p> <p> <b>Example</b>: To
   * filter for all managed nodes in a patch group having more than three patches
   * with a <code>FailedCount</code> status, use the following for the filter:</p>
   * <ul> <li> <p>Value for <code>Key</code>: <code>FailedCount</code> </p> </li>
   * <li> <p>Value for <code>Type</code>: <code>GreaterThan</code> </p> </li> <li>
   * <p>Value for <code>Values</code>: <code>3</code> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstancePatchStateFilter">AWS
   * API Reference</a></p>
   */
  class InstancePatchStateFilter
  {
  public:
    AWS_SSM_API InstancePatchStateFilter();
    AWS_SSM_API InstancePatchStateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstancePatchStateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key for the filter. Supported values include the following:</p> <ul> <li>
     * <p> <code>InstalledCount</code> </p> </li> <li> <p>
     * <code>InstalledOtherCount</code> </p> </li> <li> <p>
     * <code>InstalledPendingRebootCount</code> </p> </li> <li> <p>
     * <code>InstalledRejectedCount</code> </p> </li> <li> <p>
     * <code>MissingCount</code> </p> </li> <li> <p> <code>FailedCount</code> </p>
     * </li> <li> <p> <code>UnreportedNotApplicableCount</code> </p> </li> <li> <p>
     * <code>NotApplicableCount</code> </p> </li> </ul>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key for the filter. Supported values include the following:</p> <ul> <li>
     * <p> <code>InstalledCount</code> </p> </li> <li> <p>
     * <code>InstalledOtherCount</code> </p> </li> <li> <p>
     * <code>InstalledPendingRebootCount</code> </p> </li> <li> <p>
     * <code>InstalledRejectedCount</code> </p> </li> <li> <p>
     * <code>MissingCount</code> </p> </li> <li> <p> <code>FailedCount</code> </p>
     * </li> <li> <p> <code>UnreportedNotApplicableCount</code> </p> </li> <li> <p>
     * <code>NotApplicableCount</code> </p> </li> </ul>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key for the filter. Supported values include the following:</p> <ul> <li>
     * <p> <code>InstalledCount</code> </p> </li> <li> <p>
     * <code>InstalledOtherCount</code> </p> </li> <li> <p>
     * <code>InstalledPendingRebootCount</code> </p> </li> <li> <p>
     * <code>InstalledRejectedCount</code> </p> </li> <li> <p>
     * <code>MissingCount</code> </p> </li> <li> <p> <code>FailedCount</code> </p>
     * </li> <li> <p> <code>UnreportedNotApplicableCount</code> </p> </li> <li> <p>
     * <code>NotApplicableCount</code> </p> </li> </ul>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key for the filter. Supported values include the following:</p> <ul> <li>
     * <p> <code>InstalledCount</code> </p> </li> <li> <p>
     * <code>InstalledOtherCount</code> </p> </li> <li> <p>
     * <code>InstalledPendingRebootCount</code> </p> </li> <li> <p>
     * <code>InstalledRejectedCount</code> </p> </li> <li> <p>
     * <code>MissingCount</code> </p> </li> <li> <p> <code>FailedCount</code> </p>
     * </li> <li> <p> <code>UnreportedNotApplicableCount</code> </p> </li> <li> <p>
     * <code>NotApplicableCount</code> </p> </li> </ul>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key for the filter. Supported values include the following:</p> <ul> <li>
     * <p> <code>InstalledCount</code> </p> </li> <li> <p>
     * <code>InstalledOtherCount</code> </p> </li> <li> <p>
     * <code>InstalledPendingRebootCount</code> </p> </li> <li> <p>
     * <code>InstalledRejectedCount</code> </p> </li> <li> <p>
     * <code>MissingCount</code> </p> </li> <li> <p> <code>FailedCount</code> </p>
     * </li> <li> <p> <code>UnreportedNotApplicableCount</code> </p> </li> <li> <p>
     * <code>NotApplicableCount</code> </p> </li> </ul>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key for the filter. Supported values include the following:</p> <ul> <li>
     * <p> <code>InstalledCount</code> </p> </li> <li> <p>
     * <code>InstalledOtherCount</code> </p> </li> <li> <p>
     * <code>InstalledPendingRebootCount</code> </p> </li> <li> <p>
     * <code>InstalledRejectedCount</code> </p> </li> <li> <p>
     * <code>MissingCount</code> </p> </li> <li> <p> <code>FailedCount</code> </p>
     * </li> <li> <p> <code>UnreportedNotApplicableCount</code> </p> </li> <li> <p>
     * <code>NotApplicableCount</code> </p> </li> </ul>
     */
    inline InstancePatchStateFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key for the filter. Supported values include the following:</p> <ul> <li>
     * <p> <code>InstalledCount</code> </p> </li> <li> <p>
     * <code>InstalledOtherCount</code> </p> </li> <li> <p>
     * <code>InstalledPendingRebootCount</code> </p> </li> <li> <p>
     * <code>InstalledRejectedCount</code> </p> </li> <li> <p>
     * <code>MissingCount</code> </p> </li> <li> <p> <code>FailedCount</code> </p>
     * </li> <li> <p> <code>UnreportedNotApplicableCount</code> </p> </li> <li> <p>
     * <code>NotApplicableCount</code> </p> </li> </ul>
     */
    inline InstancePatchStateFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key for the filter. Supported values include the following:</p> <ul> <li>
     * <p> <code>InstalledCount</code> </p> </li> <li> <p>
     * <code>InstalledOtherCount</code> </p> </li> <li> <p>
     * <code>InstalledPendingRebootCount</code> </p> </li> <li> <p>
     * <code>InstalledRejectedCount</code> </p> </li> <li> <p>
     * <code>MissingCount</code> </p> </li> <li> <p> <code>FailedCount</code> </p>
     * </li> <li> <p> <code>UnreportedNotApplicableCount</code> </p> </li> <li> <p>
     * <code>NotApplicableCount</code> </p> </li> </ul>
     */
    inline InstancePatchStateFilter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value for the filter. Must be an integer greater than or equal to 0.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value for the filter. Must be an integer greater than or equal to 0.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value for the filter. Must be an integer greater than or equal to 0.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value for the filter. Must be an integer greater than or equal to 0.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value for the filter. Must be an integer greater than or equal to 0.</p>
     */
    inline InstancePatchStateFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value for the filter. Must be an integer greater than or equal to 0.</p>
     */
    inline InstancePatchStateFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value for the filter. Must be an integer greater than or equal to 0.</p>
     */
    inline InstancePatchStateFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value for the filter. Must be an integer greater than or equal to 0.</p>
     */
    inline InstancePatchStateFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value for the filter. Must be an integer greater than or equal to 0.</p>
     */
    inline InstancePatchStateFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The type of comparison that should be performed for the value.</p>
     */
    inline const InstancePatchStateOperatorType& GetType() const{ return m_type; }

    /**
     * <p>The type of comparison that should be performed for the value.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of comparison that should be performed for the value.</p>
     */
    inline void SetType(const InstancePatchStateOperatorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of comparison that should be performed for the value.</p>
     */
    inline void SetType(InstancePatchStateOperatorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of comparison that should be performed for the value.</p>
     */
    inline InstancePatchStateFilter& WithType(const InstancePatchStateOperatorType& value) { SetType(value); return *this;}

    /**
     * <p>The type of comparison that should be performed for the value.</p>
     */
    inline InstancePatchStateFilter& WithType(InstancePatchStateOperatorType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    InstancePatchStateOperatorType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
