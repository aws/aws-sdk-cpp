/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProvisionedProductPlanDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ResourceChange.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class DescribeProvisionedProductPlanResult
  {
  public:
    AWS_SERVICECATALOG_API DescribeProvisionedProductPlanResult();
    AWS_SERVICECATALOG_API DescribeProvisionedProductPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeProvisionedProductPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the plan.</p>
     */
    inline const ProvisionedProductPlanDetails& GetProvisionedProductPlanDetails() const{ return m_provisionedProductPlanDetails; }

    /**
     * <p>Information about the plan.</p>
     */
    inline void SetProvisionedProductPlanDetails(const ProvisionedProductPlanDetails& value) { m_provisionedProductPlanDetails = value; }

    /**
     * <p>Information about the plan.</p>
     */
    inline void SetProvisionedProductPlanDetails(ProvisionedProductPlanDetails&& value) { m_provisionedProductPlanDetails = std::move(value); }

    /**
     * <p>Information about the plan.</p>
     */
    inline DescribeProvisionedProductPlanResult& WithProvisionedProductPlanDetails(const ProvisionedProductPlanDetails& value) { SetProvisionedProductPlanDetails(value); return *this;}

    /**
     * <p>Information about the plan.</p>
     */
    inline DescribeProvisionedProductPlanResult& WithProvisionedProductPlanDetails(ProvisionedProductPlanDetails&& value) { SetProvisionedProductPlanDetails(std::move(value)); return *this;}


    /**
     * <p>Information about the resource changes that will occur when the plan is
     * executed.</p>
     */
    inline const Aws::Vector<ResourceChange>& GetResourceChanges() const{ return m_resourceChanges; }

    /**
     * <p>Information about the resource changes that will occur when the plan is
     * executed.</p>
     */
    inline void SetResourceChanges(const Aws::Vector<ResourceChange>& value) { m_resourceChanges = value; }

    /**
     * <p>Information about the resource changes that will occur when the plan is
     * executed.</p>
     */
    inline void SetResourceChanges(Aws::Vector<ResourceChange>&& value) { m_resourceChanges = std::move(value); }

    /**
     * <p>Information about the resource changes that will occur when the plan is
     * executed.</p>
     */
    inline DescribeProvisionedProductPlanResult& WithResourceChanges(const Aws::Vector<ResourceChange>& value) { SetResourceChanges(value); return *this;}

    /**
     * <p>Information about the resource changes that will occur when the plan is
     * executed.</p>
     */
    inline DescribeProvisionedProductPlanResult& WithResourceChanges(Aws::Vector<ResourceChange>&& value) { SetResourceChanges(std::move(value)); return *this;}

    /**
     * <p>Information about the resource changes that will occur when the plan is
     * executed.</p>
     */
    inline DescribeProvisionedProductPlanResult& AddResourceChanges(const ResourceChange& value) { m_resourceChanges.push_back(value); return *this; }

    /**
     * <p>Information about the resource changes that will occur when the plan is
     * executed.</p>
     */
    inline DescribeProvisionedProductPlanResult& AddResourceChanges(ResourceChange&& value) { m_resourceChanges.push_back(std::move(value)); return *this; }


    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline DescribeProvisionedProductPlanResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline DescribeProvisionedProductPlanResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline DescribeProvisionedProductPlanResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    ProvisionedProductPlanDetails m_provisionedProductPlanDetails;

    Aws::Vector<ResourceChange> m_resourceChanges;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
