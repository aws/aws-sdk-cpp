/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/InboundConnection.h>
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
    AWS_OPENSEARCHSERVICE_API AcceptInboundConnectionResult();
    AWS_OPENSEARCHSERVICE_API AcceptInboundConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API AcceptInboundConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the accepted inbound connection.</p>
     */
    inline const InboundConnection& GetConnection() const{ return m_connection; }

    /**
     * <p>Information about the accepted inbound connection.</p>
     */
    inline void SetConnection(const InboundConnection& value) { m_connection = value; }

    /**
     * <p>Information about the accepted inbound connection.</p>
     */
    inline void SetConnection(InboundConnection&& value) { m_connection = std::move(value); }

    /**
     * <p>Information about the accepted inbound connection.</p>
     */
    inline AcceptInboundConnectionResult& WithConnection(const InboundConnection& value) { SetConnection(value); return *this;}

    /**
     * <p>Information about the accepted inbound connection.</p>
     */
    inline AcceptInboundConnectionResult& WithConnection(InboundConnection&& value) { SetConnection(std::move(value)); return *this;}

  private:

    InboundConnection m_connection;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
