/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ResourceCatalog.h>
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
  class ListResourceCatalogsResult
  {
  public:
    AWS_SAGEMAKER_API ListResourceCatalogsResult();
    AWS_SAGEMAKER_API ListResourceCatalogsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListResourceCatalogsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of the requested <code>ResourceCatalog</code>s. </p>
     */
    inline const Aws::Vector<ResourceCatalog>& GetResourceCatalogs() const{ return m_resourceCatalogs; }

    /**
     * <p> A list of the requested <code>ResourceCatalog</code>s. </p>
     */
    inline void SetResourceCatalogs(const Aws::Vector<ResourceCatalog>& value) { m_resourceCatalogs = value; }

    /**
     * <p> A list of the requested <code>ResourceCatalog</code>s. </p>
     */
    inline void SetResourceCatalogs(Aws::Vector<ResourceCatalog>&& value) { m_resourceCatalogs = std::move(value); }

    /**
     * <p> A list of the requested <code>ResourceCatalog</code>s. </p>
     */
    inline ListResourceCatalogsResult& WithResourceCatalogs(const Aws::Vector<ResourceCatalog>& value) { SetResourceCatalogs(value); return *this;}

    /**
     * <p> A list of the requested <code>ResourceCatalog</code>s. </p>
     */
    inline ListResourceCatalogsResult& WithResourceCatalogs(Aws::Vector<ResourceCatalog>&& value) { SetResourceCatalogs(std::move(value)); return *this;}

    /**
     * <p> A list of the requested <code>ResourceCatalog</code>s. </p>
     */
    inline ListResourceCatalogsResult& AddResourceCatalogs(const ResourceCatalog& value) { m_resourceCatalogs.push_back(value); return *this; }

    /**
     * <p> A list of the requested <code>ResourceCatalog</code>s. </p>
     */
    inline ListResourceCatalogsResult& AddResourceCatalogs(ResourceCatalog&& value) { m_resourceCatalogs.push_back(std::move(value)); return *this; }


    /**
     * <p> A token to resume pagination of <code>ListResourceCatalogs</code> results.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token to resume pagination of <code>ListResourceCatalogs</code> results.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A token to resume pagination of <code>ListResourceCatalogs</code> results.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A token to resume pagination of <code>ListResourceCatalogs</code> results.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A token to resume pagination of <code>ListResourceCatalogs</code> results.
     * </p>
     */
    inline ListResourceCatalogsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token to resume pagination of <code>ListResourceCatalogs</code> results.
     * </p>
     */
    inline ListResourceCatalogsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token to resume pagination of <code>ListResourceCatalogs</code> results.
     * </p>
     */
    inline ListResourceCatalogsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListResourceCatalogsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListResourceCatalogsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListResourceCatalogsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ResourceCatalog> m_resourceCatalogs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
