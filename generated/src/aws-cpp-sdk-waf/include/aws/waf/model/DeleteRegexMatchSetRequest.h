/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class DeleteRegexMatchSetRequest : public WAFRequest
  {
  public:
    AWS_WAF_API DeleteRegexMatchSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRegexMatchSet"; }

    AWS_WAF_API Aws::String SerializePayload() const override;

    AWS_WAF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>RegexMatchSetId</code> of the <a>RegexMatchSet</a> that you want to
     * delete. <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a>
     * and by <a>ListRegexMatchSets</a>.</p>
     */
    inline const Aws::String& GetRegexMatchSetId() const{ return m_regexMatchSetId; }
    inline bool RegexMatchSetIdHasBeenSet() const { return m_regexMatchSetIdHasBeenSet; }
    inline void SetRegexMatchSetId(const Aws::String& value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId = value; }
    inline void SetRegexMatchSetId(Aws::String&& value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId = std::move(value); }
    inline void SetRegexMatchSetId(const char* value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId.assign(value); }
    inline DeleteRegexMatchSetRequest& WithRegexMatchSetId(const Aws::String& value) { SetRegexMatchSetId(value); return *this;}
    inline DeleteRegexMatchSetRequest& WithRegexMatchSetId(Aws::String&& value) { SetRegexMatchSetId(std::move(value)); return *this;}
    inline DeleteRegexMatchSetRequest& WithRegexMatchSetId(const char* value) { SetRegexMatchSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }
    inline bool ChangeTokenHasBeenSet() const { return m_changeTokenHasBeenSet; }
    inline void SetChangeToken(const Aws::String& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }
    inline void SetChangeToken(Aws::String&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::move(value); }
    inline void SetChangeToken(const char* value) { m_changeTokenHasBeenSet = true; m_changeToken.assign(value); }
    inline DeleteRegexMatchSetRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}
    inline DeleteRegexMatchSetRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}
    inline DeleteRegexMatchSetRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}
    ///@}
  private:

    Aws::String m_regexMatchSetId;
    bool m_regexMatchSetIdHasBeenSet = false;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
