/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/LinkAssociation.h>
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
namespace NetworkManager
{
namespace Model
{
  class GetLinkAssociationsResult
  {
  public:
    AWS_NETWORKMANAGER_API GetLinkAssociationsResult() = default;
    AWS_NETWORKMANAGER_API GetLinkAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetLinkAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The link associations.</p>
     */
    inline const Aws::Vector<LinkAssociation>& GetLinkAssociations() const { return m_linkAssociations; }
    template<typename LinkAssociationsT = Aws::Vector<LinkAssociation>>
    void SetLinkAssociations(LinkAssociationsT&& value) { m_linkAssociationsHasBeenSet = true; m_linkAssociations = std::forward<LinkAssociationsT>(value); }
    template<typename LinkAssociationsT = Aws::Vector<LinkAssociation>>
    GetLinkAssociationsResult& WithLinkAssociations(LinkAssociationsT&& value) { SetLinkAssociations(std::forward<LinkAssociationsT>(value)); return *this;}
    template<typename LinkAssociationsT = LinkAssociation>
    GetLinkAssociationsResult& AddLinkAssociations(LinkAssociationsT&& value) { m_linkAssociationsHasBeenSet = true; m_linkAssociations.emplace_back(std::forward<LinkAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetLinkAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLinkAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LinkAssociation> m_linkAssociations;
    bool m_linkAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
