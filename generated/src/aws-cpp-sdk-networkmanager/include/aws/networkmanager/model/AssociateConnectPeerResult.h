/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ConnectPeerAssociation.h>
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
  class AssociateConnectPeerResult
  {
  public:
    AWS_NETWORKMANAGER_API AssociateConnectPeerResult() = default;
    AWS_NETWORKMANAGER_API AssociateConnectPeerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API AssociateConnectPeerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response to the Connect peer request.</p>
     */
    inline const ConnectPeerAssociation& GetConnectPeerAssociation() const { return m_connectPeerAssociation; }
    template<typename ConnectPeerAssociationT = ConnectPeerAssociation>
    void SetConnectPeerAssociation(ConnectPeerAssociationT&& value) { m_connectPeerAssociationHasBeenSet = true; m_connectPeerAssociation = std::forward<ConnectPeerAssociationT>(value); }
    template<typename ConnectPeerAssociationT = ConnectPeerAssociation>
    AssociateConnectPeerResult& WithConnectPeerAssociation(ConnectPeerAssociationT&& value) { SetConnectPeerAssociation(std::forward<ConnectPeerAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateConnectPeerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConnectPeerAssociation m_connectPeerAssociation;
    bool m_connectPeerAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
