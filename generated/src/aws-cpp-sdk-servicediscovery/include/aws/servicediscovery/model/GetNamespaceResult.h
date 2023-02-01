/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/Namespace.h>
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
  class GetNamespaceResult
  {
  public:
    AWS_SERVICEDISCOVERY_API GetNamespaceResult();
    AWS_SERVICEDISCOVERY_API GetNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEDISCOVERY_API GetNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A complex type that contains information about the specified namespace.</p>
     */
    inline const Namespace& GetNamespace() const{ return m_namespace; }

    /**
     * <p>A complex type that contains information about the specified namespace.</p>
     */
    inline void SetNamespace(const Namespace& value) { m_namespace = value; }

    /**
     * <p>A complex type that contains information about the specified namespace.</p>
     */
    inline void SetNamespace(Namespace&& value) { m_namespace = std::move(value); }

    /**
     * <p>A complex type that contains information about the specified namespace.</p>
     */
    inline GetNamespaceResult& WithNamespace(const Namespace& value) { SetNamespace(value); return *this;}

    /**
     * <p>A complex type that contains information about the specified namespace.</p>
     */
    inline GetNamespaceResult& WithNamespace(Namespace&& value) { SetNamespace(std::move(value)); return *this;}

  private:

    Namespace m_namespace;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
