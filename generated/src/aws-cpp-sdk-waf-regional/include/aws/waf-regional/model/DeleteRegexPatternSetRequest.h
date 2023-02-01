/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class DeleteRegexPatternSetRequest : public WAFRegionalRequest
  {
  public:
    AWS_WAFREGIONAL_API DeleteRegexPatternSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRegexPatternSet"; }

    AWS_WAFREGIONAL_API Aws::String SerializePayload() const override;

    AWS_WAFREGIONAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>RegexPatternSetId</code> of the <a>RegexPatternSet</a> that you
     * want to delete. <code>RegexPatternSetId</code> is returned by
     * <a>CreateRegexPatternSet</a> and by <a>ListRegexPatternSets</a>.</p>
     */
    inline const Aws::String& GetRegexPatternSetId() const{ return m_regexPatternSetId; }

    /**
     * <p>The <code>RegexPatternSetId</code> of the <a>RegexPatternSet</a> that you
     * want to delete. <code>RegexPatternSetId</code> is returned by
     * <a>CreateRegexPatternSet</a> and by <a>ListRegexPatternSets</a>.</p>
     */
    inline bool RegexPatternSetIdHasBeenSet() const { return m_regexPatternSetIdHasBeenSet; }

    /**
     * <p>The <code>RegexPatternSetId</code> of the <a>RegexPatternSet</a> that you
     * want to delete. <code>RegexPatternSetId</code> is returned by
     * <a>CreateRegexPatternSet</a> and by <a>ListRegexPatternSets</a>.</p>
     */
    inline void SetRegexPatternSetId(const Aws::String& value) { m_regexPatternSetIdHasBeenSet = true; m_regexPatternSetId = value; }

    /**
     * <p>The <code>RegexPatternSetId</code> of the <a>RegexPatternSet</a> that you
     * want to delete. <code>RegexPatternSetId</code> is returned by
     * <a>CreateRegexPatternSet</a> and by <a>ListRegexPatternSets</a>.</p>
     */
    inline void SetRegexPatternSetId(Aws::String&& value) { m_regexPatternSetIdHasBeenSet = true; m_regexPatternSetId = std::move(value); }

    /**
     * <p>The <code>RegexPatternSetId</code> of the <a>RegexPatternSet</a> that you
     * want to delete. <code>RegexPatternSetId</code> is returned by
     * <a>CreateRegexPatternSet</a> and by <a>ListRegexPatternSets</a>.</p>
     */
    inline void SetRegexPatternSetId(const char* value) { m_regexPatternSetIdHasBeenSet = true; m_regexPatternSetId.assign(value); }

    /**
     * <p>The <code>RegexPatternSetId</code> of the <a>RegexPatternSet</a> that you
     * want to delete. <code>RegexPatternSetId</code> is returned by
     * <a>CreateRegexPatternSet</a> and by <a>ListRegexPatternSets</a>.</p>
     */
    inline DeleteRegexPatternSetRequest& WithRegexPatternSetId(const Aws::String& value) { SetRegexPatternSetId(value); return *this;}

    /**
     * <p>The <code>RegexPatternSetId</code> of the <a>RegexPatternSet</a> that you
     * want to delete. <code>RegexPatternSetId</code> is returned by
     * <a>CreateRegexPatternSet</a> and by <a>ListRegexPatternSets</a>.</p>
     */
    inline DeleteRegexPatternSetRequest& WithRegexPatternSetId(Aws::String&& value) { SetRegexPatternSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>RegexPatternSetId</code> of the <a>RegexPatternSet</a> that you
     * want to delete. <code>RegexPatternSetId</code> is returned by
     * <a>CreateRegexPatternSet</a> and by <a>ListRegexPatternSets</a>.</p>
     */
    inline DeleteRegexPatternSetRequest& WithRegexPatternSetId(const char* value) { SetRegexPatternSetId(value); return *this;}


    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline bool ChangeTokenHasBeenSet() const { return m_changeTokenHasBeenSet; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::move(value); }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeTokenHasBeenSet = true; m_changeToken.assign(value); }

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline DeleteRegexPatternSetRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline DeleteRegexPatternSetRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline DeleteRegexPatternSetRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:

    Aws::String m_regexPatternSetId;
    bool m_regexPatternSetIdHasBeenSet = false;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
