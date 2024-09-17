/**
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
    AWS_SSM_API InstancePropertyFilter();
    AWS_SSM_API InstancePropertyFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstancePropertyFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter.</p>
     */
    inline const InstancePropertyFilterKey& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const InstancePropertyFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(InstancePropertyFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline InstancePropertyFilter& WithKey(const InstancePropertyFilterKey& value) { SetKey(value); return *this;}
    inline InstancePropertyFilter& WithKey(InstancePropertyFilterKey&& value) { SetKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValueSet() const{ return m_valueSet; }
    inline bool ValueSetHasBeenSet() const { return m_valueSetHasBeenSet; }
    inline void SetValueSet(const Aws::Vector<Aws::String>& value) { m_valueSetHasBeenSet = true; m_valueSet = value; }
    inline void SetValueSet(Aws::Vector<Aws::String>&& value) { m_valueSetHasBeenSet = true; m_valueSet = std::move(value); }
    inline InstancePropertyFilter& WithValueSet(const Aws::Vector<Aws::String>& value) { SetValueSet(value); return *this;}
    inline InstancePropertyFilter& WithValueSet(Aws::Vector<Aws::String>&& value) { SetValueSet(std::move(value)); return *this;}
    inline InstancePropertyFilter& AddValueSet(const Aws::String& value) { m_valueSetHasBeenSet = true; m_valueSet.push_back(value); return *this; }
    inline InstancePropertyFilter& AddValueSet(Aws::String&& value) { m_valueSetHasBeenSet = true; m_valueSet.push_back(std::move(value)); return *this; }
    inline InstancePropertyFilter& AddValueSet(const char* value) { m_valueSetHasBeenSet = true; m_valueSet.push_back(value); return *this; }
    ///@}
  private:

    InstancePropertyFilterKey m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_valueSet;
    bool m_valueSetHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
