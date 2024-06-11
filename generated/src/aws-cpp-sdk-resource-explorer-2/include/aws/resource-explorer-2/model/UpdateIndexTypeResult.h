﻿/**
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


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you updated.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateIndexTypeResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateIndexTypeResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateIndexTypeResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and timestamp when the index was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline UpdateIndexTypeResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline UpdateIndexTypeResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the state of the request to update the index. This operation is
     * asynchronous. Call the <a>GetIndex</a> operation to check for changes.</p>
     */
    inline const IndexState& GetState() const{ return m_state; }
    inline void SetState(const IndexState& value) { m_state = value; }
    inline void SetState(IndexState&& value) { m_state = std::move(value); }
    inline UpdateIndexTypeResult& WithState(const IndexState& value) { SetState(value); return *this;}
    inline UpdateIndexTypeResult& WithState(IndexState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of the specified index after the operation completes.</p>
     */
    inline const IndexType& GetType() const{ return m_type; }
    inline void SetType(const IndexType& value) { m_type = value; }
    inline void SetType(IndexType&& value) { m_type = std::move(value); }
    inline UpdateIndexTypeResult& WithType(const IndexType& value) { SetType(value); return *this;}
    inline UpdateIndexTypeResult& WithType(IndexType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateIndexTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateIndexTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateIndexTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_lastUpdatedAt;

    IndexState m_state;

    IndexType m_type;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
