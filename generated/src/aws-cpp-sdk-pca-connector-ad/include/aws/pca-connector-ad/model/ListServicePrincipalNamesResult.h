/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pca-connector-ad/model/ServicePrincipalNameSummary.h>
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
  class ListServicePrincipalNamesResult
  {
  public:
    AWS_PCACONNECTORAD_API ListServicePrincipalNamesResult();
    AWS_PCACONNECTORAD_API ListServicePrincipalNamesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORAD_API ListServicePrincipalNamesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline ListServicePrincipalNamesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline ListServicePrincipalNamesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline ListServicePrincipalNamesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The service principal name, if any, that the connector uses to authenticate
     * with Active Directory.</p>
     */
    inline const Aws::Vector<ServicePrincipalNameSummary>& GetServicePrincipalNames() const{ return m_servicePrincipalNames; }

    /**
     * <p>The service principal name, if any, that the connector uses to authenticate
     * with Active Directory.</p>
     */
    inline void SetServicePrincipalNames(const Aws::Vector<ServicePrincipalNameSummary>& value) { m_servicePrincipalNames = value; }

    /**
     * <p>The service principal name, if any, that the connector uses to authenticate
     * with Active Directory.</p>
     */
    inline void SetServicePrincipalNames(Aws::Vector<ServicePrincipalNameSummary>&& value) { m_servicePrincipalNames = std::move(value); }

    /**
     * <p>The service principal name, if any, that the connector uses to authenticate
     * with Active Directory.</p>
     */
    inline ListServicePrincipalNamesResult& WithServicePrincipalNames(const Aws::Vector<ServicePrincipalNameSummary>& value) { SetServicePrincipalNames(value); return *this;}

    /**
     * <p>The service principal name, if any, that the connector uses to authenticate
     * with Active Directory.</p>
     */
    inline ListServicePrincipalNamesResult& WithServicePrincipalNames(Aws::Vector<ServicePrincipalNameSummary>&& value) { SetServicePrincipalNames(std::move(value)); return *this;}

    /**
     * <p>The service principal name, if any, that the connector uses to authenticate
     * with Active Directory.</p>
     */
    inline ListServicePrincipalNamesResult& AddServicePrincipalNames(const ServicePrincipalNameSummary& value) { m_servicePrincipalNames.push_back(value); return *this; }

    /**
     * <p>The service principal name, if any, that the connector uses to authenticate
     * with Active Directory.</p>
     */
    inline ListServicePrincipalNamesResult& AddServicePrincipalNames(ServicePrincipalNameSummary&& value) { m_servicePrincipalNames.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListServicePrincipalNamesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListServicePrincipalNamesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListServicePrincipalNamesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ServicePrincipalNameSummary> m_servicePrincipalNames;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
