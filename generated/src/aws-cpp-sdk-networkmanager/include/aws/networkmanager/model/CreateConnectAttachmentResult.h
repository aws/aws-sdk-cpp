/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ConnectAttachment.h>
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
  class CreateConnectAttachmentResult
  {
  public:
    AWS_NETWORKMANAGER_API CreateConnectAttachmentResult() = default;
    AWS_NETWORKMANAGER_API CreateConnectAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API CreateConnectAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response to a Connect attachment request.</p>
     */
    inline const ConnectAttachment& GetConnectAttachment() const { return m_connectAttachment; }
    template<typename ConnectAttachmentT = ConnectAttachment>
    void SetConnectAttachment(ConnectAttachmentT&& value) { m_connectAttachmentHasBeenSet = true; m_connectAttachment = std::forward<ConnectAttachmentT>(value); }
    template<typename ConnectAttachmentT = ConnectAttachment>
    CreateConnectAttachmentResult& WithConnectAttachment(ConnectAttachmentT&& value) { SetConnectAttachment(std::forward<ConnectAttachmentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateConnectAttachmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConnectAttachment m_connectAttachment;
    bool m_connectAttachmentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
