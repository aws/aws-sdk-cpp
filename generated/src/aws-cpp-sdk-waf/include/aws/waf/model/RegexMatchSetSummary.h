﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
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
namespace WAF
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
   * endpoints for regional and global use. </p>  <p>Returned by
   * <a>ListRegexMatchSets</a>. Each <code>RegexMatchSetSummary</code> object
   * includes the <code>Name</code> and <code>RegexMatchSetId</code> for one
   * <a>RegexMatchSet</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/RegexMatchSetSummary">AWS
   * API Reference</a></p>
   */
  class RegexMatchSetSummary
  {
  public:
    AWS_WAF_API RegexMatchSetSummary();
    AWS_WAF_API RegexMatchSetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API RegexMatchSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>RegexMatchSetId</code> for a <code>RegexMatchSet</code>. You use
     * <code>RegexMatchSetId</code> to get information about a
     * <code>RegexMatchSet</code>, update a <code>RegexMatchSet</code>, remove a
     * <code>RegexMatchSet</code> from a <code>Rule</code>, and delete a
     * <code>RegexMatchSet</code> from AWS WAF.</p> <p> <code>RegexMatchSetId</code> is
     * returned by <a>CreateRegexMatchSet</a> and by <a>ListRegexMatchSets</a>.</p>
     */
    inline const Aws::String& GetRegexMatchSetId() const{ return m_regexMatchSetId; }
    inline bool RegexMatchSetIdHasBeenSet() const { return m_regexMatchSetIdHasBeenSet; }
    inline void SetRegexMatchSetId(const Aws::String& value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId = value; }
    inline void SetRegexMatchSetId(Aws::String&& value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId = std::move(value); }
    inline void SetRegexMatchSetId(const char* value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId.assign(value); }
    inline RegexMatchSetSummary& WithRegexMatchSetId(const Aws::String& value) { SetRegexMatchSetId(value); return *this;}
    inline RegexMatchSetSummary& WithRegexMatchSetId(Aws::String&& value) { SetRegexMatchSetId(std::move(value)); return *this;}
    inline RegexMatchSetSummary& WithRegexMatchSetId(const char* value) { SetRegexMatchSetId(value); return *this;}
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
    inline RegexMatchSetSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RegexMatchSetSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RegexMatchSetSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_regexMatchSetId;
    bool m_regexMatchSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
