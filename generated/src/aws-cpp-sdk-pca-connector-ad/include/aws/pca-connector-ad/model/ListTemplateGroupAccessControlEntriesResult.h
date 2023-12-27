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
    AWS_PCACONNECTORAD_API ListTemplateGroupAccessControlEntriesResult();
    AWS_PCACONNECTORAD_API ListTemplateGroupAccessControlEntriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORAD_API ListTemplateGroupAccessControlEntriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An access control entry grants or denies permission to an Active Directory
     * group to enroll certificates for a template.</p>
     */
    inline const Aws::Vector<AccessControlEntrySummary>& GetAccessControlEntries() const{ return m_accessControlEntries; }

    /**
     * <p>An access control entry grants or denies permission to an Active Directory
     * group to enroll certificates for a template.</p>
     */
    inline void SetAccessControlEntries(const Aws::Vector<AccessControlEntrySummary>& value) { m_accessControlEntries = value; }

    /**
     * <p>An access control entry grants or denies permission to an Active Directory
     * group to enroll certificates for a template.</p>
     */
    inline void SetAccessControlEntries(Aws::Vector<AccessControlEntrySummary>&& value) { m_accessControlEntries = std::move(value); }

    /**
     * <p>An access control entry grants or denies permission to an Active Directory
     * group to enroll certificates for a template.</p>
     */
    inline ListTemplateGroupAccessControlEntriesResult& WithAccessControlEntries(const Aws::Vector<AccessControlEntrySummary>& value) { SetAccessControlEntries(value); return *this;}

    /**
     * <p>An access control entry grants or denies permission to an Active Directory
     * group to enroll certificates for a template.</p>
     */
    inline ListTemplateGroupAccessControlEntriesResult& WithAccessControlEntries(Aws::Vector<AccessControlEntrySummary>&& value) { SetAccessControlEntries(std::move(value)); return *this;}

    /**
     * <p>An access control entry grants or denies permission to an Active Directory
     * group to enroll certificates for a template.</p>
     */
    inline ListTemplateGroupAccessControlEntriesResult& AddAccessControlEntries(const AccessControlEntrySummary& value) { m_accessControlEntries.push_back(value); return *this; }

    /**
     * <p>An access control entry grants or denies permission to an Active Directory
     * group to enroll certificates for a template.</p>
     */
    inline ListTemplateGroupAccessControlEntriesResult& AddAccessControlEntries(AccessControlEntrySummary&& value) { m_accessControlEntries.push_back(std::move(value)); return *this; }


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
    inline ListTemplateGroupAccessControlEntriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline ListTemplateGroupAccessControlEntriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline ListTemplateGroupAccessControlEntriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTemplateGroupAccessControlEntriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTemplateGroupAccessControlEntriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTemplateGroupAccessControlEntriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AccessControlEntrySummary> m_accessControlEntries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
