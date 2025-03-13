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
    AWS_PCACONNECTORAD_API GetDirectoryRegistrationResult() = default;
    AWS_PCACONNECTORAD_API GetDirectoryRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORAD_API GetDirectoryRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The directory registration represents the authorization of the connector
     * service with a directory.</p>
     */
    inline const DirectoryRegistration& GetDirectoryRegistration() const { return m_directoryRegistration; }
    template<typename DirectoryRegistrationT = DirectoryRegistration>
    void SetDirectoryRegistration(DirectoryRegistrationT&& value) { m_directoryRegistrationHasBeenSet = true; m_directoryRegistration = std::forward<DirectoryRegistrationT>(value); }
    template<typename DirectoryRegistrationT = DirectoryRegistration>
    GetDirectoryRegistrationResult& WithDirectoryRegistration(DirectoryRegistrationT&& value) { SetDirectoryRegistration(std::forward<DirectoryRegistrationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDirectoryRegistrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DirectoryRegistration m_directoryRegistration;
    bool m_directoryRegistrationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
