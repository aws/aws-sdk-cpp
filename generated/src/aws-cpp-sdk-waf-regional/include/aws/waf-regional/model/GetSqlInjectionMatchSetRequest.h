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
   * <p>A request to get a <a>SqlInjectionMatchSet</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetSqlInjectionMatchSetRequest">AWS
   * API Reference</a></p>
   */
  class GetSqlInjectionMatchSetRequest : public WAFRegionalRequest
  {
  public:
    AWS_WAFREGIONAL_API GetSqlInjectionMatchSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSqlInjectionMatchSet"; }

    AWS_WAFREGIONAL_API Aws::String SerializePayload() const override;

    AWS_WAFREGIONAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
} // namespace WAFRegional
} // namespace Aws
