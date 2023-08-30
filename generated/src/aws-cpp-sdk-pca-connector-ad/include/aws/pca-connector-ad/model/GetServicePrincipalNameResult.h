/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/ServicePrincipalName.h>
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
namespace PcaConnectorAd
{
namespace Model
{
  class GetServicePrincipalNameResult
  {
  public:
    AWS_PCACONNECTORAD_API GetServicePrincipalNameResult();
    AWS_PCACONNECTORAD_API GetServicePrincipalNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORAD_API GetServicePrincipalNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The service principal name that the connector uses to authenticate with
     * Active Directory.</p>
     */
    inline const ServicePrincipalName& GetServicePrincipalName() const{ return m_servicePrincipalName; }

    /**
     * <p>The service principal name that the connector uses to authenticate with
     * Active Directory.</p>
     */
    inline void SetServicePrincipalName(const ServicePrincipalName& value) { m_servicePrincipalName = value; }

    /**
     * <p>The service principal name that the connector uses to authenticate with
     * Active Directory.</p>
     */
    inline void SetServicePrincipalName(ServicePrincipalName&& value) { m_servicePrincipalName = std::move(value); }

    /**
     * <p>The service principal name that the connector uses to authenticate with
     * Active Directory.</p>
     */
    inline GetServicePrincipalNameResult& WithServicePrincipalName(const ServicePrincipalName& value) { SetServicePrincipalName(value); return *this;}

    /**
     * <p>The service principal name that the connector uses to authenticate with
     * Active Directory.</p>
     */
    inline GetServicePrincipalNameResult& WithServicePrincipalName(ServicePrincipalName&& value) { SetServicePrincipalName(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetServicePrincipalNameResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetServicePrincipalNameResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetServicePrincipalNameResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ServicePrincipalName m_servicePrincipalName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
