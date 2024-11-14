/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/CustomPermissions.h>
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
namespace QuickSight
{
namespace Model
{
  class ListCustomPermissionsResult
  {
  public:
    AWS_QUICKSIGHT_API ListCustomPermissionsResult();
    AWS_QUICKSIGHT_API ListCustomPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListCustomPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline ListCustomPermissionsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom permissions profiles.</p>
     */
    inline const Aws::Vector<CustomPermissions>& GetCustomPermissionsList() const{ return m_customPermissionsList; }
    inline void SetCustomPermissionsList(const Aws::Vector<CustomPermissions>& value) { m_customPermissionsList = value; }
    inline void SetCustomPermissionsList(Aws::Vector<CustomPermissions>&& value) { m_customPermissionsList = std::move(value); }
    inline ListCustomPermissionsResult& WithCustomPermissionsList(const Aws::Vector<CustomPermissions>& value) { SetCustomPermissionsList(value); return *this;}
    inline ListCustomPermissionsResult& WithCustomPermissionsList(Aws::Vector<CustomPermissions>&& value) { SetCustomPermissionsList(std::move(value)); return *this;}
    inline ListCustomPermissionsResult& AddCustomPermissionsList(const CustomPermissions& value) { m_customPermissionsList.push_back(value); return *this; }
    inline ListCustomPermissionsResult& AddCustomPermissionsList(CustomPermissions&& value) { m_customPermissionsList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCustomPermissionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCustomPermissionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCustomPermissionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCustomPermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCustomPermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCustomPermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_status;

    Aws::Vector<CustomPermissions> m_customPermissionsList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
