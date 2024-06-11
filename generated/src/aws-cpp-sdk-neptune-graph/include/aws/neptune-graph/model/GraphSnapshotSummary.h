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
    AWS_NEPTUNEGRAPH_API GraphSnapshotSummary();
    AWS_NEPTUNEGRAPH_API GraphSnapshotSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API GraphSnapshotSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the graph snapshot.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline GraphSnapshotSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GraphSnapshotSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GraphSnapshotSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot name. For example: <code>my-snapshot-1</code>.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GraphSnapshotSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GraphSnapshotSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GraphSnapshotSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the graph snapshot.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline GraphSnapshotSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GraphSnapshotSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GraphSnapshotSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The graph identifier for the graph for which a snapshot is to be created.</p>
     */
    inline const Aws::String& GetSourceGraphId() const{ return m_sourceGraphId; }
    inline bool SourceGraphIdHasBeenSet() const { return m_sourceGraphIdHasBeenSet; }
    inline void SetSourceGraphId(const Aws::String& value) { m_sourceGraphIdHasBeenSet = true; m_sourceGraphId = value; }
    inline void SetSourceGraphId(Aws::String&& value) { m_sourceGraphIdHasBeenSet = true; m_sourceGraphId = std::move(value); }
    inline void SetSourceGraphId(const char* value) { m_sourceGraphIdHasBeenSet = true; m_sourceGraphId.assign(value); }
    inline GraphSnapshotSummary& WithSourceGraphId(const Aws::String& value) { SetSourceGraphId(value); return *this;}
    inline GraphSnapshotSummary& WithSourceGraphId(Aws::String&& value) { SetSourceGraphId(std::move(value)); return *this;}
    inline GraphSnapshotSummary& WithSourceGraphId(const char* value) { SetSourceGraphId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const{ return m_snapshotCreateTime; }
    inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }
    inline void SetSnapshotCreateTime(const Aws::Utils::DateTime& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = value; }
    inline void SetSnapshotCreateTime(Aws::Utils::DateTime&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = std::move(value); }
    inline GraphSnapshotSummary& WithSnapshotCreateTime(const Aws::Utils::DateTime& value) { SetSnapshotCreateTime(value); return *this;}
    inline GraphSnapshotSummary& WithSnapshotCreateTime(Aws::Utils::DateTime&& value) { SetSnapshotCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the graph snapshot.</p>
     */
    inline const SnapshotStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SnapshotStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SnapshotStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline GraphSnapshotSummary& WithStatus(const SnapshotStatus& value) { SetStatus(value); return *this;}
    inline GraphSnapshotSummary& WithStatus(SnapshotStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt and decrypt the snapshot.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const{ return m_kmsKeyIdentifier; }
    inline bool KmsKeyIdentifierHasBeenSet() const { return m_kmsKeyIdentifierHasBeenSet; }
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = value; }
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::move(value); }
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier.assign(value); }
    inline GraphSnapshotSummary& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}
    inline GraphSnapshotSummary& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}
    inline GraphSnapshotSummary& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}
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

    Aws::Utils::DateTime m_snapshotCreateTime;
    bool m_snapshotCreateTimeHasBeenSet = false;

    SnapshotStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
