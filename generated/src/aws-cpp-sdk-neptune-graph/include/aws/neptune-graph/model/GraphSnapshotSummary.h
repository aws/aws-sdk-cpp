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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NeptuneGraph
{
namespace Model
{

  /**
   * <p>Details about a graph snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/GraphSnapshotSummary">AWS
   * API Reference</a></p>
   */
  class GraphSnapshotSummary
  {
  public:
    AWS_NEPTUNEGRAPH_API GraphSnapshotSummary() = default;
    AWS_NEPTUNEGRAPH_API GraphSnapshotSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API GraphSnapshotSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the graph snapshot.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GraphSnapshotSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot name. For example: <code>my-snapshot-1</code>.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens. Only lowercase letters are allowed.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GraphSnapshotSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the graph snapshot.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GraphSnapshotSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The graph identifier for the graph for which a snapshot is to be created.</p>
     */
    inline const Aws::String& GetSourceGraphId() const { return m_sourceGraphId; }
    inline bool SourceGraphIdHasBeenSet() const { return m_sourceGraphIdHasBeenSet; }
    template<typename SourceGraphIdT = Aws::String>
    void SetSourceGraphId(SourceGraphIdT&& value) { m_sourceGraphIdHasBeenSet = true; m_sourceGraphId = std::forward<SourceGraphIdT>(value); }
    template<typename SourceGraphIdT = Aws::String>
    GraphSnapshotSummary& WithSourceGraphId(SourceGraphIdT&& value) { SetSourceGraphId(std::forward<SourceGraphIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const { return m_snapshotCreateTime; }
    inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }
    template<typename SnapshotCreateTimeT = Aws::Utils::DateTime>
    void SetSnapshotCreateTime(SnapshotCreateTimeT&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = std::forward<SnapshotCreateTimeT>(value); }
    template<typename SnapshotCreateTimeT = Aws::Utils::DateTime>
    GraphSnapshotSummary& WithSnapshotCreateTime(SnapshotCreateTimeT&& value) { SetSnapshotCreateTime(std::forward<SnapshotCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the graph snapshot.</p>
     */
    inline SnapshotStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SnapshotStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GraphSnapshotSummary& WithStatus(SnapshotStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt and decrypt the snapshot.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
    inline bool KmsKeyIdentifierHasBeenSet() const { return m_kmsKeyIdentifierHasBeenSet; }
    template<typename KmsKeyIdentifierT = Aws::String>
    void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value); }
    template<typename KmsKeyIdentifierT = Aws::String>
    GraphSnapshotSummary& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) { SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
