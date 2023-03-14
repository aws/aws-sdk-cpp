/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/ListSolNetworkPackageInfo.h>
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
namespace tnb
{
namespace Model
{
  class ListSolNetworkPackagesResult
  {
  public:
    AWS_TNB_API ListSolNetworkPackagesResult();
    AWS_TNB_API ListSolNetworkPackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API ListSolNetworkPackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Network packages. A network package is a .zip file in CSAR (Cloud Service
     * Archive) format defines the function packages you want to deploy and the Amazon
     * Web Services infrastructure you want to deploy them on.</p>
     */
    inline const Aws::Vector<ListSolNetworkPackageInfo>& GetNetworkPackages() const{ return m_networkPackages; }

    /**
     * <p>Network packages. A network package is a .zip file in CSAR (Cloud Service
     * Archive) format defines the function packages you want to deploy and the Amazon
     * Web Services infrastructure you want to deploy them on.</p>
     */
    inline void SetNetworkPackages(const Aws::Vector<ListSolNetworkPackageInfo>& value) { m_networkPackages = value; }

    /**
     * <p>Network packages. A network package is a .zip file in CSAR (Cloud Service
     * Archive) format defines the function packages you want to deploy and the Amazon
     * Web Services infrastructure you want to deploy them on.</p>
     */
    inline void SetNetworkPackages(Aws::Vector<ListSolNetworkPackageInfo>&& value) { m_networkPackages = std::move(value); }

    /**
     * <p>Network packages. A network package is a .zip file in CSAR (Cloud Service
     * Archive) format defines the function packages you want to deploy and the Amazon
     * Web Services infrastructure you want to deploy them on.</p>
     */
    inline ListSolNetworkPackagesResult& WithNetworkPackages(const Aws::Vector<ListSolNetworkPackageInfo>& value) { SetNetworkPackages(value); return *this;}

    /**
     * <p>Network packages. A network package is a .zip file in CSAR (Cloud Service
     * Archive) format defines the function packages you want to deploy and the Amazon
     * Web Services infrastructure you want to deploy them on.</p>
     */
    inline ListSolNetworkPackagesResult& WithNetworkPackages(Aws::Vector<ListSolNetworkPackageInfo>&& value) { SetNetworkPackages(std::move(value)); return *this;}

    /**
     * <p>Network packages. A network package is a .zip file in CSAR (Cloud Service
     * Archive) format defines the function packages you want to deploy and the Amazon
     * Web Services infrastructure you want to deploy them on.</p>
     */
    inline ListSolNetworkPackagesResult& AddNetworkPackages(const ListSolNetworkPackageInfo& value) { m_networkPackages.push_back(value); return *this; }

    /**
     * <p>Network packages. A network package is a .zip file in CSAR (Cloud Service
     * Archive) format defines the function packages you want to deploy and the Amazon
     * Web Services infrastructure you want to deploy them on.</p>
     */
    inline ListSolNetworkPackagesResult& AddNetworkPackages(ListSolNetworkPackageInfo&& value) { m_networkPackages.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListSolNetworkPackagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListSolNetworkPackagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListSolNetworkPackagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSolNetworkPackagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSolNetworkPackagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSolNetworkPackagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ListSolNetworkPackageInfo> m_networkPackages;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
