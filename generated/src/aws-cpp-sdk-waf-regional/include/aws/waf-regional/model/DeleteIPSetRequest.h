﻿/**
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
  class DeleteIPSetRequest : public WAFRegionalRequest
  {
  public:
    AWS_WAFREGIONAL_API DeleteIPSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteIPSet"; }

    AWS_WAFREGIONAL_API Aws::String SerializePayload() const override;

    AWS_WAFREGIONAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>IPSetId</code> of the <a>IPSet</a> that you want to delete.
     * <code>IPSetId</code> is returned by <a>CreateIPSet</a> and by
     * <a>ListIPSets</a>.</p>
     */
    inline const Aws::String& GetIPSetId() const{ return m_iPSetId; }
    inline bool IPSetIdHasBeenSet() const { return m_iPSetIdHasBeenSet; }
    inline void SetIPSetId(const Aws::String& value) { m_iPSetIdHasBeenSet = true; m_iPSetId = value; }
    inline void SetIPSetId(Aws::String&& value) { m_iPSetIdHasBeenSet = true; m_iPSetId = std::move(value); }
    inline void SetIPSetId(const char* value) { m_iPSetIdHasBeenSet = true; m_iPSetId.assign(value); }
    inline DeleteIPSetRequest& WithIPSetId(const Aws::String& value) { SetIPSetId(value); return *this;}
    inline DeleteIPSetRequest& WithIPSetId(Aws::String&& value) { SetIPSetId(std::move(value)); return *this;}
    inline DeleteIPSetRequest& WithIPSetId(const char* value) { SetIPSetId(value); return *this;}
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
    inline DeleteIPSetRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}
    inline DeleteIPSetRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}
    inline DeleteIPSetRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}
    ///@}
  private:

    Aws::String m_iPSetId;
    bool m_iPSetIdHasBeenSet = false;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
