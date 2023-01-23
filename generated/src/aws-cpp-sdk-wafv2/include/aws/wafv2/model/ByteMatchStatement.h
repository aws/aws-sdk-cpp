/**
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
    AWS_WAFV2_API ByteMatchStatement();
    AWS_WAFV2_API ByteMatchStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ByteMatchStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string value that you want WAF to search for. WAF searches only in the part
     * of web requests that you designate for inspection in <a>FieldToMatch</a>. The
     * maximum length of the value is 50 bytes.</p> <p>Valid values depend on the
     * component that you specify for inspection in <code>FieldToMatch</code>:</p> <ul>
     * <li> <p> <code>Method</code>: The HTTP method that you want WAF to search for.
     * This indicates the type of operation specified in the request. </p> </li> <li>
     * <p> <code>UriPath</code>: The value that you want WAF to search for in the URI
     * path, for example, <code>/images/daily-ad.jpg</code>. </p> </li> </ul> <p>If
     * <code>SearchString</code> includes alphabetic characters A-Z and a-z, note that
     * the value is case sensitive.</p> <p> <b>If you're using the WAF API</b> </p>
     * <p>Specify a base64-encoded version of the value. The maximum length of the
     * value before you base64-encode it is 50 bytes.</p> <p>For example, suppose the
     * value of <code>Type</code> is <code>HEADER</code> and the value of
     * <code>Data</code> is <code>User-Agent</code>. If you want to search the
     * <code>User-Agent</code> header for the value <code>BadBot</code>, you
     * base64-encode <code>BadBot</code> using MIME base64-encoding and include the
     * resulting value, <code>QmFkQm90</code>, in the value of
     * <code>SearchString</code>.</p> <p> <b>If you're using the CLI or one of the
     * Amazon Web Services SDKs</b> </p> <p>The value that you want WAF to search for.
     * The SDK automatically base64 encodes the value.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetSearchString() const{ return m_searchString; }

    /**
     * <p>A string value that you want WAF to search for. WAF searches only in the part
     * of web requests that you designate for inspection in <a>FieldToMatch</a>. The
     * maximum length of the value is 50 bytes.</p> <p>Valid values depend on the
     * component that you specify for inspection in <code>FieldToMatch</code>:</p> <ul>
     * <li> <p> <code>Method</code>: The HTTP method that you want WAF to search for.
     * This indicates the type of operation specified in the request. </p> </li> <li>
     * <p> <code>UriPath</code>: The value that you want WAF to search for in the URI
     * path, for example, <code>/images/daily-ad.jpg</code>. </p> </li> </ul> <p>If
     * <code>SearchString</code> includes alphabetic characters A-Z and a-z, note that
     * the value is case sensitive.</p> <p> <b>If you're using the WAF API</b> </p>
     * <p>Specify a base64-encoded version of the value. The maximum length of the
     * value before you base64-encode it is 50 bytes.</p> <p>For example, suppose the
     * value of <code>Type</code> is <code>HEADER</code> and the value of
     * <code>Data</code> is <code>User-Agent</code>. If you want to search the
     * <code>User-Agent</code> header for the value <code>BadBot</code>, you
     * base64-encode <code>BadBot</code> using MIME base64-encoding and include the
     * resulting value, <code>QmFkQm90</code>, in the value of
     * <code>SearchString</code>.</p> <p> <b>If you're using the CLI or one of the
     * Amazon Web Services SDKs</b> </p> <p>The value that you want WAF to search for.
     * The SDK automatically base64 encodes the value.</p>
     */
    inline bool SearchStringHasBeenSet() const { return m_searchStringHasBeenSet; }

    /**
     * <p>A string value that you want WAF to search for. WAF searches only in the part
     * of web requests that you designate for inspection in <a>FieldToMatch</a>. The
     * maximum length of the value is 50 bytes.</p> <p>Valid values depend on the
     * component that you specify for inspection in <code>FieldToMatch</code>:</p> <ul>
     * <li> <p> <code>Method</code>: The HTTP method that you want WAF to search for.
     * This indicates the type of operation specified in the request. </p> </li> <li>
     * <p> <code>UriPath</code>: The value that you want WAF to search for in the URI
     * path, for example, <code>/images/daily-ad.jpg</code>. </p> </li> </ul> <p>If
     * <code>SearchString</code> includes alphabetic characters A-Z and a-z, note that
     * the value is case sensitive.</p> <p> <b>If you're using the WAF API</b> </p>
     * <p>Specify a base64-encoded version of the value. The maximum length of the
     * value before you base64-encode it is 50 bytes.</p> <p>For example, suppose the
     * value of <code>Type</code> is <code>HEADER</code> and the value of
     * <code>Data</code> is <code>User-Agent</code>. If you want to search the
     * <code>User-Agent</code> header for the value <code>BadBot</code>, you
     * base64-encode <code>BadBot</code> using MIME base64-encoding and include the
     * resulting value, <code>QmFkQm90</code>, in the value of
     * <code>SearchString</code>.</p> <p> <b>If you're using the CLI or one of the
     * Amazon Web Services SDKs</b> </p> <p>The value that you want WAF to search for.
     * The SDK automatically base64 encodes the value.</p>
     */
    inline void SetSearchString(const Aws::Utils::ByteBuffer& value) { m_searchStringHasBeenSet = true; m_searchString = value; }

    /**
     * <p>A string value that you want WAF to search for. WAF searches only in the part
     * of web requests that you designate for inspection in <a>FieldToMatch</a>. The
     * maximum length of the value is 50 bytes.</p> <p>Valid values depend on the
     * component that you specify for inspection in <code>FieldToMatch</code>:</p> <ul>
     * <li> <p> <code>Method</code>: The HTTP method that you want WAF to search for.
     * This indicates the type of operation specified in the request. </p> </li> <li>
     * <p> <code>UriPath</code>: The value that you want WAF to search for in the URI
     * path, for example, <code>/images/daily-ad.jpg</code>. </p> </li> </ul> <p>If
     * <code>SearchString</code> includes alphabetic characters A-Z and a-z, note that
     * the value is case sensitive.</p> <p> <b>If you're using the WAF API</b> </p>
     * <p>Specify a base64-encoded version of the value. The maximum length of the
     * value before you base64-encode it is 50 bytes.</p> <p>For example, suppose the
     * value of <code>Type</code> is <code>HEADER</code> and the value of
     * <code>Data</code> is <code>User-Agent</code>. If you want to search the
     * <code>User-Agent</code> header for the value <code>BadBot</code>, you
     * base64-encode <code>BadBot</code> using MIME base64-encoding and include the
     * resulting value, <code>QmFkQm90</code>, in the value of
     * <code>SearchString</code>.</p> <p> <b>If you're using the CLI or one of the
     * Amazon Web Services SDKs</b> </p> <p>The value that you want WAF to search for.
     * The SDK automatically base64 encodes the value.</p>
     */
    inline void SetSearchString(Aws::Utils::ByteBuffer&& value) { m_searchStringHasBeenSet = true; m_searchString = std::move(value); }

    /**
     * <p>A string value that you want WAF to search for. WAF searches only in the part
     * of web requests that you designate for inspection in <a>FieldToMatch</a>. The
     * maximum length of the value is 50 bytes.</p> <p>Valid values depend on the
     * component that you specify for inspection in <code>FieldToMatch</code>:</p> <ul>
     * <li> <p> <code>Method</code>: The HTTP method that you want WAF to search for.
     * This indicates the type of operation specified in the request. </p> </li> <li>
     * <p> <code>UriPath</code>: The value that you want WAF to search for in the URI
     * path, for example, <code>/images/daily-ad.jpg</code>. </p> </li> </ul> <p>If
     * <code>SearchString</code> includes alphabetic characters A-Z and a-z, note that
     * the value is case sensitive.</p> <p> <b>If you're using the WAF API</b> </p>
     * <p>Specify a base64-encoded version of the value. The maximum length of the
     * value before you base64-encode it is 50 bytes.</p> <p>For example, suppose the
     * value of <code>Type</code> is <code>HEADER</code> and the value of
     * <code>Data</code> is <code>User-Agent</code>. If you want to search the
     * <code>User-Agent</code> header for the value <code>BadBot</code>, you
     * base64-encode <code>BadBot</code> using MIME base64-encoding and include the
     * resulting value, <code>QmFkQm90</code>, in the value of
     * <code>SearchString</code>.</p> <p> <b>If you're using the CLI or one of the
     * Amazon Web Services SDKs</b> </p> <p>The value that you want WAF to search for.
     * The SDK automatically base64 encodes the value.</p>
     */
    inline ByteMatchStatement& WithSearchString(const Aws::Utils::ByteBuffer& value) { SetSearchString(value); return *this;}

    /**
     * <p>A string value that you want WAF to search for. WAF searches only in the part
     * of web requests that you designate for inspection in <a>FieldToMatch</a>. The
     * maximum length of the value is 50 bytes.</p> <p>Valid values depend on the
     * component that you specify for inspection in <code>FieldToMatch</code>:</p> <ul>
     * <li> <p> <code>Method</code>: The HTTP method that you want WAF to search for.
     * This indicates the type of operation specified in the request. </p> </li> <li>
     * <p> <code>UriPath</code>: The value that you want WAF to search for in the URI
     * path, for example, <code>/images/daily-ad.jpg</code>. </p> </li> </ul> <p>If
     * <code>SearchString</code> includes alphabetic characters A-Z and a-z, note that
     * the value is case sensitive.</p> <p> <b>If you're using the WAF API</b> </p>
     * <p>Specify a base64-encoded version of the value. The maximum length of the
     * value before you base64-encode it is 50 bytes.</p> <p>For example, suppose the
     * value of <code>Type</code> is <code>HEADER</code> and the value of
     * <code>Data</code> is <code>User-Agent</code>. If you want to search the
     * <code>User-Agent</code> header for the value <code>BadBot</code>, you
     * base64-encode <code>BadBot</code> using MIME base64-encoding and include the
     * resulting value, <code>QmFkQm90</code>, in the value of
     * <code>SearchString</code>.</p> <p> <b>If you're using the CLI or one of the
     * Amazon Web Services SDKs</b> </p> <p>The value that you want WAF to search for.
     * The SDK automatically base64 encodes the value.</p>
     */
    inline ByteMatchStatement& WithSearchString(Aws::Utils::ByteBuffer&& value) { SetSearchString(std::move(value)); return *this;}


    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline const FieldToMatch& GetFieldToMatch() const{ return m_fieldToMatch; }

    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline bool FieldToMatchHasBeenSet() const { return m_fieldToMatchHasBeenSet; }

    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline void SetFieldToMatch(const FieldToMatch& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = value; }

    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline void SetFieldToMatch(FieldToMatch&& value) { m_fieldToMatchHasBeenSet = true; m_fieldToMatch = std::move(value); }

    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline ByteMatchStatement& WithFieldToMatch(const FieldToMatch& value) { SetFieldToMatch(value); return *this;}

    /**
     * <p>The part of the web request that you want WAF to inspect. </p>
     */
    inline ByteMatchStatement& WithFieldToMatch(FieldToMatch&& value) { SetFieldToMatch(std::move(value)); return *this;}


    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline const Aws::Vector<TextTransformation>& GetTextTransformations() const{ return m_textTransformations; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline bool TextTransformationsHasBeenSet() const { return m_textTransformationsHasBeenSet; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline void SetTextTransformations(const Aws::Vector<TextTransformation>& value) { m_textTransformationsHasBeenSet = true; m_textTransformations = value; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline void SetTextTransformations(Aws::Vector<TextTransformation>&& value) { m_textTransformationsHasBeenSet = true; m_textTransformations = std::move(value); }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline ByteMatchStatement& WithTextTransformations(const Aws::Vector<TextTransformation>& value) { SetTextTransformations(value); return *this;}

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline ByteMatchStatement& WithTextTransformations(Aws::Vector<TextTransformation>&& value) { SetTextTransformations(std::move(value)); return *this;}

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline ByteMatchStatement& AddTextTransformations(const TextTransformation& value) { m_textTransformationsHasBeenSet = true; m_textTransformations.push_back(value); return *this; }

    /**
     * <p>Text transformations eliminate some of the unusual formatting that attackers
     * use in web requests in an effort to bypass detection. If you specify one or more
     * transformations in a rule statement, WAF performs all transformations on the
     * content of the request component identified by <code>FieldToMatch</code>,
     * starting from the lowest priority setting, before inspecting the content for a
     * match.</p>
     */
    inline ByteMatchStatement& AddTextTransformations(TextTransformation&& value) { m_textTransformationsHasBeenSet = true; m_textTransformations.push_back(std::move(value)); return *this; }


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
    inline const PositionalConstraint& GetPositionalConstraint() const{ return m_positionalConstraint; }

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
    inline bool PositionalConstraintHasBeenSet() const { return m_positionalConstraintHasBeenSet; }

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
    inline void SetPositionalConstraint(const PositionalConstraint& value) { m_positionalConstraintHasBeenSet = true; m_positionalConstraint = value; }

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
    inline void SetPositionalConstraint(PositionalConstraint&& value) { m_positionalConstraintHasBeenSet = true; m_positionalConstraint = std::move(value); }

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
    inline ByteMatchStatement& WithPositionalConstraint(const PositionalConstraint& value) { SetPositionalConstraint(value); return *this;}

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
    inline ByteMatchStatement& WithPositionalConstraint(PositionalConstraint&& value) { SetPositionalConstraint(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_searchString;
    bool m_searchStringHasBeenSet = false;

    FieldToMatch m_fieldToMatch;
    bool m_fieldToMatchHasBeenSet = false;

    Aws::Vector<TextTransformation> m_textTransformations;
    bool m_textTransformationsHasBeenSet = false;

    PositionalConstraint m_positionalConstraint;
    bool m_positionalConstraintHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
