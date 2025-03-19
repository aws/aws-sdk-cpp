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
  class GetSizeConstraintSetRequest : public WAFRequest
  {
  public:
    AWS_WAF_API GetSizeConstraintSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSizeConstraintSet"; }

    AWS_WAF_API Aws::String SerializePayload() const override;

    AWS_WAF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>SizeConstraintSetId</code> of the <a>SizeConstraintSet</a> that you
     * want to get. <code>SizeConstraintSetId</code> is returned by
     * <a>CreateSizeConstraintSet</a> and by <a>ListSizeConstraintSets</a>.</p>
     */
    inline const Aws::String& GetSizeConstraintSetId() const { return m_sizeConstraintSetId; }
    inline bool SizeConstraintSetIdHasBeenSet() const { return m_sizeConstraintSetIdHasBeenSet; }
    template<typename SizeConstraintSetIdT = Aws::String>
    void SetSizeConstraintSetId(SizeConstraintSetIdT&& value) { m_sizeConstraintSetIdHasBeenSet = true; m_sizeConstraintSetId = std::forward<SizeConstraintSetIdT>(value); }
    template<typename SizeConstraintSetIdT = Aws::String>
    GetSizeConstraintSetRequest& WithSizeConstraintSetId(SizeConstraintSetIdT&& value) { SetSizeConstraintSetId(std::forward<SizeConstraintSetIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sizeConstraintSetId;
    bool m_sizeConstraintSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
