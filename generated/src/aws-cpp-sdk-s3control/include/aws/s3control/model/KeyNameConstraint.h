/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>If provided, the generated manifest includes only source bucket objects whose
   * object keys match the string constraints specified for
   * <code>MatchAnyPrefix</code>, <code>MatchAnySuffix</code>, and
   * <code>MatchAnySubstring</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/KeyNameConstraint">AWS
   * API Reference</a></p>
   */
  class KeyNameConstraint
  {
  public:
    AWS_S3CONTROL_API KeyNameConstraint();
    AWS_S3CONTROL_API KeyNameConstraint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API KeyNameConstraint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the start of the object key string.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchAnyPrefix() const{ return m_matchAnyPrefix; }

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the start of the object key string.</p>
     */
    inline bool MatchAnyPrefixHasBeenSet() const { return m_matchAnyPrefixHasBeenSet; }

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the start of the object key string.</p>
     */
    inline void SetMatchAnyPrefix(const Aws::Vector<Aws::String>& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix = value; }

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the start of the object key string.</p>
     */
    inline void SetMatchAnyPrefix(Aws::Vector<Aws::String>&& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix = std::move(value); }

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the start of the object key string.</p>
     */
    inline KeyNameConstraint& WithMatchAnyPrefix(const Aws::Vector<Aws::String>& value) { SetMatchAnyPrefix(value); return *this;}

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the start of the object key string.</p>
     */
    inline KeyNameConstraint& WithMatchAnyPrefix(Aws::Vector<Aws::String>&& value) { SetMatchAnyPrefix(std::move(value)); return *this;}

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the start of the object key string.</p>
     */
    inline KeyNameConstraint& AddMatchAnyPrefix(const Aws::String& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix.push_back(value); return *this; }

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the start of the object key string.</p>
     */
    inline KeyNameConstraint& AddMatchAnyPrefix(Aws::String&& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix.push_back(std::move(value)); return *this; }

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the start of the object key string.</p>
     */
    inline KeyNameConstraint& AddMatchAnyPrefix(const char* value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix.push_back(value); return *this; }


    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the end of the object key string.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchAnySuffix() const{ return m_matchAnySuffix; }

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the end of the object key string.</p>
     */
    inline bool MatchAnySuffixHasBeenSet() const { return m_matchAnySuffixHasBeenSet; }

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the end of the object key string.</p>
     */
    inline void SetMatchAnySuffix(const Aws::Vector<Aws::String>& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix = value; }

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the end of the object key string.</p>
     */
    inline void SetMatchAnySuffix(Aws::Vector<Aws::String>&& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix = std::move(value); }

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the end of the object key string.</p>
     */
    inline KeyNameConstraint& WithMatchAnySuffix(const Aws::Vector<Aws::String>& value) { SetMatchAnySuffix(value); return *this;}

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the end of the object key string.</p>
     */
    inline KeyNameConstraint& WithMatchAnySuffix(Aws::Vector<Aws::String>&& value) { SetMatchAnySuffix(std::move(value)); return *this;}

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the end of the object key string.</p>
     */
    inline KeyNameConstraint& AddMatchAnySuffix(const Aws::String& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix.push_back(value); return *this; }

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the end of the object key string.</p>
     */
    inline KeyNameConstraint& AddMatchAnySuffix(Aws::String&& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix.push_back(std::move(value)); return *this; }

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the end of the object key string.</p>
     */
    inline KeyNameConstraint& AddMatchAnySuffix(const char* value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix.push_back(value); return *this; }


    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears anywhere within the object key string.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchAnySubstring() const{ return m_matchAnySubstring; }

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears anywhere within the object key string.</p>
     */
    inline bool MatchAnySubstringHasBeenSet() const { return m_matchAnySubstringHasBeenSet; }

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears anywhere within the object key string.</p>
     */
    inline void SetMatchAnySubstring(const Aws::Vector<Aws::String>& value) { m_matchAnySubstringHasBeenSet = true; m_matchAnySubstring = value; }

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears anywhere within the object key string.</p>
     */
    inline void SetMatchAnySubstring(Aws::Vector<Aws::String>&& value) { m_matchAnySubstringHasBeenSet = true; m_matchAnySubstring = std::move(value); }

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears anywhere within the object key string.</p>
     */
    inline KeyNameConstraint& WithMatchAnySubstring(const Aws::Vector<Aws::String>& value) { SetMatchAnySubstring(value); return *this;}

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears anywhere within the object key string.</p>
     */
    inline KeyNameConstraint& WithMatchAnySubstring(Aws::Vector<Aws::String>&& value) { SetMatchAnySubstring(std::move(value)); return *this;}

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears anywhere within the object key string.</p>
     */
    inline KeyNameConstraint& AddMatchAnySubstring(const Aws::String& value) { m_matchAnySubstringHasBeenSet = true; m_matchAnySubstring.push_back(value); return *this; }

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears anywhere within the object key string.</p>
     */
    inline KeyNameConstraint& AddMatchAnySubstring(Aws::String&& value) { m_matchAnySubstringHasBeenSet = true; m_matchAnySubstring.push_back(std::move(value)); return *this; }

    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears anywhere within the object key string.</p>
     */
    inline KeyNameConstraint& AddMatchAnySubstring(const char* value) { m_matchAnySubstringHasBeenSet = true; m_matchAnySubstring.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_matchAnyPrefix;
    bool m_matchAnyPrefixHasBeenSet = false;

    Aws::Vector<Aws::String> m_matchAnySuffix;
    bool m_matchAnySuffixHasBeenSet = false;

    Aws::Vector<Aws::String> m_matchAnySubstring;
    bool m_matchAnySubstringHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
