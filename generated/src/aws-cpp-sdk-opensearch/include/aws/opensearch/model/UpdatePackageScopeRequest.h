/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/PackageScopeOperationEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   */
  class UpdatePackageScopeRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpdatePackageScopeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePackageScope"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>ID of the package whose scope is being updated.</p>
     */
    inline const Aws::String& GetPackageID() const { return m_packageID; }
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }
    template<typename PackageIDT = Aws::String>
    void SetPackageID(PackageIDT&& value) { m_packageIDHasBeenSet = true; m_packageID = std::forward<PackageIDT>(value); }
    template<typename PackageIDT = Aws::String>
    UpdatePackageScopeRequest& WithPackageID(PackageIDT&& value) { SetPackageID(std::forward<PackageIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The operation to perform on the package scope (e.g., add/remove/override
     * users).</p>
     */
    inline PackageScopeOperationEnum GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(PackageScopeOperationEnum value) { m_operationHasBeenSet = true; m_operation = value; }
    inline UpdatePackageScopeRequest& WithOperation(PackageScopeOperationEnum value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of users to be added or removed from the package scope.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPackageUserList() const { return m_packageUserList; }
    inline bool PackageUserListHasBeenSet() const { return m_packageUserListHasBeenSet; }
    template<typename PackageUserListT = Aws::Vector<Aws::String>>
    void SetPackageUserList(PackageUserListT&& value) { m_packageUserListHasBeenSet = true; m_packageUserList = std::forward<PackageUserListT>(value); }
    template<typename PackageUserListT = Aws::Vector<Aws::String>>
    UpdatePackageScopeRequest& WithPackageUserList(PackageUserListT&& value) { SetPackageUserList(std::forward<PackageUserListT>(value)); return *this;}
    template<typename PackageUserListT = Aws::String>
    UpdatePackageScopeRequest& AddPackageUserList(PackageUserListT&& value) { m_packageUserListHasBeenSet = true; m_packageUserList.emplace_back(std::forward<PackageUserListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_packageID;
    bool m_packageIDHasBeenSet = false;

    PackageScopeOperationEnum m_operation{PackageScopeOperationEnum::NOT_SET};
    bool m_operationHasBeenSet = false;

    Aws::Vector<Aws::String> m_packageUserList;
    bool m_packageUserListHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
