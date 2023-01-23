/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicediscovery/model/HttpInstanceSummary.h>
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
namespace ServiceDiscovery
{
namespace Model
{
  class DiscoverInstancesResult
  {
  public:
    AWS_SERVICEDISCOVERY_API DiscoverInstancesResult();
    AWS_SERVICEDISCOVERY_API DiscoverInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEDISCOVERY_API DiscoverInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline const Aws::Vector<HttpInstanceSummary>& GetInstances() const{ return m_instances; }

    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline void SetInstances(const Aws::Vector<HttpInstanceSummary>& value) { m_instances = value; }

    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline void SetInstances(Aws::Vector<HttpInstanceSummary>&& value) { m_instances = std::move(value); }

    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline DiscoverInstancesResult& WithInstances(const Aws::Vector<HttpInstanceSummary>& value) { SetInstances(value); return *this;}

    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline DiscoverInstancesResult& WithInstances(Aws::Vector<HttpInstanceSummary>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline DiscoverInstancesResult& AddInstances(const HttpInstanceSummary& value) { m_instances.push_back(value); return *this; }

    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline DiscoverInstancesResult& AddInstances(HttpInstanceSummary&& value) { m_instances.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<HttpInstanceSummary> m_instances;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
