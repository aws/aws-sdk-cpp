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
   * <p>A request to get a <a>SqlInjectionMatchSet</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetSqlInjectionMatchSetRequest">AWS
   * API Reference</a></p>
   */
  class GetSqlInjectionMatchSetRequest : public WAFRequest
  {
  public:
    AWS_WAF_API GetSqlInjectionMatchSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSqlInjectionMatchSet"; }

    AWS_WAF_API Aws::String SerializePayload() const override;

    AWS_WAF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>SqlInjectionMatchSetId</code> of the <a>SqlInjectionMatchSet</a>
     * that you want to get. <code>SqlInjectionMatchSetId</code> is returned by
     * <a>CreateSqlInjectionMatchSet</a> and by <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline const Aws::String& GetSqlInjectionMatchSetId() const { return m_sqlInjectionMatchSetId; }
    inline bool SqlInjectionMatchSetIdHasBeenSet() const { return m_sqlInjectionMatchSetIdHasBeenSet; }
    template<typename SqlInjectionMatchSetIdT = Aws::String>
    void SetSqlInjectionMatchSetId(SqlInjectionMatchSetIdT&& value) { m_sqlInjectionMatchSetIdHasBeenSet = true; m_sqlInjectionMatchSetId = std::forward<SqlInjectionMatchSetIdT>(value); }
    template<typename SqlInjectionMatchSetIdT = Aws::String>
    GetSqlInjectionMatchSetRequest& WithSqlInjectionMatchSetId(SqlInjectionMatchSetIdT&& value) { SetSqlInjectionMatchSetId(std::forward<SqlInjectionMatchSetIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sqlInjectionMatchSetId;
    bool m_sqlInjectionMatchSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
