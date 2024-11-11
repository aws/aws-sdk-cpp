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
    AWS_OPENSEARCHSERVICE_API UpdatePackageScopeResult();
    AWS_OPENSEARCHSERVICE_API UpdatePackageScopeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API UpdatePackageScopeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> ID of the package whose scope was updated.</p>
     */
    inline const Aws::String& GetPackageID() const{ return m_packageID; }
    inline void SetPackageID(const Aws::String& value) { m_packageID = value; }
    inline void SetPackageID(Aws::String&& value) { m_packageID = std::move(value); }
    inline void SetPackageID(const char* value) { m_packageID.assign(value); }
    inline UpdatePackageScopeResult& WithPackageID(const Aws::String& value) { SetPackageID(value); return *this;}
    inline UpdatePackageScopeResult& WithPackageID(Aws::String&& value) { SetPackageID(std::move(value)); return *this;}
    inline UpdatePackageScopeResult& WithPackageID(const char* value) { SetPackageID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation that was performed on the package scope.</p>
     */
    inline const PackageScopeOperationEnum& GetOperation() const{ return m_operation; }
    inline void SetOperation(const PackageScopeOperationEnum& value) { m_operation = value; }
    inline void SetOperation(PackageScopeOperationEnum&& value) { m_operation = std::move(value); }
    inline UpdatePackageScopeResult& WithOperation(const PackageScopeOperationEnum& value) { SetOperation(value); return *this;}
    inline UpdatePackageScopeResult& WithOperation(PackageScopeOperationEnum&& value) { SetOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of users who have access to the package after the scope update.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPackageUserList() const{ return m_packageUserList; }
    inline void SetPackageUserList(const Aws::Vector<Aws::String>& value) { m_packageUserList = value; }
    inline void SetPackageUserList(Aws::Vector<Aws::String>&& value) { m_packageUserList = std::move(value); }
    inline UpdatePackageScopeResult& WithPackageUserList(const Aws::Vector<Aws::String>& value) { SetPackageUserList(value); return *this;}
    inline UpdatePackageScopeResult& WithPackageUserList(Aws::Vector<Aws::String>&& value) { SetPackageUserList(std::move(value)); return *this;}
    inline UpdatePackageScopeResult& AddPackageUserList(const Aws::String& value) { m_packageUserList.push_back(value); return *this; }
    inline UpdatePackageScopeResult& AddPackageUserList(Aws::String&& value) { m_packageUserList.push_back(std::move(value)); return *this; }
    inline UpdatePackageScopeResult& AddPackageUserList(const char* value) { m_packageUserList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdatePackageScopeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdatePackageScopeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdatePackageScopeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_packageID;

    PackageScopeOperationEnum m_operation;

    Aws::Vector<Aws::String> m_packageUserList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
