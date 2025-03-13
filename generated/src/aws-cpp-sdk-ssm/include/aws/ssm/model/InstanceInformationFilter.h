/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/InstanceInformationFilterKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes a filter for a specific list of managed nodes. You can filter node
   * information by using tags. You specify tags by using a key-value mapping.</p>
   * <p>Use this operation instead of the
   * <a>DescribeInstanceInformationRequest$InstanceInformationFilterList</a> method.
   * The <code>InstanceInformationFilterList</code> method is a legacy method and
   * doesn't support tags. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstanceInformationFilter">AWS
   * API Reference</a></p>
   */
  class InstanceInformationFilter
  {
  public:
    AWS_SSM_API InstanceInformationFilter() = default;
    AWS_SSM_API InstanceInformationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstanceInformationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter. </p>
     */
    inline InstanceInformationFilterKey GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(InstanceInformationFilterKey value) { m_keyHasBeenSet = true; m_key = value; }
    inline InstanceInformationFilter& WithKey(InstanceInformationFilterKey value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValueSet() const { return m_valueSet; }
    inline bool ValueSetHasBeenSet() const { return m_valueSetHasBeenSet; }
    template<typename ValueSetT = Aws::Vector<Aws::String>>
    void SetValueSet(ValueSetT&& value) { m_valueSetHasBeenSet = true; m_valueSet = std::forward<ValueSetT>(value); }
    template<typename ValueSetT = Aws::Vector<Aws::String>>
    InstanceInformationFilter& WithValueSet(ValueSetT&& value) { SetValueSet(std::forward<ValueSetT>(value)); return *this;}
    template<typename ValueSetT = Aws::String>
    InstanceInformationFilter& AddValueSet(ValueSetT&& value) { m_valueSetHasBeenSet = true; m_valueSet.emplace_back(std::forward<ValueSetT>(value)); return *this; }
    ///@}
  private:

    InstanceInformationFilterKey m_key{InstanceInformationFilterKey::NOT_SET};
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_valueSet;
    bool m_valueSetHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
