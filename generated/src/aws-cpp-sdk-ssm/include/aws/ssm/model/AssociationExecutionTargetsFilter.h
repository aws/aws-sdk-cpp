/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/AssociationExecutionTargetsFilterKey.h>
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
   * <p>Filters for the association execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociationExecutionTargetsFilter">AWS
   * API Reference</a></p>
   */
  class AssociationExecutionTargetsFilter
  {
  public:
    AWS_SSM_API AssociationExecutionTargetsFilter() = default;
    AWS_SSM_API AssociationExecutionTargetsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AssociationExecutionTargetsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key value used in the request.</p>
     */
    inline AssociationExecutionTargetsFilterKey GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(AssociationExecutionTargetsFilterKey value) { m_keyHasBeenSet = true; m_key = value; }
    inline AssociationExecutionTargetsFilter& WithKey(AssociationExecutionTargetsFilterKey value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value specified for the key.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    AssociationExecutionTargetsFilter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    AssociationExecutionTargetsFilterKey m_key{AssociationExecutionTargetsFilterKey::NOT_SET};
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
