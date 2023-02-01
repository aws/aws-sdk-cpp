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
  class DeleteGeoMatchSetRequest : public WAFRequest
  {
  public:
    AWS_WAF_API DeleteGeoMatchSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteGeoMatchSet"; }

    AWS_WAF_API Aws::String SerializePayload() const override;

    AWS_WAF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>GeoMatchSetID</code> of the <a>GeoMatchSet</a> that you want to
     * delete. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and
     * by <a>ListGeoMatchSets</a>.</p>
     */
    inline const Aws::String& GetGeoMatchSetId() const{ return m_geoMatchSetId; }

    /**
     * <p>The <code>GeoMatchSetID</code> of the <a>GeoMatchSet</a> that you want to
     * delete. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and
     * by <a>ListGeoMatchSets</a>.</p>
     */
    inline bool GeoMatchSetIdHasBeenSet() const { return m_geoMatchSetIdHasBeenSet; }

    /**
     * <p>The <code>GeoMatchSetID</code> of the <a>GeoMatchSet</a> that you want to
     * delete. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and
     * by <a>ListGeoMatchSets</a>.</p>
     */
    inline void SetGeoMatchSetId(const Aws::String& value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId = value; }

    /**
     * <p>The <code>GeoMatchSetID</code> of the <a>GeoMatchSet</a> that you want to
     * delete. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and
     * by <a>ListGeoMatchSets</a>.</p>
     */
    inline void SetGeoMatchSetId(Aws::String&& value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId = std::move(value); }

    /**
     * <p>The <code>GeoMatchSetID</code> of the <a>GeoMatchSet</a> that you want to
     * delete. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and
     * by <a>ListGeoMatchSets</a>.</p>
     */
    inline void SetGeoMatchSetId(const char* value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId.assign(value); }

    /**
     * <p>The <code>GeoMatchSetID</code> of the <a>GeoMatchSet</a> that you want to
     * delete. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and
     * by <a>ListGeoMatchSets</a>.</p>
     */
    inline DeleteGeoMatchSetRequest& WithGeoMatchSetId(const Aws::String& value) { SetGeoMatchSetId(value); return *this;}

    /**
     * <p>The <code>GeoMatchSetID</code> of the <a>GeoMatchSet</a> that you want to
     * delete. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and
     * by <a>ListGeoMatchSets</a>.</p>
     */
    inline DeleteGeoMatchSetRequest& WithGeoMatchSetId(Aws::String&& value) { SetGeoMatchSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>GeoMatchSetID</code> of the <a>GeoMatchSet</a> that you want to
     * delete. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and
     * by <a>ListGeoMatchSets</a>.</p>
     */
    inline DeleteGeoMatchSetRequest& WithGeoMatchSetId(const char* value) { SetGeoMatchSetId(value); return *this;}


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
    inline DeleteGeoMatchSetRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline DeleteGeoMatchSetRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline DeleteGeoMatchSetRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:

    Aws::String m_geoMatchSetId;
    bool m_geoMatchSetIdHasBeenSet = false;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
