/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/FieldToProtectType.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Specifies a field type and keys to protect in stored web request data. This
   * is part of the data protection configuration for a web ACL. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/FieldToProtect">AWS
   * API Reference</a></p>
   */
  class FieldToProtect
  {
  public:
    AWS_WAFV2_API FieldToProtect();
    AWS_WAFV2_API FieldToProtect(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API FieldToProtect& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the web request component type to protect. </p>
     */
    inline const FieldToProtectType& GetFieldType() const{ return m_fieldType; }
    inline bool FieldTypeHasBeenSet() const { return m_fieldTypeHasBeenSet; }
    inline void SetFieldType(const FieldToProtectType& value) { m_fieldTypeHasBeenSet = true; m_fieldType = value; }
    inline void SetFieldType(FieldToProtectType&& value) { m_fieldTypeHasBeenSet = true; m_fieldType = std::move(value); }
    inline FieldToProtect& WithFieldType(const FieldToProtectType& value) { SetFieldType(value); return *this;}
    inline FieldToProtect& WithFieldType(FieldToProtectType&& value) { SetFieldType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the keys to protect for the specified field type. If you don't
     * specify any key, then all keys for the field type are protected. </p>
     */
    inline const Aws::Vector<Aws::String>& GetFieldKeys() const{ return m_fieldKeys; }
    inline bool FieldKeysHasBeenSet() const { return m_fieldKeysHasBeenSet; }
    inline void SetFieldKeys(const Aws::Vector<Aws::String>& value) { m_fieldKeysHasBeenSet = true; m_fieldKeys = value; }
    inline void SetFieldKeys(Aws::Vector<Aws::String>&& value) { m_fieldKeysHasBeenSet = true; m_fieldKeys = std::move(value); }
    inline FieldToProtect& WithFieldKeys(const Aws::Vector<Aws::String>& value) { SetFieldKeys(value); return *this;}
    inline FieldToProtect& WithFieldKeys(Aws::Vector<Aws::String>&& value) { SetFieldKeys(std::move(value)); return *this;}
    inline FieldToProtect& AddFieldKeys(const Aws::String& value) { m_fieldKeysHasBeenSet = true; m_fieldKeys.push_back(value); return *this; }
    inline FieldToProtect& AddFieldKeys(Aws::String&& value) { m_fieldKeysHasBeenSet = true; m_fieldKeys.push_back(std::move(value)); return *this; }
    inline FieldToProtect& AddFieldKeys(const char* value) { m_fieldKeysHasBeenSet = true; m_fieldKeys.push_back(value); return *this; }
    ///@}
  private:

    FieldToProtectType m_fieldType;
    bool m_fieldTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_fieldKeys;
    bool m_fieldKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
