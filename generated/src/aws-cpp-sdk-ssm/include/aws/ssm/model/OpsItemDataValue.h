/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/OpsItemDataType.h>
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
   * <p>An object that defines the value of the key and its type in the
   * OperationalData map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsItemDataValue">AWS
   * API Reference</a></p>
   */
  class OpsItemDataValue
  {
  public:
    AWS_SSM_API OpsItemDataValue();
    AWS_SSM_API OpsItemDataValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsItemDataValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the OperationalData key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the OperationalData key.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the OperationalData key.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the OperationalData key.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the OperationalData key.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the OperationalData key.</p>
     */
    inline OpsItemDataValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the OperationalData key.</p>
     */
    inline OpsItemDataValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the OperationalData key.</p>
     */
    inline OpsItemDataValue& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The type of key-value pair. Valid types include <code>SearchableString</code>
     * and <code>String</code>.</p>
     */
    inline const OpsItemDataType& GetType() const{ return m_type; }

    /**
     * <p>The type of key-value pair. Valid types include <code>SearchableString</code>
     * and <code>String</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of key-value pair. Valid types include <code>SearchableString</code>
     * and <code>String</code>.</p>
     */
    inline void SetType(const OpsItemDataType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of key-value pair. Valid types include <code>SearchableString</code>
     * and <code>String</code>.</p>
     */
    inline void SetType(OpsItemDataType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of key-value pair. Valid types include <code>SearchableString</code>
     * and <code>String</code>.</p>
     */
    inline OpsItemDataValue& WithType(const OpsItemDataType& value) { SetType(value); return *this;}

    /**
     * <p>The type of key-value pair. Valid types include <code>SearchableString</code>
     * and <code>String</code>.</p>
     */
    inline OpsItemDataValue& WithType(OpsItemDataType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    OpsItemDataType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
