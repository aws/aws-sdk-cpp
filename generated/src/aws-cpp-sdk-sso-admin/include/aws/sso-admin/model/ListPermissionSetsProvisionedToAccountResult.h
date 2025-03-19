/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSOAdmin
{
namespace Model
{
  class ListPermissionSetsProvisionedToAccountResult
  {
  public:
    AWS_SSOADMIN_API ListPermissionSetsProvisionedToAccountResult() = default;
    AWS_SSOADMIN_API ListPermissionSetsProvisionedToAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListPermissionSetsProvisionedToAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPermissionSetsProvisionedToAccountResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the level of access that an Amazon Web Services account has.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPermissionSets() const { return m_permissionSets; }
    template<typename PermissionSetsT = Aws::Vector<Aws::String>>
    void SetPermissionSets(PermissionSetsT&& value) { m_permissionSetsHasBeenSet = true; m_permissionSets = std::forward<PermissionSetsT>(value); }
    template<typename PermissionSetsT = Aws::Vector<Aws::String>>
    ListPermissionSetsProvisionedToAccountResult& WithPermissionSets(PermissionSetsT&& value) { SetPermissionSets(std::forward<PermissionSetsT>(value)); return *this;}
    template<typename PermissionSetsT = Aws::String>
    ListPermissionSetsProvisionedToAccountResult& AddPermissionSets(PermissionSetsT&& value) { m_permissionSetsHasBeenSet = true; m_permissionSets.emplace_back(std::forward<PermissionSetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPermissionSetsProvisionedToAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_permissionSets;
    bool m_permissionSetsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
