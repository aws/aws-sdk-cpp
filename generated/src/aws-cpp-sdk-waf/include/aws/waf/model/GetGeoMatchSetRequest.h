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
  class GetGeoMatchSetRequest : public WAFRequest
  {
  public:
    AWS_WAF_API GetGeoMatchSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGeoMatchSet"; }

    AWS_WAF_API Aws::String SerializePayload() const override;

    AWS_WAF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>GeoMatchSetId</code> of the <a>GeoMatchSet</a> that you want to
     * get. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and by
     * <a>ListGeoMatchSets</a>.</p>
     */
    inline const Aws::String& GetGeoMatchSetId() const { return m_geoMatchSetId; }
    inline bool GeoMatchSetIdHasBeenSet() const { return m_geoMatchSetIdHasBeenSet; }
    template<typename GeoMatchSetIdT = Aws::String>
    void SetGeoMatchSetId(GeoMatchSetIdT&& value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId = std::forward<GeoMatchSetIdT>(value); }
    template<typename GeoMatchSetIdT = Aws::String>
    GetGeoMatchSetRequest& WithGeoMatchSetId(GeoMatchSetIdT&& value) { SetGeoMatchSetId(std::forward<GeoMatchSetIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_geoMatchSetId;
    bool m_geoMatchSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
