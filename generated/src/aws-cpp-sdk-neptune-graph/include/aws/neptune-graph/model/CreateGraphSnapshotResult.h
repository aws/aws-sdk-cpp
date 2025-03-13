/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/neptune-graph/model/SnapshotStatus.h>
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
namespace NeptuneGraph
{
namespace Model
{
  class CreateGraphSnapshotResult
  {
  public:
    AWS_NEPTUNEGRAPH_API CreateGraphSnapshotResult() = default;
    AWS_NEPTUNEGRAPH_API CreateGraphSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API CreateGraphSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the snapshot created.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateGraphSnapshotResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the snapshot created.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateGraphSnapshotResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the snapshot created.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateGraphSnapshotResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Id of the Neptune Analytics graph from which the snapshot is created.</p>
     */
    inline const Aws::String& GetSourceGraphId() const { return m_sourceGraphId; }
    template<typename SourceGraphIdT = Aws::String>
    void SetSourceGraphId(SourceGraphIdT&& value) { m_sourceGraphIdHasBeenSet = true; m_sourceGraphId = std::forward<SourceGraphIdT>(value); }
    template<typename SourceGraphIdT = Aws::String>
    CreateGraphSnapshotResult& WithSourceGraphId(SourceGraphIdT&& value) { SetSourceGraphId(std::forward<SourceGraphIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot creation time</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const { return m_snapshotCreateTime; }
    template<typename SnapshotCreateTimeT = Aws::Utils::DateTime>
    void SetSnapshotCreateTime(SnapshotCreateTimeT&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = std::forward<SnapshotCreateTimeT>(value); }
    template<typename SnapshotCreateTimeT = Aws::Utils::DateTime>
    CreateGraphSnapshotResult& WithSnapshotCreateTime(SnapshotCreateTimeT&& value) { SetSnapshotCreateTime(std::forward<SnapshotCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the snapshot.</p>
     */
    inline SnapshotStatus GetStatus() const { return m_status; }
    inline void SetStatus(SnapshotStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateGraphSnapshotResult& WithStatus(SnapshotStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt and decrypt graph data.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
    template<typename KmsKeyIdentifierT = Aws::String>
    void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value); }
    template<typename KmsKeyIdentifierT = Aws::String>
    CreateGraphSnapshotResult& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) { SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateGraphSnapshotResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_sourceGraphId;
    bool m_sourceGraphIdHasBeenSet = false;

    Aws::Utils::DateTime m_snapshotCreateTime{};
    bool m_snapshotCreateTimeHasBeenSet = false;

    SnapshotStatus m_status{SnapshotStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
