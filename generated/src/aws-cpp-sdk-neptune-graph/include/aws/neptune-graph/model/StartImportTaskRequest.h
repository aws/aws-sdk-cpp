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
    AWS_NEPTUNEGRAPH_API StartImportTaskRequest();

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
    
    inline const ImportOptions& GetImportOptions() const{ return m_importOptions; }
    inline bool ImportOptionsHasBeenSet() const { return m_importOptionsHasBeenSet; }
    inline void SetImportOptions(const ImportOptions& value) { m_importOptionsHasBeenSet = true; m_importOptions = value; }
    inline void SetImportOptions(ImportOptions&& value) { m_importOptionsHasBeenSet = true; m_importOptions = std::move(value); }
    inline StartImportTaskRequest& WithImportOptions(const ImportOptions& value) { SetImportOptions(value); return *this;}
    inline StartImportTaskRequest& WithImportOptions(ImportOptions&& value) { SetImportOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, the task halts when an import error is encountered. If set to
     * false, the task skips the data that caused the error and continues if
     * possible.</p>
     */
    inline bool GetFailOnError() const{ return m_failOnError; }
    inline bool FailOnErrorHasBeenSet() const { return m_failOnErrorHasBeenSet; }
    inline void SetFailOnError(bool value) { m_failOnErrorHasBeenSet = true; m_failOnError = value; }
    inline StartImportTaskRequest& WithFailOnError(bool value) { SetFailOnError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL identifying the location of the data to be imported. This can be an
     * Amazon S3 path, or can point to a Neptune database endpoint or snapshot.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline StartImportTaskRequest& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline StartImportTaskRequest& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline StartImportTaskRequest& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the format of Amazon S3 data to be imported. Valid values are CSV,
     * which identifies the Gremlin CSV format or OPENCYPHER, which identies the
     * openCypher load format.</p>
     */
    inline const Format& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const Format& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(Format&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline StartImportTaskRequest& WithFormat(const Format& value) { SetFormat(value); return *this;}
    inline StartImportTaskRequest& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parquet type of the import task.</p>
     */
    inline const ParquetType& GetParquetType() const{ return m_parquetType; }
    inline bool ParquetTypeHasBeenSet() const { return m_parquetTypeHasBeenSet; }
    inline void SetParquetType(const ParquetType& value) { m_parquetTypeHasBeenSet = true; m_parquetType = value; }
    inline void SetParquetType(ParquetType&& value) { m_parquetTypeHasBeenSet = true; m_parquetType = std::move(value); }
    inline StartImportTaskRequest& WithParquetType(const ParquetType& value) { SetParquetType(value); return *this;}
    inline StartImportTaskRequest& WithParquetType(ParquetType&& value) { SetParquetType(std::move(value)); return *this;}
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
    inline StartImportTaskRequest& WithBlankNodeHandling(const BlankNodeHandling& value) { SetBlankNodeHandling(value); return *this;}
    inline StartImportTaskRequest& WithBlankNodeHandling(BlankNodeHandling&& value) { SetBlankNodeHandling(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline const Aws::String& GetGraphIdentifier() const{ return m_graphIdentifier; }
    inline bool GraphIdentifierHasBeenSet() const { return m_graphIdentifierHasBeenSet; }
    inline void SetGraphIdentifier(const Aws::String& value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier = value; }
    inline void SetGraphIdentifier(Aws::String&& value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier = std::move(value); }
    inline void SetGraphIdentifier(const char* value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier.assign(value); }
    inline StartImportTaskRequest& WithGraphIdentifier(const Aws::String& value) { SetGraphIdentifier(value); return *this;}
    inline StartImportTaskRequest& WithGraphIdentifier(Aws::String&& value) { SetGraphIdentifier(std::move(value)); return *this;}
    inline StartImportTaskRequest& WithGraphIdentifier(const char* value) { SetGraphIdentifier(value); return *this;}
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
    inline StartImportTaskRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline StartImportTaskRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline StartImportTaskRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}
  private:

    ImportOptions m_importOptions;
    bool m_importOptionsHasBeenSet = false;

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

    Aws::String m_graphIdentifier;
    bool m_graphIdentifierHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
