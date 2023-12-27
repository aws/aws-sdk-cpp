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
    AWS_PCACONNECTORAD_API ListDirectoryRegistrationsResult();
    AWS_PCACONNECTORAD_API ListDirectoryRegistrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORAD_API ListDirectoryRegistrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary information about each directory registration you have created.</p>
     */
    inline const Aws::Vector<DirectoryRegistrationSummary>& GetDirectoryRegistrations() const{ return m_directoryRegistrations; }

    /**
     * <p>Summary information about each directory registration you have created.</p>
     */
    inline void SetDirectoryRegistrations(const Aws::Vector<DirectoryRegistrationSummary>& value) { m_directoryRegistrations = value; }

    /**
     * <p>Summary information about each directory registration you have created.</p>
     */
    inline void SetDirectoryRegistrations(Aws::Vector<DirectoryRegistrationSummary>&& value) { m_directoryRegistrations = std::move(value); }

    /**
     * <p>Summary information about each directory registration you have created.</p>
     */
    inline ListDirectoryRegistrationsResult& WithDirectoryRegistrations(const Aws::Vector<DirectoryRegistrationSummary>& value) { SetDirectoryRegistrations(value); return *this;}

    /**
     * <p>Summary information about each directory registration you have created.</p>
     */
    inline ListDirectoryRegistrationsResult& WithDirectoryRegistrations(Aws::Vector<DirectoryRegistrationSummary>&& value) { SetDirectoryRegistrations(std::move(value)); return *this;}

    /**
     * <p>Summary information about each directory registration you have created.</p>
     */
    inline ListDirectoryRegistrationsResult& AddDirectoryRegistrations(const DirectoryRegistrationSummary& value) { m_directoryRegistrations.push_back(value); return *this; }

    /**
     * <p>Summary information about each directory registration you have created.</p>
     */
    inline ListDirectoryRegistrationsResult& AddDirectoryRegistrations(DirectoryRegistrationSummary&& value) { m_directoryRegistrations.push_back(std::move(value)); return *this; }


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
    inline ListDirectoryRegistrationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline ListDirectoryRegistrationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline ListDirectoryRegistrationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDirectoryRegistrationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDirectoryRegistrationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDirectoryRegistrationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DirectoryRegistrationSummary> m_directoryRegistrations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
