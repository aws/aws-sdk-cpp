﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/RegexMatchTuple.h>
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
   * endpoints for regional and global use. </p>  <p>In a
   * <a>GetRegexMatchSet</a> request, <code>RegexMatchSet</code> is a complex type
   * that contains the <code>RegexMatchSetId</code> and <code>Name</code> of a
   * <code>RegexMatchSet</code>, and the values that you specified when you updated
   * the <code>RegexMatchSet</code>.</p> <p> The values are contained in a
   * <code>RegexMatchTuple</code> object, which specify the parts of web requests
   * that you want AWS WAF to inspect and the values that you want AWS WAF to search
   * for. If a <code>RegexMatchSet</code> contains more than one
   * <code>RegexMatchTuple</code> object, a request needs to match the settings in
   * only one <code>ByteMatchTuple</code> to be considered a match.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/RegexMatchSet">AWS
   * API Reference</a></p>
   */
  class RegexMatchSet
  {
  public:
    AWS_WAFREGIONAL_API RegexMatchSet();
    AWS_WAFREGIONAL_API RegexMatchSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API RegexMatchSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>RegexMatchSetId</code> for a <code>RegexMatchSet</code>. You use
     * <code>RegexMatchSetId</code> to get information about a
     * <code>RegexMatchSet</code> (see <a>GetRegexMatchSet</a>), update a
     * <code>RegexMatchSet</code> (see <a>UpdateRegexMatchSet</a>), insert a
     * <code>RegexMatchSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>RegexMatchSet</code> from AWS WAF (see <a>DeleteRegexMatchSet</a>).</p>
     * <p> <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a> and
     * by <a>ListRegexMatchSets</a>.</p>
     */
    inline const Aws::String& GetRegexMatchSetId() const{ return m_regexMatchSetId; }
    inline bool RegexMatchSetIdHasBeenSet() const { return m_regexMatchSetIdHasBeenSet; }
    inline void SetRegexMatchSetId(const Aws::String& value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId = value; }
    inline void SetRegexMatchSetId(Aws::String&& value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId = std::move(value); }
    inline void SetRegexMatchSetId(const char* value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId.assign(value); }
    inline RegexMatchSet& WithRegexMatchSetId(const Aws::String& value) { SetRegexMatchSetId(value); return *this;}
    inline RegexMatchSet& WithRegexMatchSetId(Aws::String&& value) { SetRegexMatchSetId(std::move(value)); return *this;}
    inline RegexMatchSet& WithRegexMatchSetId(const char* value) { SetRegexMatchSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name or description of the <a>RegexMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>RegexMatchSet</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RegexMatchSet& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RegexMatchSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RegexMatchSet& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains an array of <a>RegexMatchTuple</a> objects. Each
     * <code>RegexMatchTuple</code> object contains: </p> <ul> <li> <p>The part of a
     * web request that you want AWS WAF to inspect, such as a query string or the
     * value of the <code>User-Agent</code> header. </p> </li> <li> <p>The identifier
     * of the pattern (a regular expression) that you want AWS WAF to look for. For
     * more information, see <a>RegexPatternSet</a>.</p> </li> <li> <p>Whether to
     * perform any conversions on the request, such as converting it to lowercase,
     * before inspecting it for the specified string.</p> </li> </ul>
     */
    inline const Aws::Vector<RegexMatchTuple>& GetRegexMatchTuples() const{ return m_regexMatchTuples; }
    inline bool RegexMatchTuplesHasBeenSet() const { return m_regexMatchTuplesHasBeenSet; }
    inline void SetRegexMatchTuples(const Aws::Vector<RegexMatchTuple>& value) { m_regexMatchTuplesHasBeenSet = true; m_regexMatchTuples = value; }
    inline void SetRegexMatchTuples(Aws::Vector<RegexMatchTuple>&& value) { m_regexMatchTuplesHasBeenSet = true; m_regexMatchTuples = std::move(value); }
    inline RegexMatchSet& WithRegexMatchTuples(const Aws::Vector<RegexMatchTuple>& value) { SetRegexMatchTuples(value); return *this;}
    inline RegexMatchSet& WithRegexMatchTuples(Aws::Vector<RegexMatchTuple>&& value) { SetRegexMatchTuples(std::move(value)); return *this;}
    inline RegexMatchSet& AddRegexMatchTuples(const RegexMatchTuple& value) { m_regexMatchTuplesHasBeenSet = true; m_regexMatchTuples.push_back(value); return *this; }
    inline RegexMatchSet& AddRegexMatchTuples(RegexMatchTuple&& value) { m_regexMatchTuplesHasBeenSet = true; m_regexMatchTuples.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_regexMatchSetId;
    bool m_regexMatchSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<RegexMatchTuple> m_regexMatchTuples;
    bool m_regexMatchTuplesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
