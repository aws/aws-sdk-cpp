/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>The parameter key-value pair used to update a provisioned
   * product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProvisioningParameter">AWS
   * API Reference</a></p>
   */
  class UpdateProvisioningParameter
  {
  public:
    AWS_SERVICECATALOG_API UpdateProvisioningParameter() = default;
    AWS_SERVICECATALOG_API UpdateProvisioningParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API UpdateProvisioningParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameter key.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    UpdateProvisioningParameter& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter value.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    UpdateProvisioningParameter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, <code>Value</code> is ignored and the previous parameter
     * value is kept.</p>
     */
    inline bool GetUsePreviousValue() const { return m_usePreviousValue; }
    inline bool UsePreviousValueHasBeenSet() const { return m_usePreviousValueHasBeenSet; }
    inline void SetUsePreviousValue(bool value) { m_usePreviousValueHasBeenSet = true; m_usePreviousValue = value; }
    inline UpdateProvisioningParameter& WithUsePreviousValue(bool value) { SetUsePreviousValue(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    bool m_usePreviousValue{false};
    bool m_usePreviousValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
