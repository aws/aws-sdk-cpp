/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Synthetics
{
namespace Model
{
  class ListGroupResourcesResult
  {
  public:
    AWS_SYNTHETICS_API ListGroupResourcesResult();
    AWS_SYNTHETICS_API ListGroupResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SYNTHETICS_API ListGroupResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of ARNs. These ARNs are for the canaries that are associated with
     * the group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const{ return m_resources; }

    /**
     * <p>An array of ARNs. These ARNs are for the canaries that are associated with
     * the group.</p>
     */
    inline void SetResources(const Aws::Vector<Aws::String>& value) { m_resources = value; }

    /**
     * <p>An array of ARNs. These ARNs are for the canaries that are associated with
     * the group.</p>
     */
    inline void SetResources(Aws::Vector<Aws::String>&& value) { m_resources = std::move(value); }

    /**
     * <p>An array of ARNs. These ARNs are for the canaries that are associated with
     * the group.</p>
     */
    inline ListGroupResourcesResult& WithResources(const Aws::Vector<Aws::String>& value) { SetResources(value); return *this;}

    /**
     * <p>An array of ARNs. These ARNs are for the canaries that are associated with
     * the group.</p>
     */
    inline ListGroupResourcesResult& WithResources(Aws::Vector<Aws::String>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>An array of ARNs. These ARNs are for the canaries that are associated with
     * the group.</p>
     */
    inline ListGroupResourcesResult& AddResources(const Aws::String& value) { m_resources.push_back(value); return *this; }

    /**
     * <p>An array of ARNs. These ARNs are for the canaries that are associated with
     * the group.</p>
     */
    inline ListGroupResourcesResult& AddResources(Aws::String&& value) { m_resources.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of ARNs. These ARNs are for the canaries that are associated with
     * the group.</p>
     */
    inline ListGroupResourcesResult& AddResources(const char* value) { m_resources.push_back(value); return *this; }


    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>ListGroupResources</code> operation to retrieve the
     * next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>ListGroupResources</code> operation to retrieve the
     * next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>ListGroupResources</code> operation to retrieve the
     * next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>ListGroupResources</code> operation to retrieve the
     * next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>ListGroupResources</code> operation to retrieve the
     * next set of results.</p>
     */
    inline ListGroupResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>ListGroupResources</code> operation to retrieve the
     * next set of results.</p>
     */
    inline ListGroupResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>ListGroupResources</code> operation to retrieve the
     * next set of results.</p>
     */
    inline ListGroupResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_resources;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
