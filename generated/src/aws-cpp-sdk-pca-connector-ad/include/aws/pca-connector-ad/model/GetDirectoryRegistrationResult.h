/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/DirectoryRegistration.h>
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
  class GetDirectoryRegistrationResult
  {
  public:
    AWS_PCACONNECTORAD_API GetDirectoryRegistrationResult();
    AWS_PCACONNECTORAD_API GetDirectoryRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORAD_API GetDirectoryRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The directory registration represents the authorization of the connector
     * service with a directory.</p>
     */
    inline const DirectoryRegistration& GetDirectoryRegistration() const{ return m_directoryRegistration; }

    /**
     * <p>The directory registration represents the authorization of the connector
     * service with a directory.</p>
     */
    inline void SetDirectoryRegistration(const DirectoryRegistration& value) { m_directoryRegistration = value; }

    /**
     * <p>The directory registration represents the authorization of the connector
     * service with a directory.</p>
     */
    inline void SetDirectoryRegistration(DirectoryRegistration&& value) { m_directoryRegistration = std::move(value); }

    /**
     * <p>The directory registration represents the authorization of the connector
     * service with a directory.</p>
     */
    inline GetDirectoryRegistrationResult& WithDirectoryRegistration(const DirectoryRegistration& value) { SetDirectoryRegistration(value); return *this;}

    /**
     * <p>The directory registration represents the authorization of the connector
     * service with a directory.</p>
     */
    inline GetDirectoryRegistrationResult& WithDirectoryRegistration(DirectoryRegistration&& value) { SetDirectoryRegistration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDirectoryRegistrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDirectoryRegistrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDirectoryRegistrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DirectoryRegistration m_directoryRegistration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
