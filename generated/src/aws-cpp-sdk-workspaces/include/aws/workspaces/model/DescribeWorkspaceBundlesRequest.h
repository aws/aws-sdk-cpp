/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class DescribeWorkspaceBundlesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspaceBundlesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeWorkspaceBundles"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifiers of the bundles. You cannot combine this parameter with any
     * other filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBundleIds() const { return m_bundleIds; }
    inline bool BundleIdsHasBeenSet() const { return m_bundleIdsHasBeenSet; }
    template<typename BundleIdsT = Aws::Vector<Aws::String>>
    void SetBundleIds(BundleIdsT&& value) { m_bundleIdsHasBeenSet = true; m_bundleIds = std::forward<BundleIdsT>(value); }
    template<typename BundleIdsT = Aws::Vector<Aws::String>>
    DescribeWorkspaceBundlesRequest& WithBundleIds(BundleIdsT&& value) { SetBundleIds(std::forward<BundleIdsT>(value)); return *this;}
    template<typename BundleIdsT = Aws::String>
    DescribeWorkspaceBundlesRequest& AddBundleIds(BundleIdsT&& value) { m_bundleIdsHasBeenSet = true; m_bundleIds.emplace_back(std::forward<BundleIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The owner of the bundles. You cannot combine this parameter with any other
     * filter.</p> <p>To describe the bundles provided by Amazon Web Services, specify
     * <code>AMAZON</code>. To describe the bundles that belong to your account, don't
     * specify a value.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    DescribeWorkspaceBundlesRequest& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. (You received this token from a
     * previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeWorkspaceBundlesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_bundleIds;
    bool m_bundleIdsHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
