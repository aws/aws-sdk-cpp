/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pca-connector-scep/model/ConnectorSummary.h>
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
namespace PcaConnectorScep
{
namespace Model
{
  class ListConnectorsResult
  {
  public:
    AWS_PCACONNECTORSCEP_API ListConnectorsResult();
    AWS_PCACONNECTORSCEP_API ListConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORSCEP_API ListConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The connectors belonging to your Amazon Web Services account.</p>
     */
    inline const Aws::Vector<ConnectorSummary>& GetConnectors() const{ return m_connectors; }
    inline void SetConnectors(const Aws::Vector<ConnectorSummary>& value) { m_connectors = value; }
    inline void SetConnectors(Aws::Vector<ConnectorSummary>&& value) { m_connectors = std::move(value); }
    inline ListConnectorsResult& WithConnectors(const Aws::Vector<ConnectorSummary>& value) { SetConnectors(value); return *this;}
    inline ListConnectorsResult& WithConnectors(Aws::Vector<ConnectorSummary>&& value) { SetConnectors(std::move(value)); return *this;}
    inline ListConnectorsResult& AddConnectors(const ConnectorSummary& value) { m_connectors.push_back(value); return *this; }
    inline ListConnectorsResult& AddConnectors(ConnectorSummary&& value) { m_connectors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Connector for SCEP returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListConnectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListConnectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListConnectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListConnectorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListConnectorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListConnectorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConnectorSummary> m_connectors;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
