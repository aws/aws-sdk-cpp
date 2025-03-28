﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/InstancePropertyFilterKey.h>
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
   * information by using tags. You specify tags by using a key-value
   * mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstancePropertyFilter">AWS
   * API Reference</a></p>
   */
  class InstancePropertyFilter
  {
  public:
    AWS_SSM_API InstancePropertyFilter() = default;
    AWS_SSM_API InstancePropertyFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstancePropertyFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter.</p>
     */
    inline InstancePropertyFilterKey GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(InstancePropertyFilterKey value) { m_keyHasBeenSet = true; m_key = value; }
    inline InstancePropertyFilter& WithKey(InstancePropertyFilterKey value) { SetKey(value); return *this;}
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
    InstancePropertyFilter& WithValueSet(ValueSetT&& value) { SetValueSet(std::forward<ValueSetT>(value)); return *this;}
    template<typename ValueSetT = Aws::String>
    InstancePropertyFilter& AddValueSet(ValueSetT&& value) { m_valueSetHasBeenSet = true; m_valueSet.emplace_back(std::forward<ValueSetT>(value)); return *this; }
    ///@}
  private:

    InstancePropertyFilterKey m_key{InstancePropertyFilterKey::NOT_SET};
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_valueSet;
    bool m_valueSetHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
