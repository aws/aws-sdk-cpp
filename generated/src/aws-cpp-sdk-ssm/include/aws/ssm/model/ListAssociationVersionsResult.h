/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/AssociationVersionInfo.h>
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
namespace SSM
{
namespace Model
{
  class ListAssociationVersionsResult
  {
  public:
    AWS_SSM_API ListAssociationVersionsResult() = default;
    AWS_SSM_API ListAssociationVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListAssociationVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about all versions of the association for the specified
     * association ID.</p>
     */
    inline const Aws::Vector<AssociationVersionInfo>& GetAssociationVersions() const { return m_associationVersions; }
    template<typename AssociationVersionsT = Aws::Vector<AssociationVersionInfo>>
    void SetAssociationVersions(AssociationVersionsT&& value) { m_associationVersionsHasBeenSet = true; m_associationVersions = std::forward<AssociationVersionsT>(value); }
    template<typename AssociationVersionsT = Aws::Vector<AssociationVersionInfo>>
    ListAssociationVersionsResult& WithAssociationVersions(AssociationVersionsT&& value) { SetAssociationVersions(std::forward<AssociationVersionsT>(value)); return *this;}
    template<typename AssociationVersionsT = AssociationVersionInfo>
    ListAssociationVersionsResult& AddAssociationVersions(AssociationVersionsT&& value) { m_associationVersionsHasBeenSet = true; m_associationVersions.emplace_back(std::forward<AssociationVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssociationVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssociationVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssociationVersionInfo> m_associationVersions;
    bool m_associationVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
