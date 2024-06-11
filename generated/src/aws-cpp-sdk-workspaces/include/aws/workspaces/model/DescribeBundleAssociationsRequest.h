/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/BundleAssociatedResourceType.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class DescribeBundleAssociationsRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API DescribeBundleAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBundleAssociations"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the bundle.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }
    inline DescribeBundleAssociationsRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}
    inline DescribeBundleAssociationsRequest& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}
    inline DescribeBundleAssociationsRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource types of the associated resource.</p>
     */
    inline const Aws::Vector<BundleAssociatedResourceType>& GetAssociatedResourceTypes() const{ return m_associatedResourceTypes; }
    inline bool AssociatedResourceTypesHasBeenSet() const { return m_associatedResourceTypesHasBeenSet; }
    inline void SetAssociatedResourceTypes(const Aws::Vector<BundleAssociatedResourceType>& value) { m_associatedResourceTypesHasBeenSet = true; m_associatedResourceTypes = value; }
    inline void SetAssociatedResourceTypes(Aws::Vector<BundleAssociatedResourceType>&& value) { m_associatedResourceTypesHasBeenSet = true; m_associatedResourceTypes = std::move(value); }
    inline DescribeBundleAssociationsRequest& WithAssociatedResourceTypes(const Aws::Vector<BundleAssociatedResourceType>& value) { SetAssociatedResourceTypes(value); return *this;}
    inline DescribeBundleAssociationsRequest& WithAssociatedResourceTypes(Aws::Vector<BundleAssociatedResourceType>&& value) { SetAssociatedResourceTypes(std::move(value)); return *this;}
    inline DescribeBundleAssociationsRequest& AddAssociatedResourceTypes(const BundleAssociatedResourceType& value) { m_associatedResourceTypesHasBeenSet = true; m_associatedResourceTypes.push_back(value); return *this; }
    inline DescribeBundleAssociationsRequest& AddAssociatedResourceTypes(BundleAssociatedResourceType&& value) { m_associatedResourceTypesHasBeenSet = true; m_associatedResourceTypes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::Vector<BundleAssociatedResourceType> m_associatedResourceTypes;
    bool m_associatedResourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
