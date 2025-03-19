/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Options for how to import Neptune data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/NeptuneImportOptions">AWS
   * API Reference</a></p>
   */
  class NeptuneImportOptions
  {
  public:
    AWS_NEPTUNEGRAPH_API NeptuneImportOptions() = default;
    AWS_NEPTUNEGRAPH_API NeptuneImportOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API NeptuneImportOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to an S3 bucket from which to import data.</p>
     */
    inline const Aws::String& GetS3ExportPath() const { return m_s3ExportPath; }
    inline bool S3ExportPathHasBeenSet() const { return m_s3ExportPathHasBeenSet; }
    template<typename S3ExportPathT = Aws::String>
    void SetS3ExportPath(S3ExportPathT&& value) { m_s3ExportPathHasBeenSet = true; m_s3ExportPath = std::forward<S3ExportPathT>(value); }
    template<typename S3ExportPathT = Aws::String>
    NeptuneImportOptions& WithS3ExportPath(S3ExportPathT&& value) { SetS3ExportPath(std::forward<S3ExportPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key to use to encrypt data in the S3 bucket where the graph data is
     * exported</p>
     */
    inline const Aws::String& GetS3ExportKmsKeyId() const { return m_s3ExportKmsKeyId; }
    inline bool S3ExportKmsKeyIdHasBeenSet() const { return m_s3ExportKmsKeyIdHasBeenSet; }
    template<typename S3ExportKmsKeyIdT = Aws::String>
    void SetS3ExportKmsKeyId(S3ExportKmsKeyIdT&& value) { m_s3ExportKmsKeyIdHasBeenSet = true; m_s3ExportKmsKeyId = std::forward<S3ExportKmsKeyIdT>(value); }
    template<typename S3ExportKmsKeyIdT = Aws::String>
    NeptuneImportOptions& WithS3ExportKmsKeyId(S3ExportKmsKeyIdT&& value) { SetS3ExportKmsKeyId(std::forward<S3ExportKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Neptune Analytics supports label-less vertices and no labels are assigned
     * unless one is explicitly provided. Neptune assigns default labels when none is
     * explicitly provided. When importing the data into Neptune Analytics, the default
     * vertex labels can be omitted by setting <i>preserveDefaultVertexLabels</i> to
     * false. Note that if the vertex only has default labels, and has no other
     * properties or edges, then the vertex will effectively not get imported into
     * Neptune Analytics when preserveDefaultVertexLabels is set to false.</p>
     */
    inline bool GetPreserveDefaultVertexLabels() const { return m_preserveDefaultVertexLabels; }
    inline bool PreserveDefaultVertexLabelsHasBeenSet() const { return m_preserveDefaultVertexLabelsHasBeenSet; }
    inline void SetPreserveDefaultVertexLabels(bool value) { m_preserveDefaultVertexLabelsHasBeenSet = true; m_preserveDefaultVertexLabels = value; }
    inline NeptuneImportOptions& WithPreserveDefaultVertexLabels(bool value) { SetPreserveDefaultVertexLabels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Neptune Analytics currently does not support user defined edge ids. The edge
     * ids are not imported by default. They are imported if <i>preserveEdgeIds</i> is
     * set to true, and ids are stored as properties on the relationships with the
     * property name <i>neptuneEdgeId</i>.</p>
     */
    inline bool GetPreserveEdgeIds() const { return m_preserveEdgeIds; }
    inline bool PreserveEdgeIdsHasBeenSet() const { return m_preserveEdgeIdsHasBeenSet; }
    inline void SetPreserveEdgeIds(bool value) { m_preserveEdgeIdsHasBeenSet = true; m_preserveEdgeIds = value; }
    inline NeptuneImportOptions& WithPreserveEdgeIds(bool value) { SetPreserveEdgeIds(value); return *this;}
    ///@}
  private:

    Aws::String m_s3ExportPath;
    bool m_s3ExportPathHasBeenSet = false;

    Aws::String m_s3ExportKmsKeyId;
    bool m_s3ExportKmsKeyIdHasBeenSet = false;

    bool m_preserveDefaultVertexLabels{false};
    bool m_preserveDefaultVertexLabelsHasBeenSet = false;

    bool m_preserveEdgeIds{false};
    bool m_preserveEdgeIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
