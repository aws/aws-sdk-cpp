/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about the server-side encryption for the table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDynamoDbTableSseDescription">AWS
   * API Reference</a></p>
   */
  class AwsDynamoDbTableSseDescription
  {
  public:
    AWS_SECURITYHUB_API AwsDynamoDbTableSseDescription();
    AWS_SECURITYHUB_API AwsDynamoDbTableSseDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableSseDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If the key is inaccessible, the date and time when DynamoDB detected that the
     * key was inaccessible.</p> <p>Uses the <code>date-time</code> format specified in
     * <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetInaccessibleEncryptionDateTime() const{ return m_inaccessibleEncryptionDateTime; }

    /**
     * <p>If the key is inaccessible, the date and time when DynamoDB detected that the
     * key was inaccessible.</p> <p>Uses the <code>date-time</code> format specified in
     * <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool InaccessibleEncryptionDateTimeHasBeenSet() const { return m_inaccessibleEncryptionDateTimeHasBeenSet; }

    /**
     * <p>If the key is inaccessible, the date and time when DynamoDB detected that the
     * key was inaccessible.</p> <p>Uses the <code>date-time</code> format specified in
     * <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetInaccessibleEncryptionDateTime(const Aws::String& value) { m_inaccessibleEncryptionDateTimeHasBeenSet = true; m_inaccessibleEncryptionDateTime = value; }

    /**
     * <p>If the key is inaccessible, the date and time when DynamoDB detected that the
     * key was inaccessible.</p> <p>Uses the <code>date-time</code> format specified in
     * <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetInaccessibleEncryptionDateTime(Aws::String&& value) { m_inaccessibleEncryptionDateTimeHasBeenSet = true; m_inaccessibleEncryptionDateTime = std::move(value); }

    /**
     * <p>If the key is inaccessible, the date and time when DynamoDB detected that the
     * key was inaccessible.</p> <p>Uses the <code>date-time</code> format specified in
     * <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetInaccessibleEncryptionDateTime(const char* value) { m_inaccessibleEncryptionDateTimeHasBeenSet = true; m_inaccessibleEncryptionDateTime.assign(value); }

    /**
     * <p>If the key is inaccessible, the date and time when DynamoDB detected that the
     * key was inaccessible.</p> <p>Uses the <code>date-time</code> format specified in
     * <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsDynamoDbTableSseDescription& WithInaccessibleEncryptionDateTime(const Aws::String& value) { SetInaccessibleEncryptionDateTime(value); return *this;}

    /**
     * <p>If the key is inaccessible, the date and time when DynamoDB detected that the
     * key was inaccessible.</p> <p>Uses the <code>date-time</code> format specified in
     * <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsDynamoDbTableSseDescription& WithInaccessibleEncryptionDateTime(Aws::String&& value) { SetInaccessibleEncryptionDateTime(std::move(value)); return *this;}

    /**
     * <p>If the key is inaccessible, the date and time when DynamoDB detected that the
     * key was inaccessible.</p> <p>Uses the <code>date-time</code> format specified in
     * <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsDynamoDbTableSseDescription& WithInaccessibleEncryptionDateTime(const char* value) { SetInaccessibleEncryptionDateTime(value); return *this;}


    /**
     * <p>The status of the server-side encryption.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the server-side encryption.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the server-side encryption.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the server-side encryption.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the server-side encryption.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the server-side encryption.</p>
     */
    inline AwsDynamoDbTableSseDescription& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the server-side encryption.</p>
     */
    inline AwsDynamoDbTableSseDescription& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the server-side encryption.</p>
     */
    inline AwsDynamoDbTableSseDescription& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The type of server-side encryption.</p>
     */
    inline const Aws::String& GetSseType() const{ return m_sseType; }

    /**
     * <p>The type of server-side encryption.</p>
     */
    inline bool SseTypeHasBeenSet() const { return m_sseTypeHasBeenSet; }

    /**
     * <p>The type of server-side encryption.</p>
     */
    inline void SetSseType(const Aws::String& value) { m_sseTypeHasBeenSet = true; m_sseType = value; }

    /**
     * <p>The type of server-side encryption.</p>
     */
    inline void SetSseType(Aws::String&& value) { m_sseTypeHasBeenSet = true; m_sseType = std::move(value); }

    /**
     * <p>The type of server-side encryption.</p>
     */
    inline void SetSseType(const char* value) { m_sseTypeHasBeenSet = true; m_sseType.assign(value); }

    /**
     * <p>The type of server-side encryption.</p>
     */
    inline AwsDynamoDbTableSseDescription& WithSseType(const Aws::String& value) { SetSseType(value); return *this;}

    /**
     * <p>The type of server-side encryption.</p>
     */
    inline AwsDynamoDbTableSseDescription& WithSseType(Aws::String&& value) { SetSseType(std::move(value)); return *this;}

    /**
     * <p>The type of server-side encryption.</p>
     */
    inline AwsDynamoDbTableSseDescription& WithSseType(const char* value) { SetSseType(value); return *this;}


    /**
     * <p>The ARN of the KMS key that is used for the KMS encryption.</p>
     */
    inline const Aws::String& GetKmsMasterKeyArn() const{ return m_kmsMasterKeyArn; }

    /**
     * <p>The ARN of the KMS key that is used for the KMS encryption.</p>
     */
    inline bool KmsMasterKeyArnHasBeenSet() const { return m_kmsMasterKeyArnHasBeenSet; }

    /**
     * <p>The ARN of the KMS key that is used for the KMS encryption.</p>
     */
    inline void SetKmsMasterKeyArn(const Aws::String& value) { m_kmsMasterKeyArnHasBeenSet = true; m_kmsMasterKeyArn = value; }

    /**
     * <p>The ARN of the KMS key that is used for the KMS encryption.</p>
     */
    inline void SetKmsMasterKeyArn(Aws::String&& value) { m_kmsMasterKeyArnHasBeenSet = true; m_kmsMasterKeyArn = std::move(value); }

    /**
     * <p>The ARN of the KMS key that is used for the KMS encryption.</p>
     */
    inline void SetKmsMasterKeyArn(const char* value) { m_kmsMasterKeyArnHasBeenSet = true; m_kmsMasterKeyArn.assign(value); }

    /**
     * <p>The ARN of the KMS key that is used for the KMS encryption.</p>
     */
    inline AwsDynamoDbTableSseDescription& WithKmsMasterKeyArn(const Aws::String& value) { SetKmsMasterKeyArn(value); return *this;}

    /**
     * <p>The ARN of the KMS key that is used for the KMS encryption.</p>
     */
    inline AwsDynamoDbTableSseDescription& WithKmsMasterKeyArn(Aws::String&& value) { SetKmsMasterKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the KMS key that is used for the KMS encryption.</p>
     */
    inline AwsDynamoDbTableSseDescription& WithKmsMasterKeyArn(const char* value) { SetKmsMasterKeyArn(value); return *this;}

  private:

    Aws::String m_inaccessibleEncryptionDateTime;
    bool m_inaccessibleEncryptionDateTimeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_sseType;
    bool m_sseTypeHasBeenSet = false;

    Aws::String m_kmsMasterKeyArn;
    bool m_kmsMasterKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
