/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/RegexMatchSetUpdate.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class UpdateRegexMatchSetRequest : public WAFRegionalRequest
  {
  public:
    AWS_WAFREGIONAL_API UpdateRegexMatchSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRegexMatchSet"; }

    AWS_WAFREGIONAL_API Aws::String SerializePayload() const override;

    AWS_WAFREGIONAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>RegexMatchSetId</code> of the <a>RegexMatchSet</a> that you want to
     * update. <code>RegexMatchSetId</code> is returned by <a>CreateRegexMatchSet</a>
     * and by <a>ListRegexMatchSets</a>.</p>
     */
    inline const Aws::String& GetRegexMatchSetId() const { return m_regexMatchSetId; }
    inline bool RegexMatchSetIdHasBeenSet() const { return m_regexMatchSetIdHasBeenSet; }
    template<typename RegexMatchSetIdT = Aws::String>
    void SetRegexMatchSetId(RegexMatchSetIdT&& value) { m_regexMatchSetIdHasBeenSet = true; m_regexMatchSetId = std::forward<RegexMatchSetIdT>(value); }
    template<typename RegexMatchSetIdT = Aws::String>
    UpdateRegexMatchSetRequest& WithRegexMatchSetId(RegexMatchSetIdT&& value) { SetRegexMatchSetId(std::forward<RegexMatchSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>RegexMatchSetUpdate</code> objects that you want to insert
     * into or delete from a <a>RegexMatchSet</a>. For more information, see
     * <a>RegexMatchTuple</a>.</p>
     */
    inline const Aws::Vector<RegexMatchSetUpdate>& GetUpdates() const { return m_updates; }
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }
    template<typename UpdatesT = Aws::Vector<RegexMatchSetUpdate>>
    void SetUpdates(UpdatesT&& value) { m_updatesHasBeenSet = true; m_updates = std::forward<UpdatesT>(value); }
    template<typename UpdatesT = Aws::Vector<RegexMatchSetUpdate>>
    UpdateRegexMatchSetRequest& WithUpdates(UpdatesT&& value) { SetUpdates(std::forward<UpdatesT>(value)); return *this;}
    template<typename UpdatesT = RegexMatchSetUpdate>
    UpdateRegexMatchSetRequest& AddUpdates(UpdatesT&& value) { m_updatesHasBeenSet = true; m_updates.emplace_back(std::forward<UpdatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const { return m_changeToken; }
    inline bool ChangeTokenHasBeenSet() const { return m_changeTokenHasBeenSet; }
    template<typename ChangeTokenT = Aws::String>
    void SetChangeToken(ChangeTokenT&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::forward<ChangeTokenT>(value); }
    template<typename ChangeTokenT = Aws::String>
    UpdateRegexMatchSetRequest& WithChangeToken(ChangeTokenT&& value) { SetChangeToken(std::forward<ChangeTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_regexMatchSetId;
    bool m_regexMatchSetIdHasBeenSet = false;

    Aws::Vector<RegexMatchSetUpdate> m_updates;
    bool m_updatesHasBeenSet = false;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
