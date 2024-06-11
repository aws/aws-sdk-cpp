/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signer/model/Permission.h>
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
namespace signer
{
namespace Model
{
  class ListProfilePermissionsResult
  {
  public:
    AWS_SIGNER_API ListProfilePermissionsResult();
    AWS_SIGNER_API ListProfilePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIGNER_API ListProfilePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the current revision of profile permissions.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }
    inline ListProfilePermissionsResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}
    inline ListProfilePermissionsResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}
    inline ListProfilePermissionsResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total size of the policy associated with the Signing Profile in bytes.</p>
     */
    inline int GetPolicySizeBytes() const{ return m_policySizeBytes; }
    inline void SetPolicySizeBytes(int value) { m_policySizeBytes = value; }
    inline ListProfilePermissionsResult& WithPolicySizeBytes(int value) { SetPolicySizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of permissions associated with the Signing Profile.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const{ return m_permissions; }
    inline void SetPermissions(const Aws::Vector<Permission>& value) { m_permissions = value; }
    inline void SetPermissions(Aws::Vector<Permission>&& value) { m_permissions = std::move(value); }
    inline ListProfilePermissionsResult& WithPermissions(const Aws::Vector<Permission>& value) { SetPermissions(value); return *this;}
    inline ListProfilePermissionsResult& WithPermissions(Aws::Vector<Permission>&& value) { SetPermissions(std::move(value)); return *this;}
    inline ListProfilePermissionsResult& AddPermissions(const Permission& value) { m_permissions.push_back(value); return *this; }
    inline ListProfilePermissionsResult& AddPermissions(Permission&& value) { m_permissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>String for specifying the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListProfilePermissionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListProfilePermissionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListProfilePermissionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListProfilePermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListProfilePermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListProfilePermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_revisionId;

    int m_policySizeBytes;

    Aws::Vector<Permission> m_permissions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
