/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/OutboundConnection.h>
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
   * <p>Details about the deleted outbound connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeleteOutboundConnectionResponse">AWS
   * API Reference</a></p>
   */
  class DeleteOutboundConnectionResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DeleteOutboundConnectionResult();
    AWS_OPENSEARCHSERVICE_API DeleteOutboundConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DeleteOutboundConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The deleted inbound connection.</p>
     */
    inline const OutboundConnection& GetConnection() const{ return m_connection; }

    /**
     * <p>The deleted inbound connection.</p>
     */
    inline void SetConnection(const OutboundConnection& value) { m_connection = value; }

    /**
     * <p>The deleted inbound connection.</p>
     */
    inline void SetConnection(OutboundConnection&& value) { m_connection = std::move(value); }

    /**
     * <p>The deleted inbound connection.</p>
     */
    inline DeleteOutboundConnectionResult& WithConnection(const OutboundConnection& value) { SetConnection(value); return *this;}

    /**
     * <p>The deleted inbound connection.</p>
     */
    inline DeleteOutboundConnectionResult& WithConnection(OutboundConnection&& value) { SetConnection(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteOutboundConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteOutboundConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteOutboundConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    OutboundConnection m_connection;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
