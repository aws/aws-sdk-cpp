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
    AWS_SERVICECATALOG_API UpdateProvisioningParameter();
    AWS_SERVICECATALOG_API UpdateProvisioningParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API UpdateProvisioningParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The parameter key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The parameter key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The parameter key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The parameter key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The parameter key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The parameter key.</p>
     */
    inline UpdateProvisioningParameter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The parameter key.</p>
     */
    inline UpdateProvisioningParameter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The parameter key.</p>
     */
    inline UpdateProvisioningParameter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The parameter value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The parameter value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The parameter value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The parameter value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The parameter value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The parameter value.</p>
     */
    inline UpdateProvisioningParameter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The parameter value.</p>
     */
    inline UpdateProvisioningParameter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The parameter value.</p>
     */
    inline UpdateProvisioningParameter& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>If set to true, <code>Value</code> is ignored and the previous parameter
     * value is kept.</p>
     */
    inline bool GetUsePreviousValue() const{ return m_usePreviousValue; }

    /**
     * <p>If set to true, <code>Value</code> is ignored and the previous parameter
     * value is kept.</p>
     */
    inline bool UsePreviousValueHasBeenSet() const { return m_usePreviousValueHasBeenSet; }

    /**
     * <p>If set to true, <code>Value</code> is ignored and the previous parameter
     * value is kept.</p>
     */
    inline void SetUsePreviousValue(bool value) { m_usePreviousValueHasBeenSet = true; m_usePreviousValue = value; }

    /**
     * <p>If set to true, <code>Value</code> is ignored and the previous parameter
     * value is kept.</p>
     */
    inline UpdateProvisioningParameter& WithUsePreviousValue(bool value) { SetUsePreviousValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    bool m_usePreviousValue;
    bool m_usePreviousValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
