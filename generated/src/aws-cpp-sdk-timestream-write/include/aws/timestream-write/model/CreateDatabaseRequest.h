/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/TimestreamWriteRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-write/model/Tag.h>
#include <utility>

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

  /**
   */
  class CreateDatabaseRequest : public TimestreamWriteRequest
  {
  public:
    AWS_TIMESTREAMWRITE_API CreateDatabaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDatabase"; }

    AWS_TIMESTREAMWRITE_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMWRITE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Timestream database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline CreateDatabaseRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline CreateDatabaseRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline CreateDatabaseRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The KMS key for the database. If the KMS key is not specified, the database
     * will be encrypted with a Timestream managed KMS key located in your account.
     * Refer to <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed KMS keys</a> for more info.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key for the database. If the KMS key is not specified, the database
     * will be encrypted with a Timestream managed KMS key located in your account.
     * Refer to <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed KMS keys</a> for more info.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The KMS key for the database. If the KMS key is not specified, the database
     * will be encrypted with a Timestream managed KMS key located in your account.
     * Refer to <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed KMS keys</a> for more info.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key for the database. If the KMS key is not specified, the database
     * will be encrypted with a Timestream managed KMS key located in your account.
     * Refer to <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed KMS keys</a> for more info.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The KMS key for the database. If the KMS key is not specified, the database
     * will be encrypted with a Timestream managed KMS key located in your account.
     * Refer to <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed KMS keys</a> for more info.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key for the database. If the KMS key is not specified, the database
     * will be encrypted with a Timestream managed KMS key located in your account.
     * Refer to <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed KMS keys</a> for more info.</p>
     */
    inline CreateDatabaseRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key for the database. If the KMS key is not specified, the database
     * will be encrypted with a Timestream managed KMS key located in your account.
     * Refer to <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed KMS keys</a> for more info.</p>
     */
    inline CreateDatabaseRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key for the database. If the KMS key is not specified, the database
     * will be encrypted with a Timestream managed KMS key located in your account.
     * Refer to <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed KMS keys</a> for more info.</p>
     */
    inline CreateDatabaseRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p> A list of key-value pairs to label the table. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p> A list of key-value pairs to label the table. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> A list of key-value pairs to label the table. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> A list of key-value pairs to label the table. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> A list of key-value pairs to label the table. </p>
     */
    inline CreateDatabaseRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p> A list of key-value pairs to label the table. </p>
     */
    inline CreateDatabaseRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> A list of key-value pairs to label the table. </p>
     */
    inline CreateDatabaseRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p> A list of key-value pairs to label the table. </p>
     */
    inline CreateDatabaseRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
