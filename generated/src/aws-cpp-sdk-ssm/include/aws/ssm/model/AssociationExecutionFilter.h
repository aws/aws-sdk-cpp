/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/AssociationExecutionFilterKey.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/AssociationFilterOperatorType.h>
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
   * <p>Filters used in the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociationExecutionFilter">AWS
   * API Reference</a></p>
   */
  class AssociationExecutionFilter
  {
  public:
    AWS_SSM_API AssociationExecutionFilter() = default;
    AWS_SSM_API AssociationExecutionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AssociationExecutionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key value used in the request.</p>
     */
    inline AssociationExecutionFilterKey GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(AssociationExecutionFilterKey value) { m_keyHasBeenSet = true; m_key = value; }
    inline AssociationExecutionFilter& WithKey(AssociationExecutionFilterKey value) { SetKey(value); return *this;}
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
    AssociationExecutionFilter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter type specified in the request.</p>
     */
    inline AssociationFilterOperatorType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AssociationFilterOperatorType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AssociationExecutionFilter& WithType(AssociationFilterOperatorType value) { SetType(value); return *this;}
    ///@}
  private:

    AssociationExecutionFilterKey m_key{AssociationExecutionFilterKey::NOT_SET};
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    AssociationFilterOperatorType m_type{AssociationFilterOperatorType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
