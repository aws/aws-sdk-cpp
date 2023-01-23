/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisionedProductPlanSummary.h>
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
  class ListProvisionedProductPlansResult
  {
  public:
    AWS_SERVICECATALOG_API ListProvisionedProductPlansResult();
    AWS_SERVICECATALOG_API ListProvisionedProductPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListProvisionedProductPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the plans.</p>
     */
    inline const Aws::Vector<ProvisionedProductPlanSummary>& GetProvisionedProductPlans() const{ return m_provisionedProductPlans; }

    /**
     * <p>Information about the plans.</p>
     */
    inline void SetProvisionedProductPlans(const Aws::Vector<ProvisionedProductPlanSummary>& value) { m_provisionedProductPlans = value; }

    /**
     * <p>Information about the plans.</p>
     */
    inline void SetProvisionedProductPlans(Aws::Vector<ProvisionedProductPlanSummary>&& value) { m_provisionedProductPlans = std::move(value); }

    /**
     * <p>Information about the plans.</p>
     */
    inline ListProvisionedProductPlansResult& WithProvisionedProductPlans(const Aws::Vector<ProvisionedProductPlanSummary>& value) { SetProvisionedProductPlans(value); return *this;}

    /**
     * <p>Information about the plans.</p>
     */
    inline ListProvisionedProductPlansResult& WithProvisionedProductPlans(Aws::Vector<ProvisionedProductPlanSummary>&& value) { SetProvisionedProductPlans(std::move(value)); return *this;}

    /**
     * <p>Information about the plans.</p>
     */
    inline ListProvisionedProductPlansResult& AddProvisionedProductPlans(const ProvisionedProductPlanSummary& value) { m_provisionedProductPlans.push_back(value); return *this; }

    /**
     * <p>Information about the plans.</p>
     */
    inline ListProvisionedProductPlansResult& AddProvisionedProductPlans(ProvisionedProductPlanSummary&& value) { m_provisionedProductPlans.push_back(std::move(value)); return *this; }


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
    inline ListProvisionedProductPlansResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListProvisionedProductPlansResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListProvisionedProductPlansResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<ProvisionedProductPlanSummary> m_provisionedProductPlans;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
