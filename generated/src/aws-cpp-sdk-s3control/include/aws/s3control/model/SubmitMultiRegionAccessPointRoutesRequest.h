/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/MultiRegionAccessPointRoute.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class SubmitMultiRegionAccessPointRoutesRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API SubmitMultiRegionAccessPointRoutesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SubmitMultiRegionAccessPointRoutes"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3CONTROL_API inline bool ShouldComputeContentMd5() const override { return true; }

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    SubmitMultiRegionAccessPointRoutesRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Multi-Region Access Point ARN.</p>
     */
    inline const Aws::String& GetMrap() const { return m_mrap; }
    inline bool MrapHasBeenSet() const { return m_mrapHasBeenSet; }
    template<typename MrapT = Aws::String>
    void SetMrap(MrapT&& value) { m_mrapHasBeenSet = true; m_mrap = std::forward<MrapT>(value); }
    template<typename MrapT = Aws::String>
    SubmitMultiRegionAccessPointRoutesRequest& WithMrap(MrapT&& value) { SetMrap(std::forward<MrapT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The different routes that make up the new route configuration. Active routes
     * return a value of <code>100</code>, and passive routes return a value of
     * <code>0</code>.</p>
     */
    inline const Aws::Vector<MultiRegionAccessPointRoute>& GetRouteUpdates() const { return m_routeUpdates; }
    inline bool RouteUpdatesHasBeenSet() const { return m_routeUpdatesHasBeenSet; }
    template<typename RouteUpdatesT = Aws::Vector<MultiRegionAccessPointRoute>>
    void SetRouteUpdates(RouteUpdatesT&& value) { m_routeUpdatesHasBeenSet = true; m_routeUpdates = std::forward<RouteUpdatesT>(value); }
    template<typename RouteUpdatesT = Aws::Vector<MultiRegionAccessPointRoute>>
    SubmitMultiRegionAccessPointRoutesRequest& WithRouteUpdates(RouteUpdatesT&& value) { SetRouteUpdates(std::forward<RouteUpdatesT>(value)); return *this;}
    template<typename RouteUpdatesT = MultiRegionAccessPointRoute>
    SubmitMultiRegionAccessPointRoutesRequest& AddRouteUpdates(RouteUpdatesT&& value) { m_routeUpdatesHasBeenSet = true; m_routeUpdates.emplace_back(std::forward<RouteUpdatesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_mrap;
    bool m_mrapHasBeenSet = false;

    Aws::Vector<MultiRegionAccessPointRoute> m_routeUpdates;
    bool m_routeUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
