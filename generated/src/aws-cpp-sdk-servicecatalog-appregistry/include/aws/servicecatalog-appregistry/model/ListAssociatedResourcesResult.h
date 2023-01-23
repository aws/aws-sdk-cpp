/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog-appregistry/model/ResourceInfo.h>
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
namespace AppRegistry
{
namespace Model
{
  class ListAssociatedResourcesResult
  {
  public:
    AWS_APPREGISTRY_API ListAssociatedResourcesResult();
    AWS_APPREGISTRY_API ListAssociatedResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API ListAssociatedResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the resources.</p>
     */
    inline const Aws::Vector<ResourceInfo>& GetResources() const{ return m_resources; }

    /**
     * <p>Information about the resources.</p>
     */
    inline void SetResources(const Aws::Vector<ResourceInfo>& value) { m_resources = value; }

    /**
     * <p>Information about the resources.</p>
     */
    inline void SetResources(Aws::Vector<ResourceInfo>&& value) { m_resources = std::move(value); }

    /**
     * <p>Information about the resources.</p>
     */
    inline ListAssociatedResourcesResult& WithResources(const Aws::Vector<ResourceInfo>& value) { SetResources(value); return *this;}

    /**
     * <p>Information about the resources.</p>
     */
    inline ListAssociatedResourcesResult& WithResources(Aws::Vector<ResourceInfo>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>Information about the resources.</p>
     */
    inline ListAssociatedResourcesResult& AddResources(const ResourceInfo& value) { m_resources.push_back(value); return *this; }

    /**
     * <p>Information about the resources.</p>
     */
    inline ListAssociatedResourcesResult& AddResources(ResourceInfo&& value) { m_resources.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline ListAssociatedResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline ListAssociatedResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * </p>
     */
    inline ListAssociatedResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ResourceInfo> m_resources;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
