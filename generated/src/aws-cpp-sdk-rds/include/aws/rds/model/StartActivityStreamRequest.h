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

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the DB cluster, for example,
     * <code>arn:aws:rds:us-east-1:12345667890:cluster:das-cluster</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline StartActivityStreamRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline StartActivityStreamRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline StartActivityStreamRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the mode of the database activity stream. Database events such as a
     * change or access generate an activity stream event. The database session can
     * handle these events either synchronously or asynchronously.</p>
     */
    inline const ActivityStreamMode& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const ActivityStreamMode& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(ActivityStreamMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline StartActivityStreamRequest& WithMode(const ActivityStreamMode& value) { SetMode(value); return *this;}
    inline StartActivityStreamRequest& WithMode(ActivityStreamMode&& value) { SetMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for encrypting messages in the
     * database activity stream. The Amazon Web Services KMS key identifier is the key
     * ARN, key ID, alias ARN, or alias name for the KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline StartActivityStreamRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline StartActivityStreamRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline StartActivityStreamRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not the database activity stream is to start as soon as
     * possible, regardless of the maintenance window for the database.</p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }
    inline StartActivityStreamRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the database activity stream includes engine-native audit
     * fields. This option applies to an Oracle or Microsoft SQL Server DB instance. By
     * default, no engine-native audit fields are included.</p>
     */
    inline bool GetEngineNativeAuditFieldsIncluded() const{ return m_engineNativeAuditFieldsIncluded; }
    inline bool EngineNativeAuditFieldsIncludedHasBeenSet() const { return m_engineNativeAuditFieldsIncludedHasBeenSet; }
    inline void SetEngineNativeAuditFieldsIncluded(bool value) { m_engineNativeAuditFieldsIncludedHasBeenSet = true; m_engineNativeAuditFieldsIncluded = value; }
    inline StartActivityStreamRequest& WithEngineNativeAuditFieldsIncluded(bool value) { SetEngineNativeAuditFieldsIncluded(value); return *this;}
    ///@}
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
