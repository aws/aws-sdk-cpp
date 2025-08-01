﻿/**
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
   * <p> The destination information for a V1 S3 Metadata configuration. The
   * destination table bucket must be in the same Region and Amazon Web Services
   * account as the general purpose bucket. The specified metadata table name must be
   * unique within the <code>aws_s3_metadata</code> namespace in the destination
   * table bucket. </p>  <p>If you created your S3 Metadata configuration
   * before July 15, 2025, we recommend that you delete and re-create your
   * configuration by using <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucketMetadataConfiguration.html">CreateBucketMetadataConfiguration</a>
   * so that you can expire journal table records and create a live inventory
   * table.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/S3TablesDestination">AWS
   * API Reference</a></p>
   */
  class S3TablesDestination
  {
  public:
    AWS_S3_API S3TablesDestination() = default;
    AWS_S3_API S3TablesDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API S3TablesDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    S3TablesDestination& WithTableBucketArn(TableBucketArnT&& value) { SetTableBucketArn(std::forward<TableBucketArnT>(value)); return *this;}
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
    S3TablesDestination& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableBucketArn;
    bool m_tableBucketArnHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
