﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/FieldToMatch.h>
#include <aws/waf-regional/model/TextTransformation.h>
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
namespace WAFRegional
{
namespace Model
{

  /**
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>The regular expression
   * pattern that you want AWS WAF to search for in web requests, the location in
   * requests that you want AWS WAF to search, and other settings. Each
   * <code>RegexMatchTuple</code> object contains: </p> <ul> <li> <p>The part of a
   * web request that you want AWS WAF to inspect, such as a query string or the
   * value of the <code>User-Agent</code> header. </p> </li> <li> <p>The identifier
   * of the pattern (a regular expression) that you want AWS WAF to look for. For
   * more information, see <a>RegexPatternSet</a>. </p> </li> <li> <p>Whether to
   * perform any conversions on the request, such as converting it to lowercase,
   * before inspecting it for the specified string.</p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/RegexMatchTuple">AWS
   * API Reference</a></p>
   */
  class RegexMatchTuple
  {
  public:
    AWS_WAFREGIONAL_API RegexMatchTuple() = default;
    AWS_WAFREGIONAL_API RegexMatchTuple(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API RegexMatchTuple& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies where in a web request to look for the
     * <code>RegexPatternSet</code>.</p>
     */
    inline const FieldToMatch& GetFieldToMatch() const { return m_fieldToMatch; }
    inline bool FieldToMatchHasBeenSet() const { return m_fieldToMatchHasBeenSet; }
    template<typename FieldToMatchT = FieldToMatch>
    void SetFieldToMatch(FieldToMatchT&& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = std::forward<FieldToMatchT>(value); }
    template<typename FieldToMatchT = FieldToMatch>
    RegexMatchTuple& WithFieldToMatch(FieldToMatchT&& value) { SetFieldToMatch(std::forward<FieldToMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass AWS WAF. If you specify a
     * transformation, AWS WAF performs the transformation on
     * <code>RegexPatternSet</code> before inspecting a request for a match.</p> <p>You
     * can only specify a single type of TextTransformation.</p> <p> <b>CMD_LINE</b>
     * </p> <p>When you're concerned that attackers are injecting an operating system
     * commandline command and using unusual formatting to disguise some or all of the
     * command, use this option to perform the following transformations:</p> <ul> <li>
     * <p>Delete the following characters: \ " ' ^</p> </li> <li> <p>Delete spaces
     * before the following characters: / (</p> </li> <li> <p>Replace the following
     * characters with a space: , ;</p> </li> <li> <p>Replace multiple spaces with one
     * space</p> </li> <li> <p>Convert uppercase letters (A-Z) to lowercase (a-z)</p>
     * </li> </ul> <p> <b>COMPRESS_WHITE_SPACE</b> </p> <p>Use this option to replace
     * the following characters with a space character (decimal 32):</p> <ul> <li>
     * <p>\f, formfeed, decimal 12</p> </li> <li> <p>\t, tab, decimal 9</p> </li> <li>
     * <p>\n, newline, decimal 10</p> </li> <li> <p>\r, carriage return, decimal 13</p>
     * </li> <li> <p>\v, vertical tab, decimal 11</p> </li> <li> <p>non-breaking space,
     * decimal 160</p> </li> </ul> <p> <code>COMPRESS_WHITE_SPACE</code> also replaces
     * multiple spaces with one space.</p> <p> <b>HTML_ENTITY_DECODE</b> </p> <p>Use
     * this option to replace HTML-encoded characters with unencoded characters.
     * <code>HTML_ENTITY_DECODE</code> performs the following operations:</p> <ul> <li>
     * <p>Replaces <code>(ampersand)quot;</code> with <code>"</code> </p> </li> <li>
     * <p>Replaces <code>(ampersand)nbsp;</code> with a non-breaking space, decimal
     * 160</p> </li> <li> <p>Replaces <code>(ampersand)lt;</code> with a "less than"
     * symbol</p> </li> <li> <p>Replaces <code>(ampersand)gt;</code> with
     * <code>&gt;</code> </p> </li> <li> <p>Replaces characters that are represented in
     * hexadecimal format, <code>(ampersand)#xhhhh;</code>, with the corresponding
     * characters</p> </li> <li> <p>Replaces characters that are represented in decimal
     * format, <code>(ampersand)#nnnn;</code>, with the corresponding characters</p>
     * </li> </ul> <p> <b>LOWERCASE</b> </p> <p>Use this option to convert uppercase
     * letters (A-Z) to lowercase (a-z).</p> <p> <b>URL_DECODE</b> </p> <p>Use this
     * option to decode a URL-encoded value.</p> <p> <b>NONE</b> </p> <p>Specify
     * <code>NONE</code> if you don't want to perform any text transformations.</p>
     */
    inline TextTransformation GetTextTransformation() const { return m_textTransformation; }
    inline bool TextTransformationHasBeenSet() const { return m_textTransformationHasBeenSet; }
    inline void SetTextTransformation(TextTransformation value) { m_textTransformationHasBeenSet = true; m_textTransformation = value; }
    inline RegexMatchTuple& WithTextTransformation(TextTransformation value) { SetTextTransformation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>RegexPatternSetId</code> for a <code>RegexPatternSet</code>. You
     * use <code>RegexPatternSetId</code> to get information about a
     * <code>RegexPatternSet</code> (see <a>GetRegexPatternSet</a>), update a
     * <code>RegexPatternSet</code> (see <a>UpdateRegexPatternSet</a>), insert a
     * <code>RegexPatternSet</code> into a <code>RegexMatchSet</code> or delete one
     * from a <code>RegexMatchSet</code> (see <a>UpdateRegexMatchSet</a>), and delete
     * an <code>RegexPatternSet</code> from AWS WAF (see
     * <a>DeleteRegexPatternSet</a>).</p> <p> <code>RegexPatternSetId</code> is
     * returned by <a>CreateRegexPatternSet</a> and by <a>ListRegexPatternSets</a>.</p>
     */
    inline const Aws::String& GetRegexPatternSetId() const { return m_regexPatternSetId; }
    inline bool RegexPatternSetIdHasBeenSet() const { return m_regexPatternSetIdHasBeenSet; }
    template<typename RegexPatternSetIdT = Aws::String>
    void SetRegexPatternSetId(RegexPatternSetIdT&& value) { m_regexPatternSetIdHasBeenSet = true; m_regexPatternSetId = std::forward<RegexPatternSetIdT>(value); }
    template<typename RegexPatternSetIdT = Aws::String>
    RegexMatchTuple& WithRegexPatternSetId(RegexPatternSetIdT&& value) { SetRegexPatternSetId(std::forward<RegexPatternSetIdT>(value)); return *this;}
    ///@}
  private:

    FieldToMatch m_fieldToMatch;
    bool m_fieldToMatchHasBeenSet = false;

    TextTransformation m_textTransformation{TextTransformation::NOT_SET};
    bool m_textTransformationHasBeenSet = false;

    Aws::String m_regexPatternSetId;
    bool m_regexPatternSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
