/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/Namespace.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class DeleteNamespaceResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API DeleteNamespaceResult();
    AWS_REDSHIFTSERVERLESS_API DeleteNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API DeleteNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The deleted namespace object.</p>
     */
    inline const Namespace& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The deleted namespace object.</p>
     */
    inline void SetNamespace(const Namespace& value) { m_namespace = value; }

    /**
     * <p>The deleted namespace object.</p>
     */
    inline void SetNamespace(Namespace&& value) { m_namespace = std::move(value); }

    /**
     * <p>The deleted namespace object.</p>
     */
    inline DeleteNamespaceResult& WithNamespace(const Namespace& value) { SetNamespace(value); return *this;}

    /**
     * <p>The deleted namespace object.</p>
     */
    inline DeleteNamespaceResult& WithNamespace(Namespace&& value) { SetNamespace(std::move(value)); return *this;}

  private:

    Namespace m_namespace;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
