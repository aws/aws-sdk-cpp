/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/S3TablesBucketType.h>
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
   * <p> The destination information for the S3 Metadata configuration.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DestinationResult">AWS
   * API Reference</a></p>
   */
  class DestinationResult
  {
  public:
    AWS_S3_API DestinationResult() = default;
    AWS_S3_API DestinationResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API DestinationResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> The type of the table bucket where the metadata configuration is stored. The
     * <code>aws</code> value indicates an Amazon Web Services managed table bucket,
     * and the <code>customer</code> value indicates a customer-managed table bucket.
     * V2 metadata configurations are stored in Amazon Web Services managed table
     * buckets, and V1 metadata configurations are stored in customer-managed table
     * buckets. </p>
     */
    inline S3TablesBucketType GetTableBucketType() const { return m_tableBucketType; }
    inline bool TableBucketTypeHasBeenSet() const { return m_tableBucketTypeHasBeenSet; }
    inline void SetTableBucketType(S3TablesBucketType value) { m_tableBucketTypeHasBeenSet = true; m_tableBucketType = value; }
    inline DestinationResult& WithTableBucketType(S3TablesBucketType value) { SetTableBucketType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the table bucket where the metadata
     * configuration is stored. </p>
     */
    inline const Aws::String& GetTableBucketArn() const { return m_tableBucketArn; }
    inline bool TableBucketArnHasBeenSet() const { return m_tableBucketArnHasBeenSet; }
    template<typename TableBucketArnT = Aws::String>
    void SetTableBucketArn(TableBucketArnT&& value) { m_tableBucketArnHasBeenSet = true; m_tableBucketArn = std::forward<TableBucketArnT>(value); }
    template<typename TableBucketArnT = Aws::String>
    DestinationResult& WithTableBucketArn(TableBucketArnT&& value) { SetTableBucketArn(std::forward<TableBucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The namespace in the table bucket where the metadata tables for a metadata
     * configuration are stored. </p>
     */
    inline const Aws::String& GetTableNamespace() const { return m_tableNamespace; }
    inline bool TableNamespaceHasBeenSet() const { return m_tableNamespaceHasBeenSet; }
    template<typename TableNamespaceT = Aws::String>
    void SetTableNamespace(TableNamespaceT&& value) { m_tableNamespaceHasBeenSet = true; m_tableNamespace = std::forward<TableNamespaceT>(value); }
    template<typename TableNamespaceT = Aws::String>
    DestinationResult& WithTableNamespace(TableNamespaceT&& value) { SetTableNamespace(std::forward<TableNamespaceT>(value)); return *this;}
    ///@}
  private:

    S3TablesBucketType m_tableBucketType{S3TablesBucketType::NOT_SET};
    bool m_tableBucketTypeHasBeenSet = false;

    Aws::String m_tableBucketArn;
    bool m_tableBucketArnHasBeenSet = false;

    Aws::String m_tableNamespace;
    bool m_tableNamespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
