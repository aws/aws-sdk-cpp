/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/InboundConnectionStatusCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The status of an inbound cross-cluster connection for OpenSearch
   * Service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/InboundConnectionStatus">AWS
   * API Reference</a></p>
   */
  class InboundConnectionStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API InboundConnectionStatus() = default;
    AWS_OPENSEARCHSERVICE_API InboundConnectionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API InboundConnectionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status code for the connection. Can be one of the following:</p> <ul>
     * <li> <p> <b>PENDING_ACCEPTANCE</b> - Inbound connection is not yet accepted by
     * the remote domain owner.</p> </li> <li> <p> <b>APPROVED</b>: Inbound connection
     * is pending acceptance by the remote domain owner.</p> </li> <li> <p>
     * <b>PROVISIONING</b>: Inbound connection is being provisioned.</p> </li> <li> <p>
     * <b>ACTIVE</b>: Inbound connection is active and ready to use.</p> </li> <li> <p>
     * <b>REJECTING</b>: Inbound connection rejection is in process.</p> </li> <li> <p>
     * <b>REJECTED</b>: Inbound connection is rejected.</p> </li> <li> <p>
     * <b>DELETING</b>: Inbound connection deletion is in progress.</p> </li> <li> <p>
     * <b>DELETED</b>: Inbound connection is deleted and can no longer be used.</p>
     * </li> </ul>
     */
    inline InboundConnectionStatusCode GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(InboundConnectionStatusCode value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline InboundConnectionStatus& WithStatusCode(InboundConnectionStatusCode value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the connection.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    InboundConnectionStatus& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    InboundConnectionStatusCode m_statusCode{InboundConnectionStatusCode::NOT_SET};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
