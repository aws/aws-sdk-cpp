﻿/**
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
    AWS_QUICKSIGHT_API ListCustomPermissionsResult() = default;
    AWS_QUICKSIGHT_API ListCustomPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListCustomPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListCustomPermissionsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom permissions profiles.</p>
     */
    inline const Aws::Vector<CustomPermissions>& GetCustomPermissionsList() const { return m_customPermissionsList; }
    template<typename CustomPermissionsListT = Aws::Vector<CustomPermissions>>
    void SetCustomPermissionsList(CustomPermissionsListT&& value) { m_customPermissionsListHasBeenSet = true; m_customPermissionsList = std::forward<CustomPermissionsListT>(value); }
    template<typename CustomPermissionsListT = Aws::Vector<CustomPermissions>>
    ListCustomPermissionsResult& WithCustomPermissionsList(CustomPermissionsListT&& value) { SetCustomPermissionsList(std::forward<CustomPermissionsListT>(value)); return *this;}
    template<typename CustomPermissionsListT = CustomPermissions>
    ListCustomPermissionsResult& AddCustomPermissionsList(CustomPermissionsListT&& value) { m_customPermissionsListHasBeenSet = true; m_customPermissionsList.emplace_back(std::forward<CustomPermissionsListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCustomPermissionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCustomPermissionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::Vector<CustomPermissions> m_customPermissionsList;
    bool m_customPermissionsListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
