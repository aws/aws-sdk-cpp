/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/NamespaceInfoV2.h>
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
namespace QuickSight
{
namespace Model
{
  class DescribeNamespaceResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeNamespaceResult();
    AWS_QUICKSIGHT_API DescribeNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The information about the namespace that you're describing. The response
     * includes the namespace ARN, name, Amazon Web Services Region, creation status,
     * and identity store. <code>DescribeNamespace</code> also works for namespaces
     * that are in the process of being created. For incomplete namespaces, this API
     * operation lists the namespace error types and messages associated with the
     * creation process.</p>
     */
    inline const NamespaceInfoV2& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The information about the namespace that you're describing. The response
     * includes the namespace ARN, name, Amazon Web Services Region, creation status,
     * and identity store. <code>DescribeNamespace</code> also works for namespaces
     * that are in the process of being created. For incomplete namespaces, this API
     * operation lists the namespace error types and messages associated with the
     * creation process.</p>
     */
    inline void SetNamespace(const NamespaceInfoV2& value) { m_namespace = value; }

    /**
     * <p>The information about the namespace that you're describing. The response
     * includes the namespace ARN, name, Amazon Web Services Region, creation status,
     * and identity store. <code>DescribeNamespace</code> also works for namespaces
     * that are in the process of being created. For incomplete namespaces, this API
     * operation lists the namespace error types and messages associated with the
     * creation process.</p>
     */
    inline void SetNamespace(NamespaceInfoV2&& value) { m_namespace = std::move(value); }

    /**
     * <p>The information about the namespace that you're describing. The response
     * includes the namespace ARN, name, Amazon Web Services Region, creation status,
     * and identity store. <code>DescribeNamespace</code> also works for namespaces
     * that are in the process of being created. For incomplete namespaces, this API
     * operation lists the namespace error types and messages associated with the
     * creation process.</p>
     */
    inline DescribeNamespaceResult& WithNamespace(const NamespaceInfoV2& value) { SetNamespace(value); return *this;}

    /**
     * <p>The information about the namespace that you're describing. The response
     * includes the namespace ARN, name, Amazon Web Services Region, creation status,
     * and identity store. <code>DescribeNamespace</code> also works for namespaces
     * that are in the process of being created. For incomplete namespaces, this API
     * operation lists the namespace error types and messages associated with the
     * creation process.</p>
     */
    inline DescribeNamespaceResult& WithNamespace(NamespaceInfoV2&& value) { SetNamespace(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeNamespaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeNamespaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeNamespaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline DescribeNamespaceResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    NamespaceInfoV2 m_namespace;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
