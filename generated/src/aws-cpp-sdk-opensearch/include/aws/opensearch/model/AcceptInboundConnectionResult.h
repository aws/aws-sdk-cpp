/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/InboundConnection.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>Contains details about the accepted inbound connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AcceptInboundConnectionResponse">AWS
   * API Reference</a></p>
   */
  class AcceptInboundConnectionResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API AcceptInboundConnectionResult() = default;
    AWS_OPENSEARCHSERVICE_API AcceptInboundConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API AcceptInboundConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the accepted inbound connection.</p>
     */
    inline const InboundConnection& GetConnection() const { return m_connection; }
    template<typename ConnectionT = InboundConnection>
    void SetConnection(ConnectionT&& value) { m_connectionHasBeenSet = true; m_connection = std::forward<ConnectionT>(value); }
    template<typename ConnectionT = InboundConnection>
    AcceptInboundConnectionResult& WithConnection(ConnectionT&& value) { SetConnection(std::forward<ConnectionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AcceptInboundConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InboundConnection m_connection;
    bool m_connectionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
