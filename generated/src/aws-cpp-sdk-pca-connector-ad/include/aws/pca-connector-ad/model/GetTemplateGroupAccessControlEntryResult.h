/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/AccessControlEntry.h>
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
  class GetTemplateGroupAccessControlEntryResult
  {
  public:
    AWS_PCACONNECTORAD_API GetTemplateGroupAccessControlEntryResult() = default;
    AWS_PCACONNECTORAD_API GetTemplateGroupAccessControlEntryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORAD_API GetTemplateGroupAccessControlEntryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An access control entry allows or denies an Active Directory group from
     * enrolling and/or autoenrolling with a template.</p>
     */
    inline const AccessControlEntry& GetAccessControlEntry() const { return m_accessControlEntry; }
    template<typename AccessControlEntryT = AccessControlEntry>
    void SetAccessControlEntry(AccessControlEntryT&& value) { m_accessControlEntryHasBeenSet = true; m_accessControlEntry = std::forward<AccessControlEntryT>(value); }
    template<typename AccessControlEntryT = AccessControlEntry>
    GetTemplateGroupAccessControlEntryResult& WithAccessControlEntry(AccessControlEntryT&& value) { SetAccessControlEntry(std::forward<AccessControlEntryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTemplateGroupAccessControlEntryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AccessControlEntry m_accessControlEntry;
    bool m_accessControlEntryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
