/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/OrganizationalUnit.h>
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
namespace Organizations
{
namespace Model
{
  class ListOrganizationalUnitsForParentResult
  {
  public:
    AWS_ORGANIZATIONS_API ListOrganizationalUnitsForParentResult() = default;
    AWS_ORGANIZATIONS_API ListOrganizationalUnitsForParentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API ListOrganizationalUnitsForParentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the OUs in the specified root or parent OU.</p>
     */
    inline const Aws::Vector<OrganizationalUnit>& GetOrganizationalUnits() const { return m_organizationalUnits; }
    template<typename OrganizationalUnitsT = Aws::Vector<OrganizationalUnit>>
    void SetOrganizationalUnits(OrganizationalUnitsT&& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits = std::forward<OrganizationalUnitsT>(value); }
    template<typename OrganizationalUnitsT = Aws::Vector<OrganizationalUnit>>
    ListOrganizationalUnitsForParentResult& WithOrganizationalUnits(OrganizationalUnitsT&& value) { SetOrganizationalUnits(std::forward<OrganizationalUnitsT>(value)); return *this;}
    template<typename OrganizationalUnitsT = OrganizationalUnit>
    ListOrganizationalUnitsForParentResult& AddOrganizationalUnits(OrganizationalUnitsT&& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits.emplace_back(std::forward<OrganizationalUnitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOrganizationalUnitsForParentResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOrganizationalUnitsForParentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OrganizationalUnit> m_organizationalUnits;
    bool m_organizationalUnitsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
