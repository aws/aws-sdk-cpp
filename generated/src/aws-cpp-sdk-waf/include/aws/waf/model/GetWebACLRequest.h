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
  class GetWebACLRequest : public WAFRequest
  {
  public:
    AWS_WAF_API GetWebACLRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWebACL"; }

    AWS_WAF_API Aws::String SerializePayload() const override;

    AWS_WAF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>WebACLId</code> of the <a>WebACL</a> that you want to get.
     * <code>WebACLId</code> is returned by <a>CreateWebACL</a> and by
     * <a>ListWebACLs</a>.</p>
     */
    inline const Aws::String& GetWebACLId() const { return m_webACLId; }
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }
    template<typename WebACLIdT = Aws::String>
    void SetWebACLId(WebACLIdT&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::forward<WebACLIdT>(value); }
    template<typename WebACLIdT = Aws::String>
    GetWebACLRequest& WithWebACLId(WebACLIdT&& value) { SetWebACLId(std::forward<WebACLIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_webACLId;
    bool m_webACLIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
