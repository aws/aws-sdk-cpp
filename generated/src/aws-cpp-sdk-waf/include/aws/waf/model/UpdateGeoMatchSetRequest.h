/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/GeoMatchSetUpdate.h>
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class UpdateGeoMatchSetRequest : public WAFRequest
  {
  public:
    AWS_WAF_API UpdateGeoMatchSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGeoMatchSet"; }

    AWS_WAF_API Aws::String SerializePayload() const override;

    AWS_WAF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>GeoMatchSetId</code> of the <a>GeoMatchSet</a> that you want to
     * update. <code>GeoMatchSetId</code> is returned by <a>CreateGeoMatchSet</a> and
     * by <a>ListGeoMatchSets</a>.</p>
     */
    inline const Aws::String& GetGeoMatchSetId() const{ return m_geoMatchSetId; }
    inline bool GeoMatchSetIdHasBeenSet() const { return m_geoMatchSetIdHasBeenSet; }
    inline void SetGeoMatchSetId(const Aws::String& value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId = value; }
    inline void SetGeoMatchSetId(Aws::String&& value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId = std::move(value); }
    inline void SetGeoMatchSetId(const char* value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId.assign(value); }
    inline UpdateGeoMatchSetRequest& WithGeoMatchSetId(const Aws::String& value) { SetGeoMatchSetId(value); return *this;}
    inline UpdateGeoMatchSetRequest& WithGeoMatchSetId(Aws::String&& value) { SetGeoMatchSetId(std::move(value)); return *this;}
    inline UpdateGeoMatchSetRequest& WithGeoMatchSetId(const char* value) { SetGeoMatchSetId(value); return *this;}
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
    inline UpdateGeoMatchSetRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}
    inline UpdateGeoMatchSetRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}
    inline UpdateGeoMatchSetRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>GeoMatchSetUpdate</code> objects that you want to insert
     * into or delete from an <a>GeoMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>GeoMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>GeoMatchConstraint</code> </p> </li> <li> <p>
     * <a>GeoMatchConstraint</a>: Contains <code>Type</code> and <code>Value</code>
     * </p> <p>You can have only one <code>Type</code> and <code>Value</code> per
     * <code>GeoMatchConstraint</code>. To add multiple countries, include multiple
     * <code>GeoMatchSetUpdate</code> objects in your request.</p> </li> </ul>
     */
    inline const Aws::Vector<GeoMatchSetUpdate>& GetUpdates() const{ return m_updates; }
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }
    inline void SetUpdates(const Aws::Vector<GeoMatchSetUpdate>& value) { m_updatesHasBeenSet = true; m_updates = value; }
    inline void SetUpdates(Aws::Vector<GeoMatchSetUpdate>&& value) { m_updatesHasBeenSet = true; m_updates = std::move(value); }
    inline UpdateGeoMatchSetRequest& WithUpdates(const Aws::Vector<GeoMatchSetUpdate>& value) { SetUpdates(value); return *this;}
    inline UpdateGeoMatchSetRequest& WithUpdates(Aws::Vector<GeoMatchSetUpdate>&& value) { SetUpdates(std::move(value)); return *this;}
    inline UpdateGeoMatchSetRequest& AddUpdates(const GeoMatchSetUpdate& value) { m_updatesHasBeenSet = true; m_updates.push_back(value); return *this; }
    inline UpdateGeoMatchSetRequest& AddUpdates(GeoMatchSetUpdate&& value) { m_updatesHasBeenSet = true; m_updates.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_geoMatchSetId;
    bool m_geoMatchSetIdHasBeenSet = false;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;

    Aws::Vector<GeoMatchSetUpdate> m_updates;
    bool m_updatesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
