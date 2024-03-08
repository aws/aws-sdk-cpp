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
    AWS_NEPTUNEGRAPH_API NeptuneImportOptions();
    AWS_NEPTUNEGRAPH_API NeptuneImportOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API NeptuneImportOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path to an S3 bucket from which to import data.</p>
     */
    inline const Aws::String& GetS3ExportPath() const{ return m_s3ExportPath; }

    /**
     * <p>The path to an S3 bucket from which to import data.</p>
     */
    inline bool S3ExportPathHasBeenSet() const { return m_s3ExportPathHasBeenSet; }

    /**
     * <p>The path to an S3 bucket from which to import data.</p>
     */
    inline void SetS3ExportPath(const Aws::String& value) { m_s3ExportPathHasBeenSet = true; m_s3ExportPath = value; }

    /**
     * <p>The path to an S3 bucket from which to import data.</p>
     */
    inline void SetS3ExportPath(Aws::String&& value) { m_s3ExportPathHasBeenSet = true; m_s3ExportPath = std::move(value); }

    /**
     * <p>The path to an S3 bucket from which to import data.</p>
     */
    inline void SetS3ExportPath(const char* value) { m_s3ExportPathHasBeenSet = true; m_s3ExportPath.assign(value); }

    /**
     * <p>The path to an S3 bucket from which to import data.</p>
     */
    inline NeptuneImportOptions& WithS3ExportPath(const Aws::String& value) { SetS3ExportPath(value); return *this;}

    /**
     * <p>The path to an S3 bucket from which to import data.</p>
     */
    inline NeptuneImportOptions& WithS3ExportPath(Aws::String&& value) { SetS3ExportPath(std::move(value)); return *this;}

    /**
     * <p>The path to an S3 bucket from which to import data.</p>
     */
    inline NeptuneImportOptions& WithS3ExportPath(const char* value) { SetS3ExportPath(value); return *this;}


    /**
     * <p>The KMS key to use to encrypt data in the S3 bucket where the graph data is
     * exported</p>
     */
    inline const Aws::String& GetS3ExportKmsKeyId() const{ return m_s3ExportKmsKeyId; }

    /**
     * <p>The KMS key to use to encrypt data in the S3 bucket where the graph data is
     * exported</p>
     */
    inline bool S3ExportKmsKeyIdHasBeenSet() const { return m_s3ExportKmsKeyIdHasBeenSet; }

    /**
     * <p>The KMS key to use to encrypt data in the S3 bucket where the graph data is
     * exported</p>
     */
    inline void SetS3ExportKmsKeyId(const Aws::String& value) { m_s3ExportKmsKeyIdHasBeenSet = true; m_s3ExportKmsKeyId = value; }

    /**
     * <p>The KMS key to use to encrypt data in the S3 bucket where the graph data is
     * exported</p>
     */
    inline void SetS3ExportKmsKeyId(Aws::String&& value) { m_s3ExportKmsKeyIdHasBeenSet = true; m_s3ExportKmsKeyId = std::move(value); }

    /**
     * <p>The KMS key to use to encrypt data in the S3 bucket where the graph data is
     * exported</p>
     */
    inline void SetS3ExportKmsKeyId(const char* value) { m_s3ExportKmsKeyIdHasBeenSet = true; m_s3ExportKmsKeyId.assign(value); }

    /**
     * <p>The KMS key to use to encrypt data in the S3 bucket where the graph data is
     * exported</p>
     */
    inline NeptuneImportOptions& WithS3ExportKmsKeyId(const Aws::String& value) { SetS3ExportKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key to use to encrypt data in the S3 bucket where the graph data is
     * exported</p>
     */
    inline NeptuneImportOptions& WithS3ExportKmsKeyId(Aws::String&& value) { SetS3ExportKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key to use to encrypt data in the S3 bucket where the graph data is
     * exported</p>
     */
    inline NeptuneImportOptions& WithS3ExportKmsKeyId(const char* value) { SetS3ExportKmsKeyId(value); return *this;}


    /**
     * <p>Neptune Analytics supports label-less vertices and no labels are assigned
     * unless one is explicitly provided. Neptune assigns default labels when none is
     * explicitly provided. When importing the data into Neptune Analytics, the default
     * vertex labels can be omitted by setting <i>preserveDefaultVertexLabels</i> to
     * false. Note that if the vertex only has default labels, and has no other
     * properties or edges, then the vertex will effectively not get imported into
     * Neptune Analytics when preserveDefaultVertexLabels is set to false.</p>
     */
    inline bool GetPreserveDefaultVertexLabels() const{ return m_preserveDefaultVertexLabels; }

    /**
     * <p>Neptune Analytics supports label-less vertices and no labels are assigned
     * unless one is explicitly provided. Neptune assigns default labels when none is
     * explicitly provided. When importing the data into Neptune Analytics, the default
     * vertex labels can be omitted by setting <i>preserveDefaultVertexLabels</i> to
     * false. Note that if the vertex only has default labels, and has no other
     * properties or edges, then the vertex will effectively not get imported into
     * Neptune Analytics when preserveDefaultVertexLabels is set to false.</p>
     */
    inline bool PreserveDefaultVertexLabelsHasBeenSet() const { return m_preserveDefaultVertexLabelsHasBeenSet; }

    /**
     * <p>Neptune Analytics supports label-less vertices and no labels are assigned
     * unless one is explicitly provided. Neptune assigns default labels when none is
     * explicitly provided. When importing the data into Neptune Analytics, the default
     * vertex labels can be omitted by setting <i>preserveDefaultVertexLabels</i> to
     * false. Note that if the vertex only has default labels, and has no other
     * properties or edges, then the vertex will effectively not get imported into
     * Neptune Analytics when preserveDefaultVertexLabels is set to false.</p>
     */
    inline void SetPreserveDefaultVertexLabels(bool value) { m_preserveDefaultVertexLabelsHasBeenSet = true; m_preserveDefaultVertexLabels = value; }

    /**
     * <p>Neptune Analytics supports label-less vertices and no labels are assigned
     * unless one is explicitly provided. Neptune assigns default labels when none is
     * explicitly provided. When importing the data into Neptune Analytics, the default
     * vertex labels can be omitted by setting <i>preserveDefaultVertexLabels</i> to
     * false. Note that if the vertex only has default labels, and has no other
     * properties or edges, then the vertex will effectively not get imported into
     * Neptune Analytics when preserveDefaultVertexLabels is set to false.</p>
     */
    inline NeptuneImportOptions& WithPreserveDefaultVertexLabels(bool value) { SetPreserveDefaultVertexLabels(value); return *this;}


    /**
     * <p>Neptune Analytics currently does not support user defined edge ids. The edge
     * ids are not imported by default. They are imported if <i>preserveEdgeIds</i> is
     * set to true, and ids are stored as properties on the relationships with the
     * property name <i>neptuneEdgeId</i>.</p>
     */
    inline bool GetPreserveEdgeIds() const{ return m_preserveEdgeIds; }

    /**
     * <p>Neptune Analytics currently does not support user defined edge ids. The edge
     * ids are not imported by default. They are imported if <i>preserveEdgeIds</i> is
     * set to true, and ids are stored as properties on the relationships with the
     * property name <i>neptuneEdgeId</i>.</p>
     */
    inline bool PreserveEdgeIdsHasBeenSet() const { return m_preserveEdgeIdsHasBeenSet; }

    /**
     * <p>Neptune Analytics currently does not support user defined edge ids. The edge
     * ids are not imported by default. They are imported if <i>preserveEdgeIds</i> is
     * set to true, and ids are stored as properties on the relationships with the
     * property name <i>neptuneEdgeId</i>.</p>
     */
    inline void SetPreserveEdgeIds(bool value) { m_preserveEdgeIdsHasBeenSet = true; m_preserveEdgeIds = value; }

    /**
     * <p>Neptune Analytics currently does not support user defined edge ids. The edge
     * ids are not imported by default. They are imported if <i>preserveEdgeIds</i> is
     * set to true, and ids are stored as properties on the relationships with the
     * property name <i>neptuneEdgeId</i>.</p>
     */
    inline NeptuneImportOptions& WithPreserveEdgeIds(bool value) { SetPreserveEdgeIds(value); return *this;}

  private:

    Aws::String m_s3ExportPath;
    bool m_s3ExportPathHasBeenSet = false;

    Aws::String m_s3ExportKmsKeyId;
    bool m_s3ExportKmsKeyIdHasBeenSet = false;

    bool m_preserveDefaultVertexLabels;
    bool m_preserveDefaultVertexLabelsHasBeenSet = false;

    bool m_preserveEdgeIds;
    bool m_preserveEdgeIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
