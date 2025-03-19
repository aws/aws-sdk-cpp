/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pca-connector-ad/model/DirectoryRegistrationSummary.h>
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
  class ListDirectoryRegistrationsResult
  {
  public:
    AWS_PCACONNECTORAD_API ListDirectoryRegistrationsResult() = default;
    AWS_PCACONNECTORAD_API ListDirectoryRegistrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORAD_API ListDirectoryRegistrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about each directory registration you have created.</p>
     */
    inline const Aws::Vector<DirectoryRegistrationSummary>& GetDirectoryRegistrations() const { return m_directoryRegistrations; }
    template<typename DirectoryRegistrationsT = Aws::Vector<DirectoryRegistrationSummary>>
    void SetDirectoryRegistrations(DirectoryRegistrationsT&& value) { m_directoryRegistrationsHasBeenSet = true; m_directoryRegistrations = std::forward<DirectoryRegistrationsT>(value); }
    template<typename DirectoryRegistrationsT = Aws::Vector<DirectoryRegistrationSummary>>
    ListDirectoryRegistrationsResult& WithDirectoryRegistrations(DirectoryRegistrationsT&& value) { SetDirectoryRegistrations(std::forward<DirectoryRegistrationsT>(value)); return *this;}
    template<typename DirectoryRegistrationsT = DirectoryRegistrationSummary>
    ListDirectoryRegistrationsResult& AddDirectoryRegistrations(DirectoryRegistrationsT&& value) { m_directoryRegistrationsHasBeenSet = true; m_directoryRegistrations.emplace_back(std::forward<DirectoryRegistrationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDirectoryRegistrationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDirectoryRegistrationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DirectoryRegistrationSummary> m_directoryRegistrations;
    bool m_directoryRegistrationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
