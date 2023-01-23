/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Adds metadata, in the form of a key:value pair, to the specified
   * resource.</p> <p>For example, you could add the tag
   * <code>Department:Sales</code> to a resource to indicate that it pertains to your
   * organization's sales department. You can also use tags for tag-based access
   * control.</p> <p>To learn more about tagging, see <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/tagging.html">Tagging
   * resources</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_TRANSCRIBESERVICE_API Tag();
    AWS_TRANSCRIBESERVICE_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The first part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag <code>Department:Sales</code>, the key is
     * 'Department'.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The first part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag <code>Department:Sales</code>, the key is
     * 'Department'.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The first part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag <code>Department:Sales</code>, the key is
     * 'Department'.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The first part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag <code>Department:Sales</code>, the key is
     * 'Department'.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The first part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag <code>Department:Sales</code>, the key is
     * 'Department'.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The first part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag <code>Department:Sales</code>, the key is
     * 'Department'.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The first part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag <code>Department:Sales</code>, the key is
     * 'Department'.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The first part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag <code>Department:Sales</code>, the key is
     * 'Department'.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The second part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag <code>Department:Sales</code>, the value is
     * 'Sales'.</p> <p>Note that you can set the value of a tag to an empty string, but
     * you can't set the value of a tag to null. Omitting the tag value is the same as
     * using an empty string.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The second part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag <code>Department:Sales</code>, the value is
     * 'Sales'.</p> <p>Note that you can set the value of a tag to an empty string, but
     * you can't set the value of a tag to null. Omitting the tag value is the same as
     * using an empty string.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The second part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag <code>Department:Sales</code>, the value is
     * 'Sales'.</p> <p>Note that you can set the value of a tag to an empty string, but
     * you can't set the value of a tag to null. Omitting the tag value is the same as
     * using an empty string.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The second part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag <code>Department:Sales</code>, the value is
     * 'Sales'.</p> <p>Note that you can set the value of a tag to an empty string, but
     * you can't set the value of a tag to null. Omitting the tag value is the same as
     * using an empty string.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The second part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag <code>Department:Sales</code>, the value is
     * 'Sales'.</p> <p>Note that you can set the value of a tag to an empty string, but
     * you can't set the value of a tag to null. Omitting the tag value is the same as
     * using an empty string.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The second part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag <code>Department:Sales</code>, the value is
     * 'Sales'.</p> <p>Note that you can set the value of a tag to an empty string, but
     * you can't set the value of a tag to null. Omitting the tag value is the same as
     * using an empty string.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The second part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag <code>Department:Sales</code>, the value is
     * 'Sales'.</p> <p>Note that you can set the value of a tag to an empty string, but
     * you can't set the value of a tag to null. Omitting the tag value is the same as
     * using an empty string.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The second part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag <code>Department:Sales</code>, the value is
     * 'Sales'.</p> <p>Note that you can set the value of a tag to an empty string, but
     * you can't set the value of a tag to null. Omitting the tag value is the same as
     * using an empty string.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
