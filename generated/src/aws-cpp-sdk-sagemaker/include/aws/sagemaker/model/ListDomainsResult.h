/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DomainDetails.h>
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
namespace SageMaker
{
namespace Model
{
  class ListDomainsResult
  {
  public:
    AWS_SAGEMAKER_API ListDomainsResult();
    AWS_SAGEMAKER_API ListDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of domains.</p>
     */
    inline const Aws::Vector<DomainDetails>& GetDomains() const{ return m_domains; }

    /**
     * <p>The list of domains.</p>
     */
    inline void SetDomains(const Aws::Vector<DomainDetails>& value) { m_domains = value; }

    /**
     * <p>The list of domains.</p>
     */
    inline void SetDomains(Aws::Vector<DomainDetails>&& value) { m_domains = std::move(value); }

    /**
     * <p>The list of domains.</p>
     */
    inline ListDomainsResult& WithDomains(const Aws::Vector<DomainDetails>& value) { SetDomains(value); return *this;}

    /**
     * <p>The list of domains.</p>
     */
    inline ListDomainsResult& WithDomains(Aws::Vector<DomainDetails>&& value) { SetDomains(std::move(value)); return *this;}

    /**
     * <p>The list of domains.</p>
     */
    inline ListDomainsResult& AddDomains(const DomainDetails& value) { m_domains.push_back(value); return *this; }

    /**
     * <p>The list of domains.</p>
     */
    inline ListDomainsResult& AddDomains(DomainDetails&& value) { m_domains.push_back(std::move(value)); return *this; }


    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline ListDomainsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline ListDomainsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline ListDomainsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DomainDetails> m_domains;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
