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
  class DeleteGeoMatchSetRequest : public WAFRegionalRequest
  {
  public:
    AWS_WAFREGIONAL_API DeleteGeoMatchSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteGeoMatchSet"; }

    AWS_WAFREGIONAL_API Aws::String SerializePayload() const override;

    AWS_WAFREGIONAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>GeoMatchSetID</code> of the <a>GeoMatchSet</a> that you want to
     * delete. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and
     * by <a>ListGeoMatchSets</a>.</p>
     */
    inline const Aws::String& GetGeoMatchSetId() const{ return m_geoMatchSetId; }
    inline bool GeoMatchSetIdHasBeenSet() const { return m_geoMatchSetIdHasBeenSet; }
    inline void SetGeoMatchSetId(const Aws::String& value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId = value; }
    inline void SetGeoMatchSetId(Aws::String&& value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId = std::move(value); }
    inline void SetGeoMatchSetId(const char* value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId.assign(value); }
    inline DeleteGeoMatchSetRequest& WithGeoMatchSetId(const Aws::String& value) { SetGeoMatchSetId(value); return *this;}
    inline DeleteGeoMatchSetRequest& WithGeoMatchSetId(Aws::String&& value) { SetGeoMatchSetId(std::move(value)); return *this;}
    inline DeleteGeoMatchSetRequest& WithGeoMatchSetId(const char* value) { SetGeoMatchSetId(value); return *this;}
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
    inline DeleteGeoMatchSetRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}
    inline DeleteGeoMatchSetRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}
    inline DeleteGeoMatchSetRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}
    ///@}
  private:

    Aws::String m_geoMatchSetId;
    bool m_geoMatchSetIdHasBeenSet = false;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
