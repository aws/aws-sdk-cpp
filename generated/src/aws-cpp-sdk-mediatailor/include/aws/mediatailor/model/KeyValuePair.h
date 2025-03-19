/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>For <code>SCTE35_ENHANCED</code> output, defines a key and corresponding
   * value. MediaTailor generates these pairs within the
   * <code>EXT-X-ASSET</code>tag.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/KeyValuePair">AWS
   * API Reference</a></p>
   */
  class KeyValuePair
  {
  public:
    AWS_MEDIATAILOR_API KeyValuePair() = default;
    AWS_MEDIATAILOR_API KeyValuePair(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API KeyValuePair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For <code>SCTE35_ENHANCED</code> output, defines a key. MediaTailor takes
     * this key, and its associated value, and generates the key/value pair within the
     * <code>EXT-X-ASSET</code>tag. If you specify a key, you must also specify a
     * corresponding value.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    KeyValuePair& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For <code>SCTE35_ENHANCED</code> output, defines a value. MediaTailor; takes
     * this value, and its associated key, and generates the key/value pair within the
     * <code>EXT-X-ASSET</code>tag. If you specify a value, you must also specify a
     * corresponding key.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    KeyValuePair& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
