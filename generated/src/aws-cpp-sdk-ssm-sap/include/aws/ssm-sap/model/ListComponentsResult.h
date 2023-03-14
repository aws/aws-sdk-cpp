/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/ComponentSummary.h>
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
namespace SsmSap
{
namespace Model
{
  class ListComponentsResult
  {
  public:
    AWS_SSMSAP_API ListComponentsResult();
    AWS_SSMSAP_API ListComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API ListComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of components registered with AWS System Manager for SAP.</p>
     */
    inline const Aws::Vector<ComponentSummary>& GetComponents() const{ return m_components; }

    /**
     * <p>List of components registered with AWS System Manager for SAP.</p>
     */
    inline void SetComponents(const Aws::Vector<ComponentSummary>& value) { m_components = value; }

    /**
     * <p>List of components registered with AWS System Manager for SAP.</p>
     */
    inline void SetComponents(Aws::Vector<ComponentSummary>&& value) { m_components = std::move(value); }

    /**
     * <p>List of components registered with AWS System Manager for SAP.</p>
     */
    inline ListComponentsResult& WithComponents(const Aws::Vector<ComponentSummary>& value) { SetComponents(value); return *this;}

    /**
     * <p>List of components registered with AWS System Manager for SAP.</p>
     */
    inline ListComponentsResult& WithComponents(Aws::Vector<ComponentSummary>&& value) { SetComponents(std::move(value)); return *this;}

    /**
     * <p>List of components registered with AWS System Manager for SAP.</p>
     */
    inline ListComponentsResult& AddComponents(const ComponentSummary& value) { m_components.push_back(value); return *this; }

    /**
     * <p>List of components registered with AWS System Manager for SAP.</p>
     */
    inline ListComponentsResult& AddComponents(ComponentSummary&& value) { m_components.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListComponentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListComponentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListComponentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListComponentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListComponentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListComponentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ComponentSummary> m_components;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
