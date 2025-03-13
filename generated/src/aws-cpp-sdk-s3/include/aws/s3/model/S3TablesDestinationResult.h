/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p> The destination information for the metadata table configuration. The
   * destination table bucket must be in the same Region and Amazon Web Services
   * account as the general purpose bucket. The specified metadata table name must be
   * unique within the <code>aws_s3_metadata</code> namespace in the destination
   * table bucket. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/S3TablesDestinationResult">AWS
   * API Reference</a></p>
   */
  class S3TablesDestinationResult
  {
  public:
    AWS_S3_API S3TablesDestinationResult() = default;
    AWS_S3_API S3TablesDestinationResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API S3TablesDestinationResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for the table bucket that's specified as the
     * destination in the metadata table configuration. The destination table bucket
     * must be in the same Region and Amazon Web Services account as the general
     * purpose bucket. </p>
     */
    inline const Aws::String& GetTableBucketArn() const { return m_tableBucketArn; }
    inline bool TableBucketArnHasBeenSet() const { return m_tableBucketArnHasBeenSet; }
    template<typename TableBucketArnT = Aws::String>
    void SetTableBucketArn(TableBucketArnT&& value) { m_tableBucketArnHasBeenSet = true; m_tableBucketArn = std::forward<TableBucketArnT>(value); }
    template<typename TableBucketArnT = Aws::String>
    S3TablesDestinationResult& WithTableBucketArn(TableBucketArnT&& value) { SetTableBucketArn(std::forward<TableBucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name for the metadata table in your metadata table configuration. The
     * specified metadata table name must be unique within the
     * <code>aws_s3_metadata</code> namespace in the destination table bucket. </p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    S3TablesDestinationResult& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for the metadata table in the metadata table
     * configuration. The specified metadata table name must be unique within the
     * <code>aws_s3_metadata</code> namespace in the destination table bucket. </p>
     */
    inline const Aws::String& GetTableArn() const { return m_tableArn; }
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
    template<typename TableArnT = Aws::String>
    void SetTableArn(TableArnT&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::forward<TableArnT>(value); }
    template<typename TableArnT = Aws::String>
    S3TablesDestinationResult& WithTableArn(TableArnT&& value) { SetTableArn(std::forward<TableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The table bucket namespace for the metadata table in your metadata table
     * configuration. This value is always <code>aws_s3_metadata</code>. </p>
     */
    inline const Aws::String& GetTableNamespace() const { return m_tableNamespace; }
    inline bool TableNamespaceHasBeenSet() const { return m_tableNamespaceHasBeenSet; }
    template<typename TableNamespaceT = Aws::String>
    void SetTableNamespace(TableNamespaceT&& value) { m_tableNamespaceHasBeenSet = true; m_tableNamespace = std::forward<TableNamespaceT>(value); }
    template<typename TableNamespaceT = Aws::String>
    S3TablesDestinationResult& WithTableNamespace(TableNamespaceT&& value) { SetTableNamespace(std::forward<TableNamespaceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableBucketArn;
    bool m_tableBucketArnHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;

    Aws::String m_tableNamespace;
    bool m_tableNamespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
