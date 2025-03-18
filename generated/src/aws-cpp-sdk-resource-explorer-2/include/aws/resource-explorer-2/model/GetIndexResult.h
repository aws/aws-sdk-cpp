/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-explorer-2/model/IndexState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class GetIndexResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API GetIndexResult() = default;
    AWS_RESOURCEEXPLORER2_API GetIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API GetIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetIndexResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the index was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetIndexResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the index was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetIndexResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This response value is present only if this index is
     * <code>Type=AGGREGATOR</code>.</p> <p>A list of the Amazon Web Services Regions
     * that replicate their content to the index in this Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicatingFrom() const { return m_replicatingFrom; }
    template<typename ReplicatingFromT = Aws::Vector<Aws::String>>
    void SetReplicatingFrom(ReplicatingFromT&& value) { m_replicatingFromHasBeenSet = true; m_replicatingFrom = std::forward<ReplicatingFromT>(value); }
    template<typename ReplicatingFromT = Aws::Vector<Aws::String>>
    GetIndexResult& WithReplicatingFrom(ReplicatingFromT&& value) { SetReplicatingFrom(std::forward<ReplicatingFromT>(value)); return *this;}
    template<typename ReplicatingFromT = Aws::String>
    GetIndexResult& AddReplicatingFrom(ReplicatingFromT&& value) { m_replicatingFromHasBeenSet = true; m_replicatingFrom.emplace_back(std::forward<ReplicatingFromT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This response value is present only if this index is
     * <code>Type=LOCAL</code>.</p> <p>The Amazon Web Services Region that contains the
     * aggregator index, if one exists. If an aggregator index does exist then the
     * Region in which you called this operation replicates its index information to
     * the Region specified in this response value. </p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicatingTo() const { return m_replicatingTo; }
    template<typename ReplicatingToT = Aws::Vector<Aws::String>>
    void SetReplicatingTo(ReplicatingToT&& value) { m_replicatingToHasBeenSet = true; m_replicatingTo = std::forward<ReplicatingToT>(value); }
    template<typename ReplicatingToT = Aws::Vector<Aws::String>>
    GetIndexResult& WithReplicatingTo(ReplicatingToT&& value) { SetReplicatingTo(std::forward<ReplicatingToT>(value)); return *this;}
    template<typename ReplicatingToT = Aws::String>
    GetIndexResult& AddReplicatingTo(ReplicatingToT&& value) { m_replicatingToHasBeenSet = true; m_replicatingTo.emplace_back(std::forward<ReplicatingToT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current state of the index in this Amazon Web Services Region.</p>
     */
    inline IndexState GetState() const { return m_state; }
    inline void SetState(IndexState value) { m_stateHasBeenSet = true; m_state = value; }
    inline GetIndexResult& WithState(IndexState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tag key and value pairs that are attached to the index.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetIndexResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetIndexResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The type of the index in this Region. For information about the aggregator
     * index and how it differs from a local index, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/manage-aggregator-region.html">Turning
     * on cross-Region search by creating an aggregator index</a>.</p>
     */
    inline IndexType GetType() const { return m_type; }
    inline void SetType(IndexType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetIndexResult& WithType(IndexType value) { SetType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIndexResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicatingFrom;
    bool m_replicatingFromHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicatingTo;
    bool m_replicatingToHasBeenSet = false;

    IndexState m_state{IndexState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    IndexType m_type{IndexType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
