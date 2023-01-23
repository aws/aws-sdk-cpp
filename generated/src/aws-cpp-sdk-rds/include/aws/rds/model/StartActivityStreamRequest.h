/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ActivityStreamMode.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class StartActivityStreamRequest : public RDSRequest
  {
  public:
    AWS_RDS_API StartActivityStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartActivityStream"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the DB cluster, for example,
     * <code>arn:aws:rds:us-east-1:12345667890:cluster:das-cluster</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB cluster, for example,
     * <code>arn:aws:rds:us-east-1:12345667890:cluster:das-cluster</code>.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB cluster, for example,
     * <code>arn:aws:rds:us-east-1:12345667890:cluster:das-cluster</code>.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB cluster, for example,
     * <code>arn:aws:rds:us-east-1:12345667890:cluster:das-cluster</code>.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB cluster, for example,
     * <code>arn:aws:rds:us-east-1:12345667890:cluster:das-cluster</code>.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB cluster, for example,
     * <code>arn:aws:rds:us-east-1:12345667890:cluster:das-cluster</code>.</p>
     */
    inline StartActivityStreamRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DB cluster, for example,
     * <code>arn:aws:rds:us-east-1:12345667890:cluster:das-cluster</code>.</p>
     */
    inline StartActivityStreamRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DB cluster, for example,
     * <code>arn:aws:rds:us-east-1:12345667890:cluster:das-cluster</code>.</p>
     */
    inline StartActivityStreamRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Specifies the mode of the database activity stream. Database events such as a
     * change or access generate an activity stream event. The database session can
     * handle these events either synchronously or asynchronously.</p>
     */
    inline const ActivityStreamMode& GetMode() const{ return m_mode; }

    /**
     * <p>Specifies the mode of the database activity stream. Database events such as a
     * change or access generate an activity stream event. The database session can
     * handle these events either synchronously or asynchronously.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>Specifies the mode of the database activity stream. Database events such as a
     * change or access generate an activity stream event. The database session can
     * handle these events either synchronously or asynchronously.</p>
     */
    inline void SetMode(const ActivityStreamMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>Specifies the mode of the database activity stream. Database events such as a
     * change or access generate an activity stream event. The database session can
     * handle these events either synchronously or asynchronously.</p>
     */
    inline void SetMode(ActivityStreamMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>Specifies the mode of the database activity stream. Database events such as a
     * change or access generate an activity stream event. The database session can
     * handle these events either synchronously or asynchronously.</p>
     */
    inline StartActivityStreamRequest& WithMode(const ActivityStreamMode& value) { SetMode(value); return *this;}

    /**
     * <p>Specifies the mode of the database activity stream. Database events such as a
     * change or access generate an activity stream event. The database session can
     * handle these events either synchronously or asynchronously.</p>
     */
    inline StartActivityStreamRequest& WithMode(ActivityStreamMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services KMS key identifier for encrypting messages in the
     * database activity stream. The Amazon Web Services KMS key identifier is the key
     * ARN, key ID, alias ARN, or alias name for the KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Web Services KMS key identifier for encrypting messages in the
     * database activity stream. The Amazon Web Services KMS key identifier is the key
     * ARN, key ID, alias ARN, or alias name for the KMS key.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services KMS key identifier for encrypting messages in the
     * database activity stream. The Amazon Web Services KMS key identifier is the key
     * ARN, key ID, alias ARN, or alias name for the KMS key.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Web Services KMS key identifier for encrypting messages in the
     * database activity stream. The Amazon Web Services KMS key identifier is the key
     * ARN, key ID, alias ARN, or alias name for the KMS key.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for encrypting messages in the
     * database activity stream. The Amazon Web Services KMS key identifier is the key
     * ARN, key ID, alias ARN, or alias name for the KMS key.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for encrypting messages in the
     * database activity stream. The Amazon Web Services KMS key identifier is the key
     * ARN, key ID, alias ARN, or alias name for the KMS key.</p>
     */
    inline StartActivityStreamRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for encrypting messages in the
     * database activity stream. The Amazon Web Services KMS key identifier is the key
     * ARN, key ID, alias ARN, or alias name for the KMS key.</p>
     */
    inline StartActivityStreamRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for encrypting messages in the
     * database activity stream. The Amazon Web Services KMS key identifier is the key
     * ARN, key ID, alias ARN, or alias name for the KMS key.</p>
     */
    inline StartActivityStreamRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Specifies whether or not the database activity stream is to start as soon as
     * possible, regardless of the maintenance window for the database.</p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /**
     * <p>Specifies whether or not the database activity stream is to start as soon as
     * possible, regardless of the maintenance window for the database.</p>
     */
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }

    /**
     * <p>Specifies whether or not the database activity stream is to start as soon as
     * possible, regardless of the maintenance window for the database.</p>
     */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /**
     * <p>Specifies whether or not the database activity stream is to start as soon as
     * possible, regardless of the maintenance window for the database.</p>
     */
    inline StartActivityStreamRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}


    /**
     * <p>Specifies whether the database activity stream includes engine-native audit
     * fields. This option only applies to an Oracle DB instance. By default, no
     * engine-native audit fields are included.</p>
     */
    inline bool GetEngineNativeAuditFieldsIncluded() const{ return m_engineNativeAuditFieldsIncluded; }

    /**
     * <p>Specifies whether the database activity stream includes engine-native audit
     * fields. This option only applies to an Oracle DB instance. By default, no
     * engine-native audit fields are included.</p>
     */
    inline bool EngineNativeAuditFieldsIncludedHasBeenSet() const { return m_engineNativeAuditFieldsIncludedHasBeenSet; }

    /**
     * <p>Specifies whether the database activity stream includes engine-native audit
     * fields. This option only applies to an Oracle DB instance. By default, no
     * engine-native audit fields are included.</p>
     */
    inline void SetEngineNativeAuditFieldsIncluded(bool value) { m_engineNativeAuditFieldsIncludedHasBeenSet = true; m_engineNativeAuditFieldsIncluded = value; }

    /**
     * <p>Specifies whether the database activity stream includes engine-native audit
     * fields. This option only applies to an Oracle DB instance. By default, no
     * engine-native audit fields are included.</p>
     */
    inline StartActivityStreamRequest& WithEngineNativeAuditFieldsIncluded(bool value) { SetEngineNativeAuditFieldsIncluded(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    ActivityStreamMode m_mode;
    bool m_modeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet = false;

    bool m_engineNativeAuditFieldsIncluded;
    bool m_engineNativeAuditFieldsIncludedHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
