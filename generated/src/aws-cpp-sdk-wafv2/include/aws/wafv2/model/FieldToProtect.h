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
    AWS_WAFV2_API FieldToProtect() = default;
    AWS_WAFV2_API FieldToProtect(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API FieldToProtect& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the web request component type to protect. </p>
     */
    inline FieldToProtectType GetFieldType() const { return m_fieldType; }
    inline bool FieldTypeHasBeenSet() const { return m_fieldTypeHasBeenSet; }
    inline void SetFieldType(FieldToProtectType value) { m_fieldTypeHasBeenSet = true; m_fieldType = value; }
    inline FieldToProtect& WithFieldType(FieldToProtectType value) { SetFieldType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the keys to protect for the specified field type. If you don't
     * specify any key, then all keys for the field type are protected. </p>
     */
    inline const Aws::Vector<Aws::String>& GetFieldKeys() const { return m_fieldKeys; }
    inline bool FieldKeysHasBeenSet() const { return m_fieldKeysHasBeenSet; }
    template<typename FieldKeysT = Aws::Vector<Aws::String>>
    void SetFieldKeys(FieldKeysT&& value) { m_fieldKeysHasBeenSet = true; m_fieldKeys = std::forward<FieldKeysT>(value); }
    template<typename FieldKeysT = Aws::Vector<Aws::String>>
    FieldToProtect& WithFieldKeys(FieldKeysT&& value) { SetFieldKeys(std::forward<FieldKeysT>(value)); return *this;}
    template<typename FieldKeysT = Aws::String>
    FieldToProtect& AddFieldKeys(FieldKeysT&& value) { m_fieldKeysHasBeenSet = true; m_fieldKeys.emplace_back(std::forward<FieldKeysT>(value)); return *this; }
    ///@}
  private:

    FieldToProtectType m_fieldType{FieldToProtectType::NOT_SET};
    bool m_fieldTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_fieldKeys;
    bool m_fieldKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
