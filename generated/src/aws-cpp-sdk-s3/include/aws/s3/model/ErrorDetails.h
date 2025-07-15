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
   * <p> If an S3 Metadata V1 <code>CreateBucketMetadataTableConfiguration</code> or
   * V2 <code>CreateBucketMetadataConfiguration</code> request succeeds, but S3
   * Metadata was unable to create the table, this structure contains the error code
   * and error message. </p>  <p>If you created your S3 Metadata configuration
   * before July 15, 2025, we recommend that you delete and re-create your
   * configuration by using <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucketMetadataConfiguration.html">CreateBucketMetadataConfiguration</a>
   * so that you can expire journal table records and create a live inventory
   * table.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ErrorDetails">AWS API
   * Reference</a></p>
   */
  class ErrorDetails
  {
  public:
    AWS_S3_API ErrorDetails() = default;
    AWS_S3_API ErrorDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API ErrorDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> If the V1 <code>CreateBucketMetadataTableConfiguration</code> request
     * succeeds, but S3 Metadata was unable to create the table, this structure
     * contains the error code. The possible error codes and error messages are as
     * follows: </p> <ul> <li> <p> <code>AccessDeniedCreatingResources</code> - You
     * don't have sufficient permissions to create the required resources. Make sure
     * that you have <code>s3tables:CreateNamespace</code>,
     * <code>s3tables:CreateTable</code>, <code>s3tables:GetTable</code> and
     * <code>s3tables:PutTablePolicy</code> permissions, and then try again. To create
     * a new metadata table, you must delete the metadata configuration for this
     * bucket, and then create a new metadata configuration. </p> </li> <li> <p>
     * <code>AccessDeniedWritingToTable</code> - Unable to write to the metadata table
     * because of missing resource permissions. To fix the resource policy, Amazon S3
     * needs to create a new metadata table. To create a new metadata table, you must
     * delete the metadata configuration for this bucket, and then create a new
     * metadata configuration.</p> </li> <li> <p> <code>DestinationTableNotFound</code>
     * - The destination table doesn't exist. To create a new metadata table, you must
     * delete the metadata configuration for this bucket, and then create a new
     * metadata configuration.</p> </li> <li> <p> <code>ServerInternalError</code> - An
     * internal error has occurred. To create a new metadata table, you must delete the
     * metadata configuration for this bucket, and then create a new metadata
     * configuration.</p> </li> <li> <p> <code>TableAlreadyExists</code> - The table
     * that you specified already exists in the table bucket's namespace. Specify a
     * different table name. To create a new metadata table, you must delete the
     * metadata configuration for this bucket, and then create a new metadata
     * configuration.</p> </li> <li> <p> <code>TableBucketNotFound</code> - The table
     * bucket that you specified doesn't exist in this Amazon Web Services Region and
     * account. Create or choose a different table bucket. To create a new metadata
     * table, you must delete the metadata configuration for this bucket, and then
     * create a new metadata configuration.</p> </li> </ul> <p> If the V2
     * <code>CreateBucketMetadataConfiguration</code> request succeeds, but S3 Metadata
     * was unable to create the table, this structure contains the error code. The
     * possible error codes and error messages are as follows: </p> <ul> <li> <p>
     * <code>AccessDeniedCreatingResources</code> - You don't have sufficient
     * permissions to create the required resources. Make sure that you have
     * <code>s3tables:CreateTableBucket</code>, <code>s3tables:CreateNamespace</code>,
     * <code>s3tables:CreateTable</code>, <code>s3tables:GetTable</code>,
     * <code>s3tables:PutTablePolicy</code>, <code>kms:DescribeKey</code>, and
     * <code>s3tables:PutTableEncryption</code> permissions. Additionally, ensure that
     * the KMS key used to encrypt the table still exists, is active and has a resource
     * policy granting access to the S3 service principals
     * '<code>maintenance.s3tables.amazonaws.com</code>' and
     * '<code>metadata.s3.amazonaws.com</code>'. To create a new metadata table, you
     * must delete the metadata configuration for this bucket, and then create a new
     * metadata configuration. </p> </li> <li> <p>
     * <code>AccessDeniedWritingToTable</code> - Unable to write to the metadata table
     * because of missing resource permissions. To fix the resource policy, Amazon S3
     * needs to create a new metadata table. To create a new metadata table, you must
     * delete the metadata configuration for this bucket, and then create a new
     * metadata configuration.</p> </li> <li> <p> <code>DestinationTableNotFound</code>
     * - The destination table doesn't exist. To create a new metadata table, you must
     * delete the metadata configuration for this bucket, and then create a new
     * metadata configuration.</p> </li> <li> <p> <code>ServerInternalError</code> - An
     * internal error has occurred. To create a new metadata table, you must delete the
     * metadata configuration for this bucket, and then create a new metadata
     * configuration.</p> </li> <li> <p> <code>JournalTableAlreadyExists</code> - A
     * journal table already exists in the Amazon Web Services managed table bucket's
     * namespace. Delete the journal table, and then try again. To create a new
     * metadata table, you must delete the metadata configuration for this bucket, and
     * then create a new metadata configuration.</p> </li> <li> <p>
     * <code>InventoryTableAlreadyExists</code> - An inventory table already exists in
     * the Amazon Web Services managed table bucket's namespace. Delete the inventory
     * table, and then try again. To create a new metadata table, you must delete the
     * metadata configuration for this bucket, and then create a new metadata
     * configuration.</p> </li> <li> <p> <code>JournalTableNotAvailable</code> - The
     * journal table that the inventory table relies on has a <code>FAILED</code>
     * status. An inventory table requires a journal table with an <code>ACTIVE</code>
     * status. To create a new journal or inventory table, you must delete the metadata
     * configuration for this bucket, along with any journal or inventory tables, and
     * then create a new metadata configuration.</p> </li> <li> <p>
     * <code>NoSuchBucket</code> - The specified general purpose bucket does not
     * exist.</p> </li> </ul>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    ErrorDetails& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the V1 <code>CreateBucketMetadataTableConfiguration</code> request
     * succeeds, but S3 Metadata was unable to create the table, this structure
     * contains the error message. The possible error codes and error messages are as
     * follows: </p> <ul> <li> <p> <code>AccessDeniedCreatingResources</code> - You
     * don't have sufficient permissions to create the required resources. Make sure
     * that you have <code>s3tables:CreateNamespace</code>,
     * <code>s3tables:CreateTable</code>, <code>s3tables:GetTable</code> and
     * <code>s3tables:PutTablePolicy</code> permissions, and then try again. To create
     * a new metadata table, you must delete the metadata configuration for this
     * bucket, and then create a new metadata configuration. </p> </li> <li> <p>
     * <code>AccessDeniedWritingToTable</code> - Unable to write to the metadata table
     * because of missing resource permissions. To fix the resource policy, Amazon S3
     * needs to create a new metadata table. To create a new metadata table, you must
     * delete the metadata configuration for this bucket, and then create a new
     * metadata configuration.</p> </li> <li> <p> <code>DestinationTableNotFound</code>
     * - The destination table doesn't exist. To create a new metadata table, you must
     * delete the metadata configuration for this bucket, and then create a new
     * metadata configuration.</p> </li> <li> <p> <code>ServerInternalError</code> - An
     * internal error has occurred. To create a new metadata table, you must delete the
     * metadata configuration for this bucket, and then create a new metadata
     * configuration.</p> </li> <li> <p> <code>TableAlreadyExists</code> - The table
     * that you specified already exists in the table bucket's namespace. Specify a
     * different table name. To create a new metadata table, you must delete the
     * metadata configuration for this bucket, and then create a new metadata
     * configuration.</p> </li> <li> <p> <code>TableBucketNotFound</code> - The table
     * bucket that you specified doesn't exist in this Amazon Web Services Region and
     * account. Create or choose a different table bucket. To create a new metadata
     * table, you must delete the metadata configuration for this bucket, and then
     * create a new metadata configuration.</p> </li> </ul> <p> If the V2
     * <code>CreateBucketMetadataConfiguration</code> request succeeds, but S3 Metadata
     * was unable to create the table, this structure contains the error code. The
     * possible error codes and error messages are as follows: </p> <ul> <li> <p>
     * <code>AccessDeniedCreatingResources</code> - You don't have sufficient
     * permissions to create the required resources. Make sure that you have
     * <code>s3tables:CreateTableBucket</code>, <code>s3tables:CreateNamespace</code>,
     * <code>s3tables:CreateTable</code>, <code>s3tables:GetTable</code>,
     * <code>s3tables:PutTablePolicy</code>, <code>kms:DescribeKey</code>, and
     * <code>s3tables:PutTableEncryption</code> permissions. Additionally, ensure that
     * the KMS key used to encrypt the table still exists, is active and has a resource
     * policy granting access to the S3 service principals
     * '<code>maintenance.s3tables.amazonaws.com</code>' and
     * '<code>metadata.s3.amazonaws.com</code>'. To create a new metadata table, you
     * must delete the metadata configuration for this bucket, and then create a new
     * metadata configuration. </p> </li> <li> <p>
     * <code>AccessDeniedWritingToTable</code> - Unable to write to the metadata table
     * because of missing resource permissions. To fix the resource policy, Amazon S3
     * needs to create a new metadata table. To create a new metadata table, you must
     * delete the metadata configuration for this bucket, and then create a new
     * metadata configuration.</p> </li> <li> <p> <code>DestinationTableNotFound</code>
     * - The destination table doesn't exist. To create a new metadata table, you must
     * delete the metadata configuration for this bucket, and then create a new
     * metadata configuration.</p> </li> <li> <p> <code>ServerInternalError</code> - An
     * internal error has occurred. To create a new metadata table, you must delete the
     * metadata configuration for this bucket, and then create a new metadata
     * configuration.</p> </li> <li> <p> <code>JournalTableAlreadyExists</code> - A
     * journal table already exists in the Amazon Web Services managed table bucket's
     * namespace. Delete the journal table, and then try again. To create a new
     * metadata table, you must delete the metadata configuration for this bucket, and
     * then create a new metadata configuration.</p> </li> <li> <p>
     * <code>InventoryTableAlreadyExists</code> - An inventory table already exists in
     * the Amazon Web Services managed table bucket's namespace. Delete the inventory
     * table, and then try again. To create a new metadata table, you must delete the
     * metadata configuration for this bucket, and then create a new metadata
     * configuration.</p> </li> <li> <p> <code>JournalTableNotAvailable</code> - The
     * journal table that the inventory table relies on has a <code>FAILED</code>
     * status. An inventory table requires a journal table with an <code>ACTIVE</code>
     * status. To create a new journal or inventory table, you must delete the metadata
     * configuration for this bucket, along with any journal or inventory tables, and
     * then create a new metadata configuration.</p> </li> <li> <p>
     * <code>NoSuchBucket</code> - The specified general purpose bucket does not
     * exist.</p> </li> </ul>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    ErrorDetails& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
