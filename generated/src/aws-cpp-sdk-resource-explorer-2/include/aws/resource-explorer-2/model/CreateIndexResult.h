/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/resource-explorer-2/model/IndexState.h>
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
  class CreateIndexResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API CreateIndexResult();
    AWS_RESOURCEEXPLORER2_API CreateIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API CreateIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the new local index for the Region. You can reference this ARN in
     * IAM permission policies to authorize the following operations:
     * <a>DeleteIndex</a> | <a>GetIndex</a> | <a>UpdateIndexType</a> |
     * <a>CreateView</a> </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateIndexResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateIndexResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateIndexResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and timestamp when the index was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreateIndexResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreateIndexResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the current state of the index. You can check for changes to the
     * state for asynchronous operations by calling the <a>GetIndex</a> operation.</p>
     *  <p>The state can remain in the <code>CREATING</code> or
     * <code>UPDATING</code> state for several hours as Resource Explorer discovers the
     * information about your resources and populates the index.</p> 
     */
    inline const IndexState& GetState() const{ return m_state; }
    inline void SetState(const IndexState& value) { m_state = value; }
    inline void SetState(IndexState&& value) { m_state = std::move(value); }
    inline CreateIndexResult& WithState(const IndexState& value) { SetState(value); return *this;}
    inline CreateIndexResult& WithState(IndexState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateIndexResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateIndexResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateIndexResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    IndexState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
