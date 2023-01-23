/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/JsonMatchPattern.h>
#include <aws/wafv2/model/JsonMatchScope.h>
#include <aws/wafv2/model/BodyParsingFallbackBehavior.h>
#include <aws/wafv2/model/OversizeHandling.h>
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
   * <p>Inspect the body of the web request as JSON. The body immediately follows the
   * request headers. </p> <p>This is used to indicate the web request component to
   * inspect, in the <a>FieldToMatch</a> specification. </p> <p>Use the
   * specifications in this object to indicate which parts of the JSON body to
   * inspect using the rule's inspection criteria. WAF inspects only the parts of the
   * JSON that result from the matches that you indicate. </p> <p>Example JSON:
   * <code>"JsonBody": { "MatchPattern": { "All": {} }, "MatchScope": "ALL" }</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/JsonBody">AWS API
   * Reference</a></p>
   */
  class JsonBody
  {
  public:
    AWS_WAFV2_API JsonBody();
    AWS_WAFV2_API JsonBody(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API JsonBody& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The patterns to look for in the JSON body. WAF inspects the results of these
     * pattern matches against the rule inspection criteria. </p>
     */
    inline const JsonMatchPattern& GetMatchPattern() const{ return m_matchPattern; }

    /**
     * <p>The patterns to look for in the JSON body. WAF inspects the results of these
     * pattern matches against the rule inspection criteria. </p>
     */
    inline bool MatchPatternHasBeenSet() const { return m_matchPatternHasBeenSet; }

    /**
     * <p>The patterns to look for in the JSON body. WAF inspects the results of these
     * pattern matches against the rule inspection criteria. </p>
     */
    inline void SetMatchPattern(const JsonMatchPattern& value) { m_matchPatternHasBeenSet = true; m_matchPattern = value; }

    /**
     * <p>The patterns to look for in the JSON body. WAF inspects the results of these
     * pattern matches against the rule inspection criteria. </p>
     */
    inline void SetMatchPattern(JsonMatchPattern&& value) { m_matchPatternHasBeenSet = true; m_matchPattern = std::move(value); }

    /**
     * <p>The patterns to look for in the JSON body. WAF inspects the results of these
     * pattern matches against the rule inspection criteria. </p>
     */
    inline JsonBody& WithMatchPattern(const JsonMatchPattern& value) { SetMatchPattern(value); return *this;}

    /**
     * <p>The patterns to look for in the JSON body. WAF inspects the results of these
     * pattern matches against the rule inspection criteria. </p>
     */
    inline JsonBody& WithMatchPattern(JsonMatchPattern&& value) { SetMatchPattern(std::move(value)); return *this;}


    /**
     * <p>The parts of the JSON to match against using the <code>MatchPattern</code>.
     * If you specify <code>All</code>, WAF matches against keys and values. </p>
     */
    inline const JsonMatchScope& GetMatchScope() const{ return m_matchScope; }

    /**
     * <p>The parts of the JSON to match against using the <code>MatchPattern</code>.
     * If you specify <code>All</code>, WAF matches against keys and values. </p>
     */
    inline bool MatchScopeHasBeenSet() const { return m_matchScopeHasBeenSet; }

    /**
     * <p>The parts of the JSON to match against using the <code>MatchPattern</code>.
     * If you specify <code>All</code>, WAF matches against keys and values. </p>
     */
    inline void SetMatchScope(const JsonMatchScope& value) { m_matchScopeHasBeenSet = true; m_matchScope = value; }

    /**
     * <p>The parts of the JSON to match against using the <code>MatchPattern</code>.
     * If you specify <code>All</code>, WAF matches against keys and values. </p>
     */
    inline void SetMatchScope(JsonMatchScope&& value) { m_matchScopeHasBeenSet = true; m_matchScope = std::move(value); }

    /**
     * <p>The parts of the JSON to match against using the <code>MatchPattern</code>.
     * If you specify <code>All</code>, WAF matches against keys and values. </p>
     */
    inline JsonBody& WithMatchScope(const JsonMatchScope& value) { SetMatchScope(value); return *this;}

    /**
     * <p>The parts of the JSON to match against using the <code>MatchPattern</code>.
     * If you specify <code>All</code>, WAF matches against keys and values. </p>
     */
    inline JsonBody& WithMatchScope(JsonMatchScope&& value) { SetMatchScope(std::move(value)); return *this;}


    /**
     * <p>What WAF should do if it fails to completely parse the JSON body. The options
     * are the following:</p> <ul> <li> <p> <code>EVALUATE_AS_STRING</code> - Inspect
     * the body as plain text. WAF applies the text transformations and inspection
     * criteria that you defined for the JSON inspection to the body text string.</p>
     * </li> <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul> <p>If you don't provide this setting, WAF parses and
     * evaluates the content only up to the first parsing failure that it encounters.
     * </p> <p>WAF does its best to parse the entire JSON body, but might be forced to
     * stop for reasons such as invalid characters, duplicate keys, truncation, and any
     * content whose root node isn't an object or an array. </p> <p>WAF parses the JSON
     * in the following examples as two valid key, value pairs: </p> <ul> <li>
     * <p>Missing comma: <code>{"key1":"value1""key2":"value2"}</code> </p> </li> <li>
     * <p>Missing colon: <code>{"key1":"value1","key2""value2"}</code> </p> </li> <li>
     * <p>Extra colons: <code>{"key1"::"value1","key2""value2"}</code> </p> </li> </ul>
     */
    inline const BodyParsingFallbackBehavior& GetInvalidFallbackBehavior() const{ return m_invalidFallbackBehavior; }

    /**
     * <p>What WAF should do if it fails to completely parse the JSON body. The options
     * are the following:</p> <ul> <li> <p> <code>EVALUATE_AS_STRING</code> - Inspect
     * the body as plain text. WAF applies the text transformations and inspection
     * criteria that you defined for the JSON inspection to the body text string.</p>
     * </li> <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul> <p>If you don't provide this setting, WAF parses and
     * evaluates the content only up to the first parsing failure that it encounters.
     * </p> <p>WAF does its best to parse the entire JSON body, but might be forced to
     * stop for reasons such as invalid characters, duplicate keys, truncation, and any
     * content whose root node isn't an object or an array. </p> <p>WAF parses the JSON
     * in the following examples as two valid key, value pairs: </p> <ul> <li>
     * <p>Missing comma: <code>{"key1":"value1""key2":"value2"}</code> </p> </li> <li>
     * <p>Missing colon: <code>{"key1":"value1","key2""value2"}</code> </p> </li> <li>
     * <p>Extra colons: <code>{"key1"::"value1","key2""value2"}</code> </p> </li> </ul>
     */
    inline bool InvalidFallbackBehaviorHasBeenSet() const { return m_invalidFallbackBehaviorHasBeenSet; }

    /**
     * <p>What WAF should do if it fails to completely parse the JSON body. The options
     * are the following:</p> <ul> <li> <p> <code>EVALUATE_AS_STRING</code> - Inspect
     * the body as plain text. WAF applies the text transformations and inspection
     * criteria that you defined for the JSON inspection to the body text string.</p>
     * </li> <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul> <p>If you don't provide this setting, WAF parses and
     * evaluates the content only up to the first parsing failure that it encounters.
     * </p> <p>WAF does its best to parse the entire JSON body, but might be forced to
     * stop for reasons such as invalid characters, duplicate keys, truncation, and any
     * content whose root node isn't an object or an array. </p> <p>WAF parses the JSON
     * in the following examples as two valid key, value pairs: </p> <ul> <li>
     * <p>Missing comma: <code>{"key1":"value1""key2":"value2"}</code> </p> </li> <li>
     * <p>Missing colon: <code>{"key1":"value1","key2""value2"}</code> </p> </li> <li>
     * <p>Extra colons: <code>{"key1"::"value1","key2""value2"}</code> </p> </li> </ul>
     */
    inline void SetInvalidFallbackBehavior(const BodyParsingFallbackBehavior& value) { m_invalidFallbackBehaviorHasBeenSet = true; m_invalidFallbackBehavior = value; }

    /**
     * <p>What WAF should do if it fails to completely parse the JSON body. The options
     * are the following:</p> <ul> <li> <p> <code>EVALUATE_AS_STRING</code> - Inspect
     * the body as plain text. WAF applies the text transformations and inspection
     * criteria that you defined for the JSON inspection to the body text string.</p>
     * </li> <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul> <p>If you don't provide this setting, WAF parses and
     * evaluates the content only up to the first parsing failure that it encounters.
     * </p> <p>WAF does its best to parse the entire JSON body, but might be forced to
     * stop for reasons such as invalid characters, duplicate keys, truncation, and any
     * content whose root node isn't an object or an array. </p> <p>WAF parses the JSON
     * in the following examples as two valid key, value pairs: </p> <ul> <li>
     * <p>Missing comma: <code>{"key1":"value1""key2":"value2"}</code> </p> </li> <li>
     * <p>Missing colon: <code>{"key1":"value1","key2""value2"}</code> </p> </li> <li>
     * <p>Extra colons: <code>{"key1"::"value1","key2""value2"}</code> </p> </li> </ul>
     */
    inline void SetInvalidFallbackBehavior(BodyParsingFallbackBehavior&& value) { m_invalidFallbackBehaviorHasBeenSet = true; m_invalidFallbackBehavior = std::move(value); }

    /**
     * <p>What WAF should do if it fails to completely parse the JSON body. The options
     * are the following:</p> <ul> <li> <p> <code>EVALUATE_AS_STRING</code> - Inspect
     * the body as plain text. WAF applies the text transformations and inspection
     * criteria that you defined for the JSON inspection to the body text string.</p>
     * </li> <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul> <p>If you don't provide this setting, WAF parses and
     * evaluates the content only up to the first parsing failure that it encounters.
     * </p> <p>WAF does its best to parse the entire JSON body, but might be forced to
     * stop for reasons such as invalid characters, duplicate keys, truncation, and any
     * content whose root node isn't an object or an array. </p> <p>WAF parses the JSON
     * in the following examples as two valid key, value pairs: </p> <ul> <li>
     * <p>Missing comma: <code>{"key1":"value1""key2":"value2"}</code> </p> </li> <li>
     * <p>Missing colon: <code>{"key1":"value1","key2""value2"}</code> </p> </li> <li>
     * <p>Extra colons: <code>{"key1"::"value1","key2""value2"}</code> </p> </li> </ul>
     */
    inline JsonBody& WithInvalidFallbackBehavior(const BodyParsingFallbackBehavior& value) { SetInvalidFallbackBehavior(value); return *this;}

    /**
     * <p>What WAF should do if it fails to completely parse the JSON body. The options
     * are the following:</p> <ul> <li> <p> <code>EVALUATE_AS_STRING</code> - Inspect
     * the body as plain text. WAF applies the text transformations and inspection
     * criteria that you defined for the JSON inspection to the body text string.</p>
     * </li> <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul> <p>If you don't provide this setting, WAF parses and
     * evaluates the content only up to the first parsing failure that it encounters.
     * </p> <p>WAF does its best to parse the entire JSON body, but might be forced to
     * stop for reasons such as invalid characters, duplicate keys, truncation, and any
     * content whose root node isn't an object or an array. </p> <p>WAF parses the JSON
     * in the following examples as two valid key, value pairs: </p> <ul> <li>
     * <p>Missing comma: <code>{"key1":"value1""key2":"value2"}</code> </p> </li> <li>
     * <p>Missing colon: <code>{"key1":"value1","key2""value2"}</code> </p> </li> <li>
     * <p>Extra colons: <code>{"key1"::"value1","key2""value2"}</code> </p> </li> </ul>
     */
    inline JsonBody& WithInvalidFallbackBehavior(BodyParsingFallbackBehavior&& value) { SetInvalidFallbackBehavior(std::move(value)); return *this;}


    /**
     * <p>What WAF should do if the body is larger than WAF can inspect. WAF does not
     * support inspecting the entire contents of the body of a web request when the
     * body exceeds 8 KB (8192 bytes). Only the first 8 KB of the request body are
     * forwarded to WAF by the underlying host service. </p> <p>The options for
     * oversize handling are the following:</p> <ul> <li> <p> <code>CONTINUE</code> -
     * Inspect the body normally, according to the rule inspection criteria. </p> </li>
     * <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul> <p>You can combine the <code>MATCH</code> or
     * <code>NO_MATCH</code> settings for oversize handling with your rule and web ACL
     * action settings, so that you block any request whose body is over 8 KB. </p>
     * <p>Default: <code>CONTINUE</code> </p>
     */
    inline const OversizeHandling& GetOversizeHandling() const{ return m_oversizeHandling; }

    /**
     * <p>What WAF should do if the body is larger than WAF can inspect. WAF does not
     * support inspecting the entire contents of the body of a web request when the
     * body exceeds 8 KB (8192 bytes). Only the first 8 KB of the request body are
     * forwarded to WAF by the underlying host service. </p> <p>The options for
     * oversize handling are the following:</p> <ul> <li> <p> <code>CONTINUE</code> -
     * Inspect the body normally, according to the rule inspection criteria. </p> </li>
     * <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul> <p>You can combine the <code>MATCH</code> or
     * <code>NO_MATCH</code> settings for oversize handling with your rule and web ACL
     * action settings, so that you block any request whose body is over 8 KB. </p>
     * <p>Default: <code>CONTINUE</code> </p>
     */
    inline bool OversizeHandlingHasBeenSet() const { return m_oversizeHandlingHasBeenSet; }

    /**
     * <p>What WAF should do if the body is larger than WAF can inspect. WAF does not
     * support inspecting the entire contents of the body of a web request when the
     * body exceeds 8 KB (8192 bytes). Only the first 8 KB of the request body are
     * forwarded to WAF by the underlying host service. </p> <p>The options for
     * oversize handling are the following:</p> <ul> <li> <p> <code>CONTINUE</code> -
     * Inspect the body normally, according to the rule inspection criteria. </p> </li>
     * <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul> <p>You can combine the <code>MATCH</code> or
     * <code>NO_MATCH</code> settings for oversize handling with your rule and web ACL
     * action settings, so that you block any request whose body is over 8 KB. </p>
     * <p>Default: <code>CONTINUE</code> </p>
     */
    inline void SetOversizeHandling(const OversizeHandling& value) { m_oversizeHandlingHasBeenSet = true; m_oversizeHandling = value; }

    /**
     * <p>What WAF should do if the body is larger than WAF can inspect. WAF does not
     * support inspecting the entire contents of the body of a web request when the
     * body exceeds 8 KB (8192 bytes). Only the first 8 KB of the request body are
     * forwarded to WAF by the underlying host service. </p> <p>The options for
     * oversize handling are the following:</p> <ul> <li> <p> <code>CONTINUE</code> -
     * Inspect the body normally, according to the rule inspection criteria. </p> </li>
     * <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul> <p>You can combine the <code>MATCH</code> or
     * <code>NO_MATCH</code> settings for oversize handling with your rule and web ACL
     * action settings, so that you block any request whose body is over 8 KB. </p>
     * <p>Default: <code>CONTINUE</code> </p>
     */
    inline void SetOversizeHandling(OversizeHandling&& value) { m_oversizeHandlingHasBeenSet = true; m_oversizeHandling = std::move(value); }

    /**
     * <p>What WAF should do if the body is larger than WAF can inspect. WAF does not
     * support inspecting the entire contents of the body of a web request when the
     * body exceeds 8 KB (8192 bytes). Only the first 8 KB of the request body are
     * forwarded to WAF by the underlying host service. </p> <p>The options for
     * oversize handling are the following:</p> <ul> <li> <p> <code>CONTINUE</code> -
     * Inspect the body normally, according to the rule inspection criteria. </p> </li>
     * <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul> <p>You can combine the <code>MATCH</code> or
     * <code>NO_MATCH</code> settings for oversize handling with your rule and web ACL
     * action settings, so that you block any request whose body is over 8 KB. </p>
     * <p>Default: <code>CONTINUE</code> </p>
     */
    inline JsonBody& WithOversizeHandling(const OversizeHandling& value) { SetOversizeHandling(value); return *this;}

    /**
     * <p>What WAF should do if the body is larger than WAF can inspect. WAF does not
     * support inspecting the entire contents of the body of a web request when the
     * body exceeds 8 KB (8192 bytes). Only the first 8 KB of the request body are
     * forwarded to WAF by the underlying host service. </p> <p>The options for
     * oversize handling are the following:</p> <ul> <li> <p> <code>CONTINUE</code> -
     * Inspect the body normally, according to the rule inspection criteria. </p> </li>
     * <li> <p> <code>MATCH</code> - Treat the web request as matching the rule
     * statement. WAF applies the rule action to the request.</p> </li> <li> <p>
     * <code>NO_MATCH</code> - Treat the web request as not matching the rule
     * statement.</p> </li> </ul> <p>You can combine the <code>MATCH</code> or
     * <code>NO_MATCH</code> settings for oversize handling with your rule and web ACL
     * action settings, so that you block any request whose body is over 8 KB. </p>
     * <p>Default: <code>CONTINUE</code> </p>
     */
    inline JsonBody& WithOversizeHandling(OversizeHandling&& value) { SetOversizeHandling(std::move(value)); return *this;}

  private:

    JsonMatchPattern m_matchPattern;
    bool m_matchPatternHasBeenSet = false;

    JsonMatchScope m_matchScope;
    bool m_matchScopeHasBeenSet = false;

    BodyParsingFallbackBehavior m_invalidFallbackBehavior;
    bool m_invalidFallbackBehaviorHasBeenSet = false;

    OversizeHandling m_oversizeHandling;
    bool m_oversizeHandlingHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
