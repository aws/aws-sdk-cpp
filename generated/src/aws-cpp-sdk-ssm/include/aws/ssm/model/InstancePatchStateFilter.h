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
    AWS_SSM_API InstancePatchStateFilter() = default;
    AWS_SSM_API InstancePatchStateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstancePatchStateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    InstancePatchStateFilter& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the filter. Must be an integer greater than or equal to 0.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    InstancePatchStateFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    InstancePatchStateFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of comparison that should be performed for the value.</p>
     */
    inline InstancePatchStateOperatorType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(InstancePatchStateOperatorType value) { m_typeHasBeenSet = true; m_type = value; }
    inline InstancePatchStateFilter& WithType(InstancePatchStateOperatorType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    InstancePatchStateOperatorType m_type{InstancePatchStateOperatorType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
