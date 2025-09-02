/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Notifications
{
namespace Model
{
  class ListOrganizationalUnitsResult
  {
  public:
    AWS_NOTIFICATIONS_API ListOrganizationalUnitsResult() = default;
    AWS_NOTIFICATIONS_API ListOrganizationalUnitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API ListOrganizationalUnitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of organizational units that match the specified criteria.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnits() const { return m_organizationalUnits; }
    template<typename OrganizationalUnitsT = Aws::Vector<Aws::String>>
    void SetOrganizationalUnits(OrganizationalUnitsT&& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits = std::forward<OrganizationalUnitsT>(value); }
    template<typename OrganizationalUnitsT = Aws::Vector<Aws::String>>
    ListOrganizationalUnitsResult& WithOrganizationalUnits(OrganizationalUnitsT&& value) { SetOrganizationalUnits(std::forward<OrganizationalUnitsT>(value)); return *this;}
    template<typename OrganizationalUnitsT = Aws::String>
    ListOrganizationalUnitsResult& AddOrganizationalUnits(OrganizationalUnitsT&& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits.emplace_back(std::forward<OrganizationalUnitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use for the next page of results. If there are no additional
     * results, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOrganizationalUnitsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOrganizationalUnitsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_organizationalUnits;
    bool m_organizationalUnitsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
