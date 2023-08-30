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
    AWS_PCACONNECTORAD_API GetTemplateGroupAccessControlEntryResult();
    AWS_PCACONNECTORAD_API GetTemplateGroupAccessControlEntryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORAD_API GetTemplateGroupAccessControlEntryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An access control entry allows or denies an Active Directory group from
     * enrolling and/or autoenrolling with a template.</p>
     */
    inline const AccessControlEntry& GetAccessControlEntry() const{ return m_accessControlEntry; }

    /**
     * <p>An access control entry allows or denies an Active Directory group from
     * enrolling and/or autoenrolling with a template.</p>
     */
    inline void SetAccessControlEntry(const AccessControlEntry& value) { m_accessControlEntry = value; }

    /**
     * <p>An access control entry allows or denies an Active Directory group from
     * enrolling and/or autoenrolling with a template.</p>
     */
    inline void SetAccessControlEntry(AccessControlEntry&& value) { m_accessControlEntry = std::move(value); }

    /**
     * <p>An access control entry allows or denies an Active Directory group from
     * enrolling and/or autoenrolling with a template.</p>
     */
    inline GetTemplateGroupAccessControlEntryResult& WithAccessControlEntry(const AccessControlEntry& value) { SetAccessControlEntry(value); return *this;}

    /**
     * <p>An access control entry allows or denies an Active Directory group from
     * enrolling and/or autoenrolling with a template.</p>
     */
    inline GetTemplateGroupAccessControlEntryResult& WithAccessControlEntry(AccessControlEntry&& value) { SetAccessControlEntry(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTemplateGroupAccessControlEntryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTemplateGroupAccessControlEntryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTemplateGroupAccessControlEntryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AccessControlEntry m_accessControlEntry;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
