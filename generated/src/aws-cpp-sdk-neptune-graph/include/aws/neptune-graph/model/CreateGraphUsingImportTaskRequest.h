/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/NeptuneGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/neptune-graph/model/VectorSearchConfiguration.h>
#include <aws/neptune-graph/model/ImportOptions.h>
#include <aws/neptune-graph/model/Format.h>
#include <aws/neptune-graph/model/ParquetType.h>
#include <aws/neptune-graph/model/BlankNodeHandling.h>
#include <utility>

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

  /**
   */
  class CreateGraphUsingImportTaskRequest : public NeptuneGraphRequest
  {
  public:
    AWS_NEPTUNEGRAPH_API CreateGraphUsingImportTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGraphUsingImportTask"; }

    AWS_NEPTUNEGRAPH_API Aws::String SerializePayload() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_NEPTUNEGRAPH_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>A name for the new Neptune Analytics graph to be created.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens. </p>
     */
    inline const Aws::String& GetGraphName() const{ return m_graphName; }
    inline bool GraphNameHasBeenSet() const { return m_graphNameHasBeenSet; }
    inline void SetGraphName(const Aws::String& value) { m_graphNameHasBeenSet = true; m_graphName = value; }
    inline void SetGraphName(Aws::String&& value) { m_graphNameHasBeenSet = true; m_graphName = std::move(value); }
    inline void SetGraphName(const char* value) { m_graphNameHasBeenSet = true; m_graphName.assign(value); }
    inline CreateGraphUsingImportTaskRequest& WithGraphName(const Aws::String& value) { SetGraphName(value); return *this;}
    inline CreateGraphUsingImportTaskRequest& WithGraphName(Aws::String&& value) { SetGraphName(std::move(value)); return *this;}
    inline CreateGraphUsingImportTaskRequest& WithGraphName(const char* value) { SetGraphName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds metadata tags to the new graph. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateGraphUsingImportTaskRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateGraphUsingImportTaskRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateGraphUsingImportTaskRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateGraphUsingImportTaskRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateGraphUsingImportTaskRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateGraphUsingImportTaskRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateGraphUsingImportTaskRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateGraphUsingImportTaskRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateGraphUsingImportTaskRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not the graph can be reachable over the internet. All
     * access to graphs is IAM authenticated. (<code>true</code> to enable, or
     * <code>false</code> to disable).</p>
     */
    inline bool GetPublicConnectivity() const{ return m_publicConnectivity; }
    inline bool PublicConnectivityHasBeenSet() const { return m_publicConnectivityHasBeenSet; }
    inline void SetPublicConnectivity(bool value) { m_publicConnectivityHasBeenSet = true; m_publicConnectivity = value; }
    inline CreateGraphUsingImportTaskRequest& WithPublicConnectivity(bool value) { SetPublicConnectivity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a KMS key to use to encrypt data imported into the new graph.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const{ return m_kmsKeyIdentifier; }
    inline bool KmsKeyIdentifierHasBeenSet() const { return m_kmsKeyIdentifierHasBeenSet; }
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = value; }
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::move(value); }
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier.assign(value); }
    inline CreateGraphUsingImportTaskRequest& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}
    inline CreateGraphUsingImportTaskRequest& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}
    inline CreateGraphUsingImportTaskRequest& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of dimensions for vector embeddings that will be loaded
     * into the graph. The value is specified as <code>dimension=</code>value. Max =
     * 65,535 </p>
     */
    inline const VectorSearchConfiguration& GetVectorSearchConfiguration() const{ return m_vectorSearchConfiguration; }
    inline bool VectorSearchConfigurationHasBeenSet() const { return m_vectorSearchConfigurationHasBeenSet; }
    inline void SetVectorSearchConfiguration(const VectorSearchConfiguration& value) { m_vectorSearchConfigurationHasBeenSet = true; m_vectorSearchConfiguration = value; }
    inline void SetVectorSearchConfiguration(VectorSearchConfiguration&& value) { m_vectorSearchConfigurationHasBeenSet = true; m_vectorSearchConfiguration = std::move(value); }
    inline CreateGraphUsingImportTaskRequest& WithVectorSearchConfiguration(const VectorSearchConfiguration& value) { SetVectorSearchConfiguration(value); return *this;}
    inline CreateGraphUsingImportTaskRequest& WithVectorSearchConfiguration(VectorSearchConfiguration&& value) { SetVectorSearchConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of replicas in other AZs to provision on the new graph after
     * import. Default = 0, Min = 0, Max = 2.</p>  <p> Additional charges
     * equivalent to the m-NCUs selected for the graph apply for each replica. </p>
     * 
     */
    inline int GetReplicaCount() const{ return m_replicaCount; }
    inline bool ReplicaCountHasBeenSet() const { return m_replicaCountHasBeenSet; }
    inline void SetReplicaCount(int value) { m_replicaCountHasBeenSet = true; m_replicaCount = value; }
    inline CreateGraphUsingImportTaskRequest& WithReplicaCount(int value) { SetReplicaCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not to enable deletion protection on the graph. The
     * graph can’t be deleted when deletion protection is enabled. (<code>true</code>
     * or <code>false</code>).</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline CreateGraphUsingImportTaskRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains options for controlling the import process. For example, if the
     * <code>failOnError</code> key is set to <code>false</code>, the import skips
     * problem data and attempts to continue (whereas if set to <code>true</code>, the
     * default, or if omitted, the import operation halts immediately when an error is
     * encountered.</p>
     */
    inline const ImportOptions& GetImportOptions() const{ return m_importOptions; }
    inline bool ImportOptionsHasBeenSet() const { return m_importOptionsHasBeenSet; }
    inline void SetImportOptions(const ImportOptions& value) { m_importOptionsHasBeenSet = true; m_importOptions = value; }
    inline void SetImportOptions(ImportOptions&& value) { m_importOptionsHasBeenSet = true; m_importOptions = std::move(value); }
    inline CreateGraphUsingImportTaskRequest& WithImportOptions(const ImportOptions& value) { SetImportOptions(value); return *this;}
    inline CreateGraphUsingImportTaskRequest& WithImportOptions(ImportOptions&& value) { SetImportOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum provisioned memory-optimized Neptune Capacity Units (m-NCUs) to
     * use for the graph. Default: 1024, or the approved upper limit for your
     * account.</p> <p> If both the minimum and maximum values are specified, the max
     * of the <code>min-provisioned-memory</code> and <code>max-provisioned
     * memory</code> is used to create the graph. If neither value is specified 128
     * m-NCUs are used.</p>
     */
    inline int GetMaxProvisionedMemory() const{ return m_maxProvisionedMemory; }
    inline bool MaxProvisionedMemoryHasBeenSet() const { return m_maxProvisionedMemoryHasBeenSet; }
    inline void SetMaxProvisionedMemory(int value) { m_maxProvisionedMemoryHasBeenSet = true; m_maxProvisionedMemory = value; }
    inline CreateGraphUsingImportTaskRequest& WithMaxProvisionedMemory(int value) { SetMaxProvisionedMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum provisioned memory-optimized Neptune Capacity Units (m-NCUs) to
     * use for the graph. Default: 128</p>
     */
    inline int GetMinProvisionedMemory() const{ return m_minProvisionedMemory; }
    inline bool MinProvisionedMemoryHasBeenSet() const { return m_minProvisionedMemoryHasBeenSet; }
    inline void SetMinProvisionedMemory(int value) { m_minProvisionedMemoryHasBeenSet = true; m_minProvisionedMemory = value; }
    inline CreateGraphUsingImportTaskRequest& WithMinProvisionedMemory(int value) { SetMinProvisionedMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to <code>true</code>, the task halts when an import error is
     * encountered. If set to <code>false</code>, the task skips the data that caused
     * the error and continues if possible.</p>
     */
    inline bool GetFailOnError() const{ return m_failOnError; }
    inline bool FailOnErrorHasBeenSet() const { return m_failOnErrorHasBeenSet; }
    inline void SetFailOnError(bool value) { m_failOnErrorHasBeenSet = true; m_failOnError = value; }
    inline CreateGraphUsingImportTaskRequest& WithFailOnError(bool value) { SetFailOnError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL identifying to the location of the data to be imported. This can be an
     * Amazon S3 path, or can point to a Neptune database endpoint or snapshot.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline CreateGraphUsingImportTaskRequest& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline CreateGraphUsingImportTaskRequest& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline CreateGraphUsingImportTaskRequest& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the format of S3 data to be imported. Valid values are
     * <code>CSV</code>, which identifies the <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-gremlin.html">Gremlin
     * CSV format</a>, <code>OPEN_CYPHER</code>, which identifies the <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/bulk-load-tutorial-format-opencypher.html">openCypher
     * load format</a>, or <code>ntriples</code>, which identifies the <a
     * href="https://docs.aws.amazon.com/neptune-analytics/latest/userguide/using-rdf-data.html">RDF
     * n-triples</a> format.</p>
     */
    inline const Format& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const Format& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(Format&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline CreateGraphUsingImportTaskRequest& WithFormat(const Format& value) { SetFormat(value); return *this;}
    inline CreateGraphUsingImportTaskRequest& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parquet type of the import task.</p>
     */
    inline const ParquetType& GetParquetType() const{ return m_parquetType; }
    inline bool ParquetTypeHasBeenSet() const { return m_parquetTypeHasBeenSet; }
    inline void SetParquetType(const ParquetType& value) { m_parquetTypeHasBeenSet = true; m_parquetType = value; }
    inline void SetParquetType(ParquetType&& value) { m_parquetTypeHasBeenSet = true; m_parquetType = std::move(value); }
    inline CreateGraphUsingImportTaskRequest& WithParquetType(const ParquetType& value) { SetParquetType(value); return *this;}
    inline CreateGraphUsingImportTaskRequest& WithParquetType(ParquetType&& value) { SetParquetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method to handle blank nodes in the dataset. Currently, only
     * <code>convertToIri</code> is supported, meaning blank nodes are converted to
     * unique IRIs at load time. Must be provided when format is <code>ntriples</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/neptune-analytics/latest/userguide/using-rdf-data.html#rdf-handling">Handling
     * RDF values</a>.</p>
     */
    inline const BlankNodeHandling& GetBlankNodeHandling() const{ return m_blankNodeHandling; }
    inline bool BlankNodeHandlingHasBeenSet() const { return m_blankNodeHandlingHasBeenSet; }
    inline void SetBlankNodeHandling(const BlankNodeHandling& value) { m_blankNodeHandlingHasBeenSet = true; m_blankNodeHandling = value; }
    inline void SetBlankNodeHandling(BlankNodeHandling&& value) { m_blankNodeHandlingHasBeenSet = true; m_blankNodeHandling = std::move(value); }
    inline CreateGraphUsingImportTaskRequest& WithBlankNodeHandling(const BlankNodeHandling& value) { SetBlankNodeHandling(value); return *this;}
    inline CreateGraphUsingImportTaskRequest& WithBlankNodeHandling(BlankNodeHandling&& value) { SetBlankNodeHandling(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that will allow access to the data that is to be
     * imported.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateGraphUsingImportTaskRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateGraphUsingImportTaskRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateGraphUsingImportTaskRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_graphName;
    bool m_graphNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_publicConnectivity;
    bool m_publicConnectivityHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;

    VectorSearchConfiguration m_vectorSearchConfiguration;
    bool m_vectorSearchConfigurationHasBeenSet = false;

    int m_replicaCount;
    bool m_replicaCountHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    ImportOptions m_importOptions;
    bool m_importOptionsHasBeenSet = false;

    int m_maxProvisionedMemory;
    bool m_maxProvisionedMemoryHasBeenSet = false;

    int m_minProvisionedMemory;
    bool m_minProvisionedMemoryHasBeenSet = false;

    bool m_failOnError;
    bool m_failOnErrorHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Format m_format;
    bool m_formatHasBeenSet = false;

    ParquetType m_parquetType;
    bool m_parquetTypeHasBeenSet = false;

    BlankNodeHandling m_blankNodeHandling;
    bool m_blankNodeHandlingHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
