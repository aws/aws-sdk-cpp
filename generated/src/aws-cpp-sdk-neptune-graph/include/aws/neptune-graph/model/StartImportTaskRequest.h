/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/NeptuneGraphRequest.h>
#include <aws/neptune-graph/model/ImportOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class StartImportTaskRequest : public NeptuneGraphRequest
  {
  public:
    AWS_NEPTUNEGRAPH_API StartImportTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartImportTask"; }

    AWS_NEPTUNEGRAPH_API Aws::String SerializePayload() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_NEPTUNEGRAPH_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    
    inline const ImportOptions& GetImportOptions() const { return m_importOptions; }
    inline bool ImportOptionsHasBeenSet() const { return m_importOptionsHasBeenSet; }
    template<typename ImportOptionsT = ImportOptions>
    void SetImportOptions(ImportOptionsT&& value) { m_importOptionsHasBeenSet = true; m_importOptions = std::forward<ImportOptionsT>(value); }
    template<typename ImportOptionsT = ImportOptions>
    StartImportTaskRequest& WithImportOptions(ImportOptionsT&& value) { SetImportOptions(std::forward<ImportOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, the task halts when an import error is encountered. If set to
     * false, the task skips the data that caused the error and continues if
     * possible.</p>
     */
    inline bool GetFailOnError() const { return m_failOnError; }
    inline bool FailOnErrorHasBeenSet() const { return m_failOnErrorHasBeenSet; }
    inline void SetFailOnError(bool value) { m_failOnErrorHasBeenSet = true; m_failOnError = value; }
    inline StartImportTaskRequest& WithFailOnError(bool value) { SetFailOnError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL identifying the location of the data to be imported. This can be an
     * Amazon S3 path, or can point to a Neptune database endpoint or snapshot.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    StartImportTaskRequest& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the format of Amazon S3 data to be imported. Valid values are CSV,
     * which identifies the Gremlin CSV format or OPENCYPHER, which identies the
     * openCypher load format.</p>
     */
    inline Format GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(Format value) { m_formatHasBeenSet = true; m_format = value; }
    inline StartImportTaskRequest& WithFormat(Format value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parquet type of the import task.</p>
     */
    inline ParquetType GetParquetType() const { return m_parquetType; }
    inline bool ParquetTypeHasBeenSet() const { return m_parquetTypeHasBeenSet; }
    inline void SetParquetType(ParquetType value) { m_parquetTypeHasBeenSet = true; m_parquetType = value; }
    inline StartImportTaskRequest& WithParquetType(ParquetType value) { SetParquetType(value); return *this;}
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
    inline BlankNodeHandling GetBlankNodeHandling() const { return m_blankNodeHandling; }
    inline bool BlankNodeHandlingHasBeenSet() const { return m_blankNodeHandlingHasBeenSet; }
    inline void SetBlankNodeHandling(BlankNodeHandling value) { m_blankNodeHandlingHasBeenSet = true; m_blankNodeHandling = value; }
    inline StartImportTaskRequest& WithBlankNodeHandling(BlankNodeHandling value) { SetBlankNodeHandling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline const Aws::String& GetGraphIdentifier() const { return m_graphIdentifier; }
    inline bool GraphIdentifierHasBeenSet() const { return m_graphIdentifierHasBeenSet; }
    template<typename GraphIdentifierT = Aws::String>
    void SetGraphIdentifier(GraphIdentifierT&& value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier = std::forward<GraphIdentifierT>(value); }
    template<typename GraphIdentifierT = Aws::String>
    StartImportTaskRequest& WithGraphIdentifier(GraphIdentifierT&& value) { SetGraphIdentifier(std::forward<GraphIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that will allow access to the data that is to be
     * imported.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    StartImportTaskRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    ImportOptions m_importOptions;
    bool m_importOptionsHasBeenSet = false;

    bool m_failOnError{false};
    bool m_failOnErrorHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Format m_format{Format::NOT_SET};
    bool m_formatHasBeenSet = false;

    ParquetType m_parquetType{ParquetType::NOT_SET};
    bool m_parquetTypeHasBeenSet = false;

    BlankNodeHandling m_blankNodeHandling{BlankNodeHandling::NOT_SET};
    bool m_blankNodeHandlingHasBeenSet = false;

    Aws::String m_graphIdentifier;
    bool m_graphIdentifierHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
