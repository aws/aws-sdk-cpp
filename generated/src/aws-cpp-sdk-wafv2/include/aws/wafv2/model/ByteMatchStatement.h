﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/wafv2/model/FieldToMatch.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/PositionalConstraint.h>
#include <aws/wafv2/model/TextTransformation.h>
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
   * <p>A rule statement that defines a string match search for WAF to apply to web
   * requests. The byte match statement provides the bytes to search for, the
   * location in requests that you want WAF to search, and other settings. The bytes
   * to search for are typically a string that corresponds with ASCII characters. In
   * the WAF console and the developer guide, this is called a string match
   * statement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ByteMatchStatement">AWS
   * API Reference</a></p>
   */
  class ByteMatchStatement
  {
  public:
    AWS_WAFV2_API ByteMatchStatement() = default;
    AWS_WAFV2_API ByteMatchStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ByteMatchStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string value that you want WAF to search for. WAF searches only in the part
     * of web requests that you designate for inspection in <a>FieldToMatch</a>. The
     * maximum length of the value is 200 bytes.</p> <p>Valid values depend on the
     * component that you specify for inspection in <code>FieldToMatch</code>:</p> <ul>
     * <li> <p> <code>Method</code>: The HTTP method that you want WAF to search for.
     * This indicates the type of operation specified in the request. </p> </li> <li>
     * <p> <code>UriPath</code>: The value that you want WAF to search for in the URI
     * path, for example, <code>/images/daily-ad.jpg</code>. </p> </li> <li> <p>
     * <code>JA3Fingerprint</code>: Available for use with Amazon CloudFront
     * distributions and Application Load Balancers. Match against the request's JA3
     * fingerprint. The JA3 fingerprint is a 32-character hash derived from the TLS
     * Client Hello of an incoming request. This fingerprint serves as a unique
     * identifier for the client's TLS configuration. You can use this choice only with
     * a string match <code>ByteMatchStatement</code> with the
     * <code>PositionalConstraint</code> set to <code>EXACTLY</code>. </p> <p>You can
     * obtain the JA3 fingerprint for client requests from the web ACL logs. If WAF is
     * able to calculate the fingerprint, it includes it in the logs. For information
     * about the logging fields, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging-fields.html">Log
     * fields</a> in the <i>WAF Developer Guide</i>. </p> </li> <li> <p>
     * <code>HeaderOrder</code>: The list of header names to match for. WAF creates a
     * string that contains the ordered list of header names, from the headers in the
     * web request, and then matches against that string. </p> </li> </ul> <p>If
     * <code>SearchString</code> includes alphabetic characters A-Z and a-z, note that
     * the value is case sensitive.</p> <p> <b>If you're using the WAF API</b> </p>
     * <p>Specify a base64-encoded version of the value. The maximum length of the
     * value before you base64-encode it is 200 bytes.</p> <p>For example, suppose the
     * value of <code>Type</code> is <code>HEADER</code> and the value of
     * <code>Data</code> is <code>User-Agent</code>. If you want to search the
     * <code>User-Agent</code> header for the value <code>BadBot</code>, you
     * base64-encode <code>BadBot</code> using MIME base64-encoding and include the
     * resulting value, <code>QmFkQm90</code>, in the value of
     * <code>SearchString</code>.</p> <p> <b>If you're using the CLI or one of the
     * Amazon Web Services SDKs</b> </p> <p>The value that you want WAF to search for.
     * The SDK automatically base64 encodes the value.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetSearchString() const { return m_searchString; }
    inline bool SearchStringHasBeenSet() const { return m_searchStringHasBeenSet; }
    template<typename SearchStringT = Aws::Utils::ByteBuffer>
    void SetSearchString(SearchStringT&& value) { m_searchStringHasBeenSet = true; m_searchString = std::forward<SearchStringT>(value); }
    template<typename SearchStringT = Aws::Utils::ByteBuffer>
    ByteMatchStatement& WithSearchString(SearchStringT&& value) { SetSearchString(std::forward<SearchStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline const FieldToMatch& GetFieldToMatch() const { return m_fieldToMatch; }
    inline bool FieldToMatchHasBeenSet() const { return m_fieldToMatchHasBeenSet; }
    template<typename FieldToMatchT = FieldToMatch>
    void SetFieldToMatch(FieldToMatchT&& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = std::forward<FieldToMatchT>(value); }
    template<typename FieldToMatchT = FieldToMatch>
    ByteMatchStatement& WithFieldToMatch(FieldToMatchT&& value) { SetFieldToMatch(std::forward<FieldToMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. Text transformations are
     * used in rule match statements, to transform the <code>FieldToMatch</code>
     * request component before inspecting it, and they're used in rate-based rule
     * statements, to transform request components before using them as custom
     * aggregation keys. If you specify one or more transformations to apply, WAF
     * performs all transformations on the specified content, starting from the lowest
     * priority setting, and then uses the transformed component contents. </p>
     */
    inline const Aws::Vector<TextTransformation>& GetTextTransformations() const { return m_textTransformations; }
    inline bool TextTransformationsHasBeenSet() const { return m_textTransformationsHasBeenSet; }
    template<typename TextTransformationsT = Aws::Vector<TextTransformation>>
    void SetTextTransformations(TextTransformationsT&& value) { m_textTransformationsHasBeenSet = true; m_textTransformations = std::forward<TextTransformationsT>(value); }
    template<typename TextTransformationsT = Aws::Vector<TextTransformation>>
    ByteMatchStatement& WithTextTransformations(TextTransformationsT&& value) { SetTextTransformations(std::forward<TextTransformationsT>(value)); return *this;}
    template<typename TextTransformationsT = TextTransformation>
    ByteMatchStatement& AddTextTransformations(TextTransformationsT&& value) { m_textTransformationsHasBeenSet = true; m_textTransformations.emplace_back(std::forward<TextTransformationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The area within the portion of the web request that you want WAF to search
     * for <code>SearchString</code>. Valid values include the following:</p> <p>
     * <b>CONTAINS</b> </p> <p>The specified part of the web request must include the
     * value of <code>SearchString</code>, but the location doesn't matter.</p> <p>
     * <b>CONTAINS_WORD</b> </p> <p>The specified part of the web request must include
     * the value of <code>SearchString</code>, and <code>SearchString</code> must
     * contain only alphanumeric characters or underscore (A-Z, a-z, 0-9, or _). In
     * addition, <code>SearchString</code> must be a word, which means that both of the
     * following are true:</p> <ul> <li> <p> <code>SearchString</code> is at the
     * beginning of the specified part of the web request or is preceded by a character
     * other than an alphanumeric character or underscore (_). Examples include the
     * value of a header and <code>;BadBot</code>.</p> </li> <li> <p>
     * <code>SearchString</code> is at the end of the specified part of the web request
     * or is followed by a character other than an alphanumeric character or underscore
     * (_), for example, <code>BadBot;</code> and <code>-BadBot;</code>.</p> </li>
     * </ul> <p> <b>EXACTLY</b> </p> <p>The value of the specified part of the web
     * request must exactly match the value of <code>SearchString</code>.</p> <p>
     * <b>STARTS_WITH</b> </p> <p>The value of <code>SearchString</code> must appear at
     * the beginning of the specified part of the web request.</p> <p> <b>ENDS_WITH</b>
     * </p> <p>The value of <code>SearchString</code> must appear at the end of the
     * specified part of the web request.</p>
     */
    inline PositionalConstraint GetPositionalConstraint() const { return m_positionalConstraint; }
    inline bool PositionalConstraintHasBeenSet() const { return m_positionalConstraintHasBeenSet; }
    inline void SetPositionalConstraint(PositionalConstraint value) { m_positionalConstraintHasBeenSet = true; m_positionalConstraint = value; }
    inline ByteMatchStatement& WithPositionalConstraint(PositionalConstraint value) { SetPositionalConstraint(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_searchString{};
    bool m_searchStringHasBeenSet = false;

    FieldToMatch m_fieldToMatch;
    bool m_fieldToMatchHasBeenSet = false;

    Aws::Vector<TextTransformation> m_textTransformations;
    bool m_textTransformationsHasBeenSet = false;

    PositionalConstraint m_positionalConstraint{PositionalConstraint::NOT_SET};
    bool m_positionalConstraintHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
