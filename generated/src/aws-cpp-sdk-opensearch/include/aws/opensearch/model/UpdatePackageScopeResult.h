/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/PackageScopeOperationEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{
  class UpdatePackageScopeResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpdatePackageScopeResult() = default;
    AWS_OPENSEARCHSERVICE_API UpdatePackageScopeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API UpdatePackageScopeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> ID of the package whose scope was updated.</p>
     */
    inline const Aws::String& GetPackageID() const { return m_packageID; }
    template<typename PackageIDT = Aws::String>
    void SetPackageID(PackageIDT&& value) { m_packageIDHasBeenSet = true; m_packageID = std::forward<PackageIDT>(value); }
    template<typename PackageIDT = Aws::String>
    UpdatePackageScopeResult& WithPackageID(PackageIDT&& value) { SetPackageID(std::forward<PackageIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation that was performed on the package scope.</p>
     */
    inline PackageScopeOperationEnum GetOperation() const { return m_operation; }
    inline void SetOperation(PackageScopeOperationEnum value) { m_operationHasBeenSet = true; m_operation = value; }
    inline UpdatePackageScopeResult& WithOperation(PackageScopeOperationEnum value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of users who have access to the package after the scope update.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPackageUserList() const { return m_packageUserList; }
    template<typename PackageUserListT = Aws::Vector<Aws::String>>
    void SetPackageUserList(PackageUserListT&& value) { m_packageUserListHasBeenSet = true; m_packageUserList = std::forward<PackageUserListT>(value); }
    template<typename PackageUserListT = Aws::Vector<Aws::String>>
    UpdatePackageScopeResult& WithPackageUserList(PackageUserListT&& value) { SetPackageUserList(std::forward<PackageUserListT>(value)); return *this;}
    template<typename PackageUserListT = Aws::String>
    UpdatePackageScopeResult& AddPackageUserList(PackageUserListT&& value) { m_packageUserListHasBeenSet = true; m_packageUserList.emplace_back(std::forward<PackageUserListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdatePackageScopeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageID;
    bool m_packageIDHasBeenSet = false;

    PackageScopeOperationEnum m_operation{PackageScopeOperationEnum::NOT_SET};
    bool m_operationHasBeenSet = false;

    Aws::Vector<Aws::String> m_packageUserList;
    bool m_packageUserListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
