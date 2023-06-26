/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/ProblemDetails.h>
#include <aws/tnb/model/LcmOperationType.h>
#include <aws/tnb/model/GetSolNetworkOperationMetadata.h>
#include <aws/tnb/model/NsLcmOperationState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/tnb/model/GetSolNetworkOperationTaskDetails.h>
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
namespace tnb
{
namespace Model
{
  class GetSolNetworkOperationResult
  {
  public:
    AWS_TNB_API GetSolNetworkOperationResult();
    AWS_TNB_API GetSolNetworkOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API GetSolNetworkOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Network operation ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Network operation ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>Network operation ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>Network operation ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>Network operation ARN.</p>
     */
    inline GetSolNetworkOperationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Network operation ARN.</p>
     */
    inline GetSolNetworkOperationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Network operation ARN.</p>
     */
    inline GetSolNetworkOperationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Error related to this specific network operation occurrence.</p>
     */
    inline const ProblemDetails& GetError() const{ return m_error; }

    /**
     * <p>Error related to this specific network operation occurrence.</p>
     */
    inline void SetError(const ProblemDetails& value) { m_error = value; }

    /**
     * <p>Error related to this specific network operation occurrence.</p>
     */
    inline void SetError(ProblemDetails&& value) { m_error = std::move(value); }

    /**
     * <p>Error related to this specific network operation occurrence.</p>
     */
    inline GetSolNetworkOperationResult& WithError(const ProblemDetails& value) { SetError(value); return *this;}

