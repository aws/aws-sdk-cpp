/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/ResourcePolicy.h>
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
namespace XRay
{
namespace Model
{
  class ListResourcePoliciesResult
  {
  public:
    AWS_XRAY_API ListResourcePoliciesResult();
    AWS_XRAY_API ListResourcePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API ListResourcePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of resource policies in the target Amazon Web Services account.</p>
     */
    inline const Aws::Vector<ResourcePolicy>& GetResourcePolicies() const{ return m_resourcePolicies; }

    /**
     * <p>The list of resource policies in the target Amazon Web Services account.</p>
     */
    inline void SetResourcePolicies(const Aws::Vector<ResourcePolicy>& value) { m_resourcePolicies = value; }

    /**
     * <p>The list of resource policies in the target Amazon Web Services account.</p>
     */
    inline void SetResourcePolicies(Aws::Vector<ResourcePolicy>&& value) { m_resourcePolicies = std::move(value); }

    /**
     * <p>The list of resource policies in the target Amazon Web Services account.</p>
     */
    inline ListResourcePoliciesResult& WithResourcePolicies(const Aws::Vector<ResourcePolicy>& value) { SetResourcePolicies(value); return *this;}

    /**
     * <p>The list of resource policies in the target Amazon Web Services account.</p>
     */
    inline ListResourcePoliciesResult& WithResourcePolicies(Aws::Vector<ResourcePolicy>&& value) { SetResourcePolicies(std::move(value)); return *this;}

    /**
     * <p>The list of resource policies in the target Amazon Web Services account.</p>
     */
    inline ListResourcePoliciesResult& AddResourcePolicies(const ResourcePolicy& value) { m_resourcePolicies.push_back(value); return *this; }

    /**
     * <p>The list of resource policies in the target Amazon Web Services account.</p>
     */
    inline ListResourcePoliciesResult& AddResourcePolicies(ResourcePolicy&& value) { m_resourcePolicies.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token. Not currently supported.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token. Not currently supported.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token. Not currently supported.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token. Not currently supported.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token. Not currently supported.</p>
     */
    inline ListResourcePoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token. Not currently supported.</p>
     */
    inline ListResourcePoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token. Not currently supported.</p>
     */
    inline ListResourcePoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ResourcePolicy> m_resourcePolicies;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
