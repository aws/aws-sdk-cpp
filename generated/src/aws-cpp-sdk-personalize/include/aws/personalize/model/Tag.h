/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>The optional metadata that you apply to resources to help you categorize and
   * organize them. Each tag consists of a key and an optional value, both of which
   * you define. For more information see <a
   * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">Tagging
   * Personalize resources</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_PERSONALIZE_API Tag();
    AWS_PERSONALIZE_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline void SetTagKey(const Aws::String& value) { m_tagKeyHasBeenSet = true; m_tagKey = value; }

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline void SetTagKey(Aws::String&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::move(value); }

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline void SetTagKey(const char* value) { m_tagKeyHasBeenSet = true; m_tagKey.assign(value); }

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline Tag& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline Tag& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline Tag& WithTagKey(const char* value) { SetTagKey(value); return *this;}


    /**
     * <p>The optional part of a key-value pair that makes up a tag. A value acts as a
     * descriptor within a tag category (key).</p>
     */
    inline const Aws::String& GetTagValue() const{ return m_tagValue; }

    /**
     * <p>The optional part of a key-value pair that makes up a tag. A value acts as a
     * descriptor within a tag category (key).</p>
     */
    inline bool TagValueHasBeenSet() const { return m_tagValueHasBeenSet; }

    /**
     * <p>The optional part of a key-value pair that makes up a tag. A value acts as a
     * descriptor within a tag category (key).</p>
     */
    inline void SetTagValue(const Aws::String& value) { m_tagValueHasBeenSet = true; m_tagValue = value; }

    /**
     * <p>The optional part of a key-value pair that makes up a tag. A value acts as a
     * descriptor within a tag category (key).</p>
     */
    inline void SetTagValue(Aws::String&& value) { m_tagValueHasBeenSet = true; m_tagValue = std::move(value); }

    /**
     * <p>The optional part of a key-value pair that makes up a tag. A value acts as a
     * descriptor within a tag category (key).</p>
     */
    inline void SetTagValue(const char* value) { m_tagValueHasBeenSet = true; m_tagValue.assign(value); }

    /**
     * <p>The optional part of a key-value pair that makes up a tag. A value acts as a
     * descriptor within a tag category (key).</p>
     */
    inline Tag& WithTagValue(const Aws::String& value) { SetTagValue(value); return *this;}

    /**
     * <p>The optional part of a key-value pair that makes up a tag. A value acts as a
     * descriptor within a tag category (key).</p>
     */
    inline Tag& WithTagValue(Aws::String&& value) { SetTagValue(std::move(value)); return *this;}

    /**
     * <p>The optional part of a key-value pair that makes up a tag. A value acts as a
     * descriptor within a tag category (key).</p>
     */
    inline Tag& WithTagValue(const char* value) { SetTagValue(value); return *this;}

  private:

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    Aws::String m_tagValue;
    bool m_tagValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
