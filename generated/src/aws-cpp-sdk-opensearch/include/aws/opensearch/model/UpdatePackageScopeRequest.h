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
    AWS_OPENSEARCHSERVICE_API UpdatePackageScopeRequest();

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
    inline const Aws::String& GetPackageID() const{ return m_packageID; }
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }
    inline void SetPackageID(const Aws::String& value) { m_packageIDHasBeenSet = true; m_packageID = value; }
    inline void SetPackageID(Aws::String&& value) { m_packageIDHasBeenSet = true; m_packageID = std::move(value); }
    inline void SetPackageID(const char* value) { m_packageIDHasBeenSet = true; m_packageID.assign(value); }
    inline UpdatePackageScopeRequest& WithPackageID(const Aws::String& value) { SetPackageID(value); return *this;}
    inline UpdatePackageScopeRequest& WithPackageID(Aws::String&& value) { SetPackageID(std::move(value)); return *this;}
    inline UpdatePackageScopeRequest& WithPackageID(const char* value) { SetPackageID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The operation to perform on the package scope (e.g., add/remove/override
     * users).</p>
     */
    inline const PackageScopeOperationEnum& GetOperation() const{ return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(const PackageScopeOperationEnum& value) { m_operationHasBeenSet = true; m_operation = value; }
    inline void SetOperation(PackageScopeOperationEnum&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }
    inline UpdatePackageScopeRequest& WithOperation(const PackageScopeOperationEnum& value) { SetOperation(value); return *this;}
    inline UpdatePackageScopeRequest& WithOperation(PackageScopeOperationEnum&& value) { SetOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of users to be added or removed from the package scope.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPackageUserList() const{ return m_packageUserList; }
    inline bool PackageUserListHasBeenSet() const { return m_packageUserListHasBeenSet; }
    inline void SetPackageUserList(const Aws::Vector<Aws::String>& value) { m_packageUserListHasBeenSet = true; m_packageUserList = value; }
    inline void SetPackageUserList(Aws::Vector<Aws::String>&& value) { m_packageUserListHasBeenSet = true; m_packageUserList = std::move(value); }
    inline UpdatePackageScopeRequest& WithPackageUserList(const Aws::Vector<Aws::String>& value) { SetPackageUserList(value); return *this;}
    inline UpdatePackageScopeRequest& WithPackageUserList(Aws::Vector<Aws::String>&& value) { SetPackageUserList(std::move(value)); return *this;}
    inline UpdatePackageScopeRequest& AddPackageUserList(const Aws::String& value) { m_packageUserListHasBeenSet = true; m_packageUserList.push_back(value); return *this; }
    inline UpdatePackageScopeRequest& AddPackageUserList(Aws::String&& value) { m_packageUserListHasBeenSet = true; m_packageUserList.push_back(std::move(value)); return *this; }
    inline UpdatePackageScopeRequest& AddPackageUserList(const char* value) { m_packageUserListHasBeenSet = true; m_packageUserList.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_packageID;
    bool m_packageIDHasBeenSet = false;

    PackageScopeOperationEnum m_operation;
    bool m_operationHasBeenSet = false;

    Aws::Vector<Aws::String> m_packageUserList;
    bool m_packageUserListHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
