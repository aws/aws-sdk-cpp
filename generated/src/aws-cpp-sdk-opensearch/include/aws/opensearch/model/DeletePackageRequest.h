/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Deletes a package from OpenSearch Service. The package can't be associated
   * with any OpenSearch Service domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeletePackageRequest">AWS
   * API Reference</a></p>
   */
  class DeletePackageRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API DeletePackageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePackage"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The internal ID of the package you want to delete. Use
     * <code>DescribePackages</code> to find this value.</p>
     */
    inline const Aws::String& GetPackageID() const{ return m_packageID; }

    /**
     * <p>The internal ID of the package you want to delete. Use
     * <code>DescribePackages</code> to find this value.</p>
     */
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }

    /**
     * <p>The internal ID of the package you want to delete. Use
     * <code>DescribePackages</code> to find this value.</p>
     */
    inline void SetPackageID(const Aws::String& value) { m_packageIDHasBeenSet = true; m_packageID = value; }

    /**
     * <p>The internal ID of the package you want to delete. Use
     * <code>DescribePackages</code> to find this value.</p>
     */
    inline void SetPackageID(Aws::String&& value) { m_packageIDHasBeenSet = true; m_packageID = std::move(value); }

    /**
     * <p>The internal ID of the package you want to delete. Use
     * <code>DescribePackages</code> to find this value.</p>
     */
    inline void SetPackageID(const char* value) { m_packageIDHasBeenSet = true; m_packageID.assign(value); }

    /**
     * <p>The internal ID of the package you want to delete. Use
     * <code>DescribePackages</code> to find this value.</p>
     */
    inline DeletePackageRequest& WithPackageID(const Aws::String& value) { SetPackageID(value); return *this;}

    /**
     * <p>The internal ID of the package you want to delete. Use
     * <code>DescribePackages</code> to find this value.</p>
     */
    inline DeletePackageRequest& WithPackageID(Aws::String&& value) { SetPackageID(std::move(value)); return *this;}

    /**
     * <p>The internal ID of the package you want to delete. Use
     * <code>DescribePackages</code> to find this value.</p>
     */
    inline DeletePackageRequest& WithPackageID(const char* value) { SetPackageID(value); return *this;}

  private:

    Aws::String m_packageID;
    bool m_packageIDHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