    /**
     * <p>Error related to this specific network operation occurrence.</p>
     */
    inline GetSolNetworkOperationResult& WithError(ProblemDetails&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>ID of this network operation occurrence.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>ID of this network operation occurrence.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>ID of this network operation occurrence.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>ID of this network operation occurrence.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>ID of this network operation occurrence.</p>
     */
    inline GetSolNetworkOperationResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>ID of this network operation occurrence.</p>
     */
    inline GetSolNetworkOperationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>ID of this network operation occurrence.</p>
     */
    inline GetSolNetworkOperationResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Type of the operation represented by this occurrence.</p>
     */
    inline const LcmOperationType& GetLcmOperationType() const{ return m_lcmOperationType; }

    /**
     * <p>Type of the operation represented by this occurrence.</p>
     */
    inline void SetLcmOperationType(const LcmOperationType& value) { m_lcmOperationType = value; }

    /**
     * <p>Type of the operation represented by this occurrence.</p>
     */
    inline void SetLcmOperationType(LcmOperationType&& value) { m_lcmOperationType = std::move(value); }

    /**
     * <p>Type of the operation represented by this occurrence.</p>
     */
    inline GetSolNetworkOperationResult& WithLcmOperationType(const LcmOperationType& value) { SetLcmOperationType(value); return *this;}

    /**
     * <p>Type of the operation represented by this occurrence.</p>
     */
    inline GetSolNetworkOperationResult& WithLcmOperationType(LcmOperationType&& value) { SetLcmOperationType(std::move(value)); return *this;}


    /**
     * <p>Metadata of this network operation occurrence.</p>
     */
    inline const GetSolNetworkOperationMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Metadata of this network operation occurrence.</p>
     */
    inline void SetMetadata(const GetSolNetworkOperationMetadata& value) { m_metadata = value; }

    /**
     * <p>Metadata of this network operation occurrence.</p>
     */
    inline void SetMetadata(GetSolNetworkOperationMetadata&& value) { m_metadata = std::move(value); }

    /**
     * <p>Metadata of this network operation occurrence.</p>
     */
    inline GetSolNetworkOperationResult& WithMetadata(const GetSolNetworkOperationMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>Metadata of this network operation occurrence.</p>
     */
    inline GetSolNetworkOperationResult& WithMetadata(GetSolNetworkOperationMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>ID of the network operation instance.</p>
     */
    inline const Aws::String& GetNsInstanceId() const{ return m_nsInstanceId; }

    /**
     * <p>ID of the network operation instance.</p>
     */
    inline void SetNsInstanceId(const Aws::String& value) { m_nsInstanceId = value; }

    /**
     * <p>ID of the network operation instance.</p>
     */
    inline void SetNsInstanceId(Aws::String&& value) { m_nsInstanceId = std::move(value); }

    /**
     * <p>ID of the network operation instance.</p>
     */
    inline void SetNsInstanceId(const char* value) { m_nsInstanceId.assign(value); }

    /**
     * <p>ID of the network operation instance.</p>
     */
    inline GetSolNetworkOperationResult& WithNsInstanceId(const Aws::String& value) { SetNsInstanceId(value); return *this;}

    /**
     * <p>ID of the network operation instance.</p>
     */
    inline GetSolNetworkOperationResult& WithNsInstanceId(Aws::String&& value) { SetNsInstanceId(std::move(value)); return *this;}

    /**
     * <p>ID of the network operation instance.</p>
     */
    inline GetSolNetworkOperationResult& WithNsInstanceId(const char* value) { SetNsInstanceId(value); return *this;}


    /**
     * <p>The state of the network operation.</p>
     */
    inline const NsLcmOperationState& GetOperationState() const{ return m_operationState; }

    /**
     * <p>The state of the network operation.</p>
     */
    inline void SetOperationState(const NsLcmOperationState& value) { m_operationState = value; }

    /**
     * <p>The state of the network operation.</p>
     */
    inline void SetOperationState(NsLcmOperationState&& value) { m_operationState = std::move(value); }

    /**
     * <p>The state of the network operation.</p>
     */
    inline GetSolNetworkOperationResult& WithOperationState(const NsLcmOperationState& value) { SetOperationState(value); return *this;}

    /**
     * <p>The state of the network operation.</p>
     */
    inline GetSolNetworkOperationResult& WithOperationState(NsLcmOperationState&& value) { SetOperationState(std::move(value)); return *this;}


    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkOperationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkOperationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkOperationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkOperationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkOperationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkOperationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkOperationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkOperationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkOperationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>All tasks associated with this operation occurrence.</p>
     */
    inline const Aws::Vector<GetSolNetworkOperationTaskDetails>& GetTasks() const{ return m_tasks; }

    /**
     * <p>All tasks associated with this operation occurrence.</p>
     */
    inline void SetTasks(const Aws::Vector<GetSolNetworkOperationTaskDetails>& value) { m_tasks = value; }

    /**
     * <p>All tasks associated with this operation occurrence.</p>
     */
    inline void SetTasks(Aws::Vector<GetSolNetworkOperationTaskDetails>&& value) { m_tasks = std::move(value); }

    /**
     * <p>All tasks associated with this operation occurrence.</p>
     */
    inline GetSolNetworkOperationResult& WithTasks(const Aws::Vector<GetSolNetworkOperationTaskDetails>& value) { SetTasks(value); return *this;}

    /**
     * <p>All tasks associated with this operation occurrence.</p>
     */
    inline GetSolNetworkOperationResult& WithTasks(Aws::Vector<GetSolNetworkOperationTaskDetails>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p>All tasks associated with this operation occurrence.</p>
     */
    inline GetSolNetworkOperationResult& AddTasks(const GetSolNetworkOperationTaskDetails& value) { m_tasks.push_back(value); return *this; }

    /**
     * <p>All tasks associated with this operation occurrence.</p>
     */
    inline GetSolNetworkOperationResult& AddTasks(GetSolNetworkOperationTaskDetails&& value) { m_tasks.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSolNetworkOperationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSolNetworkOperationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSolNetworkOperationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    ProblemDetails m_error;

    Aws::String m_id;

    LcmOperationType m_lcmOperationType;

    GetSolNetworkOperationMetadata m_metadata;

    Aws::String m_nsInstanceId;

    NsLcmOperationState m_operationState;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Vector<GetSolNetworkOperationTaskDetails> m_tasks;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
