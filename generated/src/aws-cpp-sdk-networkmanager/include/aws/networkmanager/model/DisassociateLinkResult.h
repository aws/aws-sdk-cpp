/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/LinkAssociation.h>
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
namespace NetworkManager
{
namespace Model
{
  class DisassociateLinkResult
  {
  public:
    AWS_NETWORKMANAGER_API DisassociateLinkResult() = default;
    AWS_NETWORKMANAGER_API DisassociateLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API DisassociateLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the link association.</p>
     */
    inline const LinkAssociation& GetLinkAssociation() const { return m_linkAssociation; }
    template<typename LinkAssociationT = LinkAssociation>
    void SetLinkAssociation(LinkAssociationT&& value) { m_linkAssociationHasBeenSet = true; m_linkAssociation = std::forward<LinkAssociationT>(value); }
    template<typename LinkAssociationT = LinkAssociation>
    DisassociateLinkResult& WithLinkAssociation(LinkAssociationT&& value) { SetLinkAssociation(std::forward<LinkAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisassociateLinkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LinkAssociation m_linkAssociation;
    bool m_linkAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
