/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pca-connector-ad/model/AccessControlEntrySummary.h>
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
  class ListTemplateGroupAccessControlEntriesResult
  {
  public:
    AWS_PCACONNECTORAD_API ListTemplateGroupAccessControlEntriesResult() = default;
    AWS_PCACONNECTORAD_API ListTemplateGroupAccessControlEntriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORAD_API ListTemplateGroupAccessControlEntriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An access control entry grants or denies permission to an Active Directory
     * group to enroll certificates for a template.</p>
     */
    inline const Aws::Vector<AccessControlEntrySummary>& GetAccessControlEntries() const { return m_accessControlEntries; }
    template<typename AccessControlEntriesT = Aws::Vector<AccessControlEntrySummary>>
    void SetAccessControlEntries(AccessControlEntriesT&& value) { m_accessControlEntriesHasBeenSet = true; m_accessControlEntries = std::forward<AccessControlEntriesT>(value); }
    template<typename AccessControlEntriesT = Aws::Vector<AccessControlEntrySummary>>
    ListTemplateGroupAccessControlEntriesResult& WithAccessControlEntries(AccessControlEntriesT&& value) { SetAccessControlEntries(std::forward<AccessControlEntriesT>(value)); return *this;}
    template<typename AccessControlEntriesT = AccessControlEntrySummary>
    ListTemplateGroupAccessControlEntriesResult& AddAccessControlEntries(AccessControlEntriesT&& value) { m_accessControlEntriesHasBeenSet = true; m_accessControlEntries.emplace_back(std::forward<AccessControlEntriesT>(value)); return *this; }
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
    ListTemplateGroupAccessControlEntriesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTemplateGroupAccessControlEntriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccessControlEntrySummary> m_accessControlEntries;
    bool m_accessControlEntriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
