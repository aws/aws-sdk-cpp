/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pca-connector-ad/model/ConnectorSummary.h>
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
namespace PcaConnectorAd
{
namespace Model
{
  class ListConnectorsResult
  {
  public:
    AWS_PCACONNECTORAD_API ListConnectorsResult();
    AWS_PCACONNECTORAD_API ListConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORAD_API ListConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary information about each connector you have created.</p>
     */
    inline const Aws::Vector<ConnectorSummary>& GetConnectors() const{ return m_connectors; }

    /**
     * <p>Summary information about each connector you have created.</p>
     */
    inline void SetConnectors(const Aws::Vector<ConnectorSummary>& value) { m_connectors = value; }

    /**
     * <p>Summary information about each connector you have created.</p>
     */
    inline void SetConnectors(Aws::Vector<ConnectorSummary>&& value) { m_connectors = std::move(value); }

    /**
     * <p>Summary information about each connector you have created.</p>
     */
    inline ListConnectorsResult& WithConnectors(const Aws::Vector<ConnectorSummary>& value) { SetConnectors(value); return *this;}

    /**
     * <p>Summary information about each connector you have created.</p>
     */
    inline ListConnectorsResult& WithConnectors(Aws::Vector<ConnectorSummary>&& value) { SetConnectors(std::move(value)); return *this;}

    /**
     * <p>Summary information about each connector you have created.</p>
     */
    inline ListConnectorsResult& AddConnectors(const ConnectorSummary& value) { m_connectors.push_back(value); return *this; }

    /**
     * <p>Summary information about each connector you have created.</p>
     */
    inline ListConnectorsResult& AddConnectors(ConnectorSummary&& value) { m_connectors.push_back(std::move(value)); return *this; }


    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the NextToken
     * parameter from the response you just received.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the NextToken
     * parameter from the response you just received.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the NextToken
     * parameter from the response you just received.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the NextToken
     * parameter from the response you just received.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the NextToken
     * parameter from the response you just received.</p>
     */
    inline ListConnectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the NextToken
     * parameter from the response you just received.</p>
     */
    inline ListConnectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the NextToken
     * parameter from the response you just received.</p>
     */
    inline ListConnectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListConnectorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListConnectorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListConnectorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ConnectorSummary> m_connectors;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
