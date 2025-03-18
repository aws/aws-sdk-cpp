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
#include <aws/tnb/model/UpdateSolNetworkType.h>
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
    AWS_TNB_API GetSolNetworkOperationResult() = default;
    AWS_TNB_API GetSolNetworkOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API GetSolNetworkOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Network operation ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetSolNetworkOperationResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error related to this specific network operation occurrence.</p>
     */
    inline const ProblemDetails& GetError() const { return m_error; }
    template<typename ErrorT = ProblemDetails>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ProblemDetails>
    GetSolNetworkOperationResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of this network operation occurrence.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetSolNetworkOperationResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the operation represented by this occurrence.</p>
     */
    inline LcmOperationType GetLcmOperationType() const { return m_lcmOperationType; }
    inline void SetLcmOperationType(LcmOperationType value) { m_lcmOperationTypeHasBeenSet = true; m_lcmOperationType = value; }
    inline GetSolNetworkOperationResult& WithLcmOperationType(LcmOperationType value) { SetLcmOperationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata of this network operation occurrence.</p>
     */
    inline const GetSolNetworkOperationMetadata& GetMetadata() const { return m_metadata; }
    template<typename MetadataT = GetSolNetworkOperationMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = GetSolNetworkOperationMetadata>
    GetSolNetworkOperationResult& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the network operation instance.</p>
     */
    inline const Aws::String& GetNsInstanceId() const { return m_nsInstanceId; }
    template<typename NsInstanceIdT = Aws::String>
    void SetNsInstanceId(NsInstanceIdT&& value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId = std::forward<NsInstanceIdT>(value); }
    template<typename NsInstanceIdT = Aws::String>
    GetSolNetworkOperationResult& WithNsInstanceId(NsInstanceIdT&& value) { SetNsInstanceId(std::forward<NsInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the network operation.</p>
     */
    inline NsLcmOperationState GetOperationState() const { return m_operationState; }
    inline void SetOperationState(NsLcmOperationState value) { m_operationStateHasBeenSet = true; m_operationState = value; }
    inline GetSolNetworkOperationResult& WithOperationState(NsLcmOperationState value) { SetOperationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetSolNetworkOperationResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetSolNetworkOperationResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>All tasks associated with this operation occurrence.</p>
     */
    inline const Aws::Vector<GetSolNetworkOperationTaskDetails>& GetTasks() const { return m_tasks; }
    template<typename TasksT = Aws::Vector<GetSolNetworkOperationTaskDetails>>
    void SetTasks(TasksT&& value) { m_tasksHasBeenSet = true; m_tasks = std::forward<TasksT>(value); }
    template<typename TasksT = Aws::Vector<GetSolNetworkOperationTaskDetails>>
    GetSolNetworkOperationResult& WithTasks(TasksT&& value) { SetTasks(std::forward<TasksT>(value)); return *this;}
    template<typename TasksT = GetSolNetworkOperationTaskDetails>
    GetSolNetworkOperationResult& AddTasks(TasksT&& value) { m_tasksHasBeenSet = true; m_tasks.emplace_back(std::forward<TasksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Type of the update. Only present if the network operation lcmOperationType is
     * <code>UPDATE</code>.</p>
     */
    inline UpdateSolNetworkType GetUpdateType() const { return m_updateType; }
    inline void SetUpdateType(UpdateSolNetworkType value) { m_updateTypeHasBeenSet = true; m_updateType = value; }
    inline GetSolNetworkOperationResult& WithUpdateType(UpdateSolNetworkType value) { SetUpdateType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSolNetworkOperationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ProblemDetails m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    LcmOperationType m_lcmOperationType{LcmOperationType::NOT_SET};
    bool m_lcmOperationTypeHasBeenSet = false;

    GetSolNetworkOperationMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_nsInstanceId;
    bool m_nsInstanceIdHasBeenSet = false;

    NsLcmOperationState m_operationState{NsLcmOperationState::NOT_SET};
    bool m_operationStateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<GetSolNetworkOperationTaskDetails> m_tasks;
    bool m_tasksHasBeenSet = false;

    UpdateSolNetworkType m_updateType{UpdateSolNetworkType::NOT_SET};
    bool m_updateTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
