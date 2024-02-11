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
    AWS_MEDIATAILOR_API KeyValuePair();
    AWS_MEDIATAILOR_API KeyValuePair(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API KeyValuePair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>For <code>SCTE35_ENHANCED</code> output, defines a key. MediaTailor takes
     * this key, and its associated value, and generates the key/value pair within the
     * <code>EXT-X-ASSET</code>tag. If you specify a key, you must also specify a
     * corresponding value.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>For <code>SCTE35_ENHANCED</code> output, defines a key. MediaTailor takes
     * this key, and its associated value, and generates the key/value pair within the
     * <code>EXT-X-ASSET</code>tag. If you specify a key, you must also specify a
     * corresponding value.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>For <code>SCTE35_ENHANCED</code> output, defines a key. MediaTailor takes
     * this key, and its associated value, and generates the key/value pair within the
     * <code>EXT-X-ASSET</code>tag. If you specify a key, you must also specify a
     * corresponding value.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>For <code>SCTE35_ENHANCED</code> output, defines a key. MediaTailor takes
     * this key, and its associated value, and generates the key/value pair within the
     * <code>EXT-X-ASSET</code>tag. If you specify a key, you must also specify a
     * corresponding value.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>For <code>SCTE35_ENHANCED</code> output, defines a key. MediaTailor takes
     * this key, and its associated value, and generates the key/value pair within the
     * <code>EXT-X-ASSET</code>tag. If you specify a key, you must also specify a
     * corresponding value.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>For <code>SCTE35_ENHANCED</code> output, defines a key. MediaTailor takes
     * this key, and its associated value, and generates the key/value pair within the
     * <code>EXT-X-ASSET</code>tag. If you specify a key, you must also specify a
     * corresponding value.</p>
     */
    inline KeyValuePair& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>For <code>SCTE35_ENHANCED</code> output, defines a key. MediaTailor takes
     * this key, and its associated value, and generates the key/value pair within the
     * <code>EXT-X-ASSET</code>tag. If you specify a key, you must also specify a
     * corresponding value.</p>
     */
    inline KeyValuePair& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>For <code>SCTE35_ENHANCED</code> output, defines a key. MediaTailor takes
     * this key, and its associated value, and generates the key/value pair within the
     * <code>EXT-X-ASSET</code>tag. If you specify a key, you must also specify a
     * corresponding value.</p>
     */
    inline KeyValuePair& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>For <code>SCTE35_ENHANCED</code> output, defines a value. MediaTailor; takes
     * this value, and its associated key, and generates the key/value pair within the
     * <code>EXT-X-ASSET</code>tag. If you specify a value, you must also specify a
     * corresponding key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>For <code>SCTE35_ENHANCED</code> output, defines a value. MediaTailor; takes
     * this value, and its associated key, and generates the key/value pair within the
     * <code>EXT-X-ASSET</code>tag. If you specify a value, you must also specify a
     * corresponding key.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>For <code>SCTE35_ENHANCED</code> output, defines a value. MediaTailor; takes
     * this value, and its associated key, and generates the key/value pair within the
     * <code>EXT-X-ASSET</code>tag. If you specify a value, you must also specify a
     * corresponding key.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>For <code>SCTE35_ENHANCED</code> output, defines a value. MediaTailor; takes
     * this value, and its associated key, and generates the key/value pair within the
     * <code>EXT-X-ASSET</code>tag. If you specify a value, you must also specify a
     * corresponding key.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>For <code>SCTE35_ENHANCED</code> output, defines a value. MediaTailor; takes
     * this value, and its associated key, and generates the key/value pair within the
     * <code>EXT-X-ASSET</code>tag. If you specify a value, you must also specify a
     * corresponding key.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>For <code>SCTE35_ENHANCED</code> output, defines a value. MediaTailor; takes
     * this value, and its associated key, and generates the key/value pair within the
     * <code>EXT-X-ASSET</code>tag. If you specify a value, you must also specify a
     * corresponding key.</p>
     */
    inline KeyValuePair& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>For <code>SCTE35_ENHANCED</code> output, defines a value. MediaTailor; takes
     * this value, and its associated key, and generates the key/value pair within the
     * <code>EXT-X-ASSET</code>tag. If you specify a value, you must also specify a
     * corresponding key.</p>
     */
    inline KeyValuePair& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>For <code>SCTE35_ENHANCED</code> output, defines a value. MediaTailor; takes
     * this value, and its associated key, and generates the key/value pair within the
     * <code>EXT-X-ASSET</code>tag. If you specify a value, you must also specify a
     * corresponding key.</p>
     */
    inline KeyValuePair& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
