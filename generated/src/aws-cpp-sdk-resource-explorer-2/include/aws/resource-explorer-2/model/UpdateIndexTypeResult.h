/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/resource-explorer-2/model/IndexState.h>
#include <aws/resource-explorer-2/model/IndexType.h>
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
namespace ResourceExplorer2
{
namespace Model
{
  class UpdateIndexTypeResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API UpdateIndexTypeResult();
    AWS_RESOURCEEXPLORER2_API UpdateIndexTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API UpdateIndexTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you updated.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you updated.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you updated.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you updated.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you updated.</p>
     */
    inline UpdateIndexTypeResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you updated.</p>
     */
    inline UpdateIndexTypeResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you updated.</p>
     */
    inline UpdateIndexTypeResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and timestamp when the index was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The date and timestamp when the index was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The date and timestamp when the index was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The date and timestamp when the index was last updated.</p>
     */
    inline UpdateIndexTypeResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The date and timestamp when the index was last updated.</p>
     */
    inline UpdateIndexTypeResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>Indicates the state of the request to update the index. This operation is
     * asynchronous. Call the <a>GetIndex</a> operation to check for changes.</p>
     */
    inline const IndexState& GetState() const{ return m_state; }

    /**
     * <p>Indicates the state of the request to update the index. This operation is
     * asynchronous. Call the <a>GetIndex</a> operation to check for changes.</p>
     */
    inline void SetState(const IndexState& value) { m_state = value; }

    /**
     * <p>Indicates the state of the request to update the index. This operation is
     * asynchronous. Call the <a>GetIndex</a> operation to check for changes.</p>
     */
    inline void SetState(IndexState&& value) { m_state = std::move(value); }

    /**
     * <p>Indicates the state of the request to update the index. This operation is
     * asynchronous. Call the <a>GetIndex</a> operation to check for changes.</p>
     */
    inline UpdateIndexTypeResult& WithState(const IndexState& value) { SetState(value); return *this;}

    /**
     * <p>Indicates the state of the request to update the index. This operation is
     * asynchronous. Call the <a>GetIndex</a> operation to check for changes.</p>
     */
    inline UpdateIndexTypeResult& WithState(IndexState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Specifies the type of the specified index after the operation completes.</p>
     */
    inline const IndexType& GetType() const{ return m_type; }

    /**
     * <p>Specifies the type of the specified index after the operation completes.</p>
     */
    inline void SetType(const IndexType& value) { m_type = value; }

    /**
     * <p>Specifies the type of the specified index after the operation completes.</p>
     */
    inline void SetType(IndexType&& value) { m_type = std::move(value); }

    /**
     * <p>Specifies the type of the specified index after the operation completes.</p>
     */
    inline UpdateIndexTypeResult& WithType(const IndexType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies the type of the specified index after the operation completes.</p>
     */
    inline UpdateIndexTypeResult& WithType(IndexType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_lastUpdatedAt;

    IndexState m_state;

    IndexType m_type;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
