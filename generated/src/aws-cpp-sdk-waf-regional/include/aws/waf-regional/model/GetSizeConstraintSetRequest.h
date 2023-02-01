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
  class GetSizeConstraintSetRequest : public WAFRegionalRequest
  {
  public:
    AWS_WAFREGIONAL_API GetSizeConstraintSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSizeConstraintSet"; }

    AWS_WAFREGIONAL_API Aws::String SerializePayload() const override;

    AWS_WAFREGIONAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>SizeConstraintSetId</code> of the <a>SizeConstraintSet</a> that you
     * want to get. <code>SizeConstraintSetId</code> is returned by
     * <a>CreateSizeConstraintSet</a> and by <a>ListSizeConstraintSets</a>.</p>
     */
    inline const Aws::String& GetSizeConstraintSetId() const{ return m_sizeConstraintSetId; }

    /**
     * <p>The <code>SizeConstraintSetId</code> of the <a>SizeConstraintSet</a> that you
     * want to get. <code>SizeConstraintSetId</code> is returned by
     * <a>CreateSizeConstraintSet</a> and by <a>ListSizeConstraintSets</a>.</p>
     */
    inline bool SizeConstraintSetIdHasBeenSet() const { return m_sizeConstraintSetIdHasBeenSet; }

    /**
     * <p>The <code>SizeConstraintSetId</code> of the <a>SizeConstraintSet</a> that you
     * want to get. <code>SizeConstraintSetId</code> is returned by
     * <a>CreateSizeConstraintSet</a> and by <a>ListSizeConstraintSets</a>.</p>
     */
    inline void SetSizeConstraintSetId(const Aws::String& value) { m_sizeConstraintSetIdHasBeenSet = true; m_sizeConstraintSetId = value; }

    /**
     * <p>The <code>SizeConstraintSetId</code> of the <a>SizeConstraintSet</a> that you
     * want to get. <code>SizeConstraintSetId</code> is returned by
     * <a>CreateSizeConstraintSet</a> and by <a>ListSizeConstraintSets</a>.</p>
     */
    inline void SetSizeConstraintSetId(Aws::String&& value) { m_sizeConstraintSetIdHasBeenSet = true; m_sizeConstraintSetId = std::move(value); }

    /**
     * <p>The <code>SizeConstraintSetId</code> of the <a>SizeConstraintSet</a> that you
     * want to get. <code>SizeConstraintSetId</code> is returned by
     * <a>CreateSizeConstraintSet</a> and by <a>ListSizeConstraintSets</a>.</p>
     */
    inline void SetSizeConstraintSetId(const char* value) { m_sizeConstraintSetIdHasBeenSet = true; m_sizeConstraintSetId.assign(value); }

    /**
     * <p>The <code>SizeConstraintSetId</code> of the <a>SizeConstraintSet</a> that you
     * want to get. <code>SizeConstraintSetId</code> is returned by
     * <a>CreateSizeConstraintSet</a> and by <a>ListSizeConstraintSets</a>.</p>
     */
    inline GetSizeConstraintSetRequest& WithSizeConstraintSetId(const Aws::String& value) { SetSizeConstraintSetId(value); return *this;}

    /**
     * <p>The <code>SizeConstraintSetId</code> of the <a>SizeConstraintSet</a> that you
     * want to get. <code>SizeConstraintSetId</code> is returned by
     * <a>CreateSizeConstraintSet</a> and by <a>ListSizeConstraintSets</a>.</p>
     */
    inline GetSizeConstraintSetRequest& WithSizeConstraintSetId(Aws::String&& value) { SetSizeConstraintSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>SizeConstraintSetId</code> of the <a>SizeConstraintSet</a> that you
     * want to get. <code>SizeConstraintSetId</code> is returned by
     * <a>CreateSizeConstraintSet</a> and by <a>ListSizeConstraintSets</a>.</p>
     */
    inline GetSizeConstraintSetRequest& WithSizeConstraintSetId(const char* value) { SetSizeConstraintSetId(value); return *this;}

  private:

    Aws::String m_sizeConstraintSetId;
    bool m_sizeConstraintSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
