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
    AWS_S3CONTROL_API KeyNameConstraint() = default;
    AWS_S3CONTROL_API KeyNameConstraint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API KeyNameConstraint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the start of the object key string. Each KeyNameConstraint
     * filter accepts an array of strings with a length of 1 string.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchAnyPrefix() const { return m_matchAnyPrefix; }
    inline bool MatchAnyPrefixHasBeenSet() const { return m_matchAnyPrefixHasBeenSet; }
    template<typename MatchAnyPrefixT = Aws::Vector<Aws::String>>
    void SetMatchAnyPrefix(MatchAnyPrefixT&& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix = std::forward<MatchAnyPrefixT>(value); }
    template<typename MatchAnyPrefixT = Aws::Vector<Aws::String>>
    KeyNameConstraint& WithMatchAnyPrefix(MatchAnyPrefixT&& value) { SetMatchAnyPrefix(std::forward<MatchAnyPrefixT>(value)); return *this;}
    template<typename MatchAnyPrefixT = Aws::String>
    KeyNameConstraint& AddMatchAnyPrefix(MatchAnyPrefixT&& value) { m_matchAnyPrefixHasBeenSet = true; m_matchAnyPrefix.emplace_back(std::forward<MatchAnyPrefixT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears at the end of the object key string. Each KeyNameConstraint
     * filter accepts an array of strings with a length of 1 string.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchAnySuffix() const { return m_matchAnySuffix; }
    inline bool MatchAnySuffixHasBeenSet() const { return m_matchAnySuffixHasBeenSet; }
    template<typename MatchAnySuffixT = Aws::Vector<Aws::String>>
    void SetMatchAnySuffix(MatchAnySuffixT&& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix = std::forward<MatchAnySuffixT>(value); }
    template<typename MatchAnySuffixT = Aws::Vector<Aws::String>>
    KeyNameConstraint& WithMatchAnySuffix(MatchAnySuffixT&& value) { SetMatchAnySuffix(std::forward<MatchAnySuffixT>(value)); return *this;}
    template<typename MatchAnySuffixT = Aws::String>
    KeyNameConstraint& AddMatchAnySuffix(MatchAnySuffixT&& value) { m_matchAnySuffixHasBeenSet = true; m_matchAnySuffix.emplace_back(std::forward<MatchAnySuffixT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If provided, the generated manifest includes objects where the specified
     * string appears anywhere within the object key string. Each KeyNameConstraint
     * filter accepts an array of strings with a length of 1 string.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchAnySubstring() const { return m_matchAnySubstring; }
    inline bool MatchAnySubstringHasBeenSet() const { return m_matchAnySubstringHasBeenSet; }
    template<typename MatchAnySubstringT = Aws::Vector<Aws::String>>
    void SetMatchAnySubstring(MatchAnySubstringT&& value) { m_matchAnySubstringHasBeenSet = true; m_matchAnySubstring = std::forward<MatchAnySubstringT>(value); }
    template<typename MatchAnySubstringT = Aws::Vector<Aws::String>>
    KeyNameConstraint& WithMatchAnySubstring(MatchAnySubstringT&& value) { SetMatchAnySubstring(std::forward<MatchAnySubstringT>(value)); return *this;}
    template<typename MatchAnySubstringT = Aws::String>
    KeyNameConstraint& AddMatchAnySubstring(MatchAnySubstringT&& value) { m_matchAnySubstringHasBeenSet = true; m_matchAnySubstring.emplace_back(std::forward<MatchAnySubstringT>(value)); return *this; }
    ///@}
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
