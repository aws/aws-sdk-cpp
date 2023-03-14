/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/ListSolFunctionPackageInfo.h>
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
  class ListSolFunctionPackagesResult
  {
  public:
    AWS_TNB_API ListSolFunctionPackagesResult();
    AWS_TNB_API ListSolFunctionPackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API ListSolFunctionPackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Function packages. A function package is a .zip file in CSAR (Cloud Service
     * Archive) format that contains a network function (an ETSI standard
     * telecommunication application) and function package descriptor that uses the
     * TOSCA standard to describe how the network functions should run on your
     * network.</p>
     */
    inline const Aws::Vector<ListSolFunctionPackageInfo>& GetFunctionPackages() const{ return m_functionPackages; }

    /**
     * <p>Function packages. A function package is a .zip file in CSAR (Cloud Service
     * Archive) format that contains a network function (an ETSI standard
     * telecommunication application) and function package descriptor that uses the
     * TOSCA standard to describe how the network functions should run on your
     * network.</p>
     */
    inline void SetFunctionPackages(const Aws::Vector<ListSolFunctionPackageInfo>& value) { m_functionPackages = value; }

    /**
     * <p>Function packages. A function package is a .zip file in CSAR (Cloud Service
     * Archive) format that contains a network function (an ETSI standard
     * telecommunication application) and function package descriptor that uses the
     * TOSCA standard to describe how the network functions should run on your
     * network.</p>
     */
    inline void SetFunctionPackages(Aws::Vector<ListSolFunctionPackageInfo>&& value) { m_functionPackages = std::move(value); }

    /**
     * <p>Function packages. A function package is a .zip file in CSAR (Cloud Service
     * Archive) format that contains a network function (an ETSI standard
     * telecommunication application) and function package descriptor that uses the
     * TOSCA standard to describe how the network functions should run on your
     * network.</p>
     */
    inline ListSolFunctionPackagesResult& WithFunctionPackages(const Aws::Vector<ListSolFunctionPackageInfo>& value) { SetFunctionPackages(value); return *this;}

    /**
     * <p>Function packages. A function package is a .zip file in CSAR (Cloud Service
     * Archive) format that contains a network function (an ETSI standard
     * telecommunication application) and function package descriptor that uses the
     * TOSCA standard to describe how the network functions should run on your
     * network.</p>
     */
    inline ListSolFunctionPackagesResult& WithFunctionPackages(Aws::Vector<ListSolFunctionPackageInfo>&& value) { SetFunctionPackages(std::move(value)); return *this;}

    /**
     * <p>Function packages. A function package is a .zip file in CSAR (Cloud Service
     * Archive) format that contains a network function (an ETSI standard
     * telecommunication application) and function package descriptor that uses the
     * TOSCA standard to describe how the network functions should run on your
     * network.</p>
     */
    inline ListSolFunctionPackagesResult& AddFunctionPackages(const ListSolFunctionPackageInfo& value) { m_functionPackages.push_back(value); return *this; }

    /**
     * <p>Function packages. A function package is a .zip file in CSAR (Cloud Service
     * Archive) format that contains a network function (an ETSI standard
     * telecommunication application) and function package descriptor that uses the
     * TOSCA standard to describe how the network functions should run on your
     * network.</p>
     */
    inline ListSolFunctionPackagesResult& AddFunctionPackages(ListSolFunctionPackageInfo&& value) { m_functionPackages.push_back(std::move(value)); return *this; }


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
    inline ListSolFunctionPackagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListSolFunctionPackagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListSolFunctionPackagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSolFunctionPackagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSolFunctionPackagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSolFunctionPackagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ListSolFunctionPackageInfo> m_functionPackages;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
