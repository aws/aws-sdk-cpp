/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sms/model/LicenseType.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class UpdateReplicationJobRequest : public SMSRequest
  {
  public:
    AWS_SMS_API UpdateReplicationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReplicationJob"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the replication job.</p>
     */
    inline const Aws::String& GetReplicationJobId() const{ return m_replicationJobId; }
    inline bool ReplicationJobIdHasBeenSet() const { return m_replicationJobIdHasBeenSet; }
    inline void SetReplicationJobId(const Aws::String& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = value; }
    inline void SetReplicationJobId(Aws::String&& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = std::move(value); }
    inline void SetReplicationJobId(const char* value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId.assign(value); }
    inline UpdateReplicationJobRequest& WithReplicationJobId(const Aws::String& value) { SetReplicationJobId(value); return *this;}
    inline UpdateReplicationJobRequest& WithReplicationJobId(Aws::String&& value) { SetReplicationJobId(std::move(value)); return *this;}
    inline UpdateReplicationJobRequest& WithReplicationJobId(const char* value) { SetReplicationJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time between consecutive replication runs, in hours.</p>
     */
    inline int GetFrequency() const{ return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(int value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline UpdateReplicationJobRequest& WithFrequency(int value) { SetFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the next replication run.</p>
     */
    inline const Aws::Utils::DateTime& GetNextReplicationRunStartTime() const{ return m_nextReplicationRunStartTime; }
    inline bool NextReplicationRunStartTimeHasBeenSet() const { return m_nextReplicationRunStartTimeHasBeenSet; }
    inline void SetNextReplicationRunStartTime(const Aws::Utils::DateTime& value) { m_nextReplicationRunStartTimeHasBeenSet = true; m_nextReplicationRunStartTime = value; }
    inline void SetNextReplicationRunStartTime(Aws::Utils::DateTime&& value) { m_nextReplicationRunStartTimeHasBeenSet = true; m_nextReplicationRunStartTime = std::move(value); }
    inline UpdateReplicationJobRequest& WithNextReplicationRunStartTime(const Aws::Utils::DateTime& value) { SetNextReplicationRunStartTime(value); return *this;}
    inline UpdateReplicationJobRequest& WithNextReplicationRunStartTime(Aws::Utils::DateTime&& value) { SetNextReplicationRunStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license type to be used for the AMI created by a successful replication
     * run.</p>
     */
    inline const LicenseType& GetLicenseType() const{ return m_licenseType; }
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
    inline void SetLicenseType(const LicenseType& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }
    inline void SetLicenseType(LicenseType&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }
    inline UpdateReplicationJobRequest& WithLicenseType(const LicenseType& value) { SetLicenseType(value); return *this;}
    inline UpdateReplicationJobRequest& WithLicenseType(LicenseType&& value) { SetLicenseType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role to be used by Server Migration Service.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }
    inline UpdateReplicationJobRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}
    inline UpdateReplicationJobRequest& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}
    inline UpdateReplicationJobRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the replication job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateReplicationJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateReplicationJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateReplicationJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of SMS-created AMIs to retain. The oldest is deleted after
     * the maximum number is reached and a new AMI is created.</p>
     */
    inline int GetNumberOfRecentAmisToKeep() const{ return m_numberOfRecentAmisToKeep; }
    inline bool NumberOfRecentAmisToKeepHasBeenSet() const { return m_numberOfRecentAmisToKeepHasBeenSet; }
    inline void SetNumberOfRecentAmisToKeep(int value) { m_numberOfRecentAmisToKeepHasBeenSet = true; m_numberOfRecentAmisToKeep = value; }
    inline UpdateReplicationJobRequest& WithNumberOfRecentAmisToKeep(int value) { SetNumberOfRecentAmisToKeep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, the replication job produces encrypted AMIs. For more information,
     * <code>KmsKeyId</code>.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline UpdateReplicationJobRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key for replication jobs that produce encrypted AMIs. This
     * value can be any of the following:</p> <ul> <li> <p>KMS key ID</p> </li> <li>
     * <p>KMS key alias</p> </li> <li> <p>ARN referring to the KMS key ID</p> </li>
     * <li> <p>ARN referring to the KMS key alias</p> </li> </ul> <p>If encrypted is
     * enabled but a KMS key ID is not specified, the customer's default KMS key for
     * Amazon EBS is used.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline UpdateReplicationJobRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline UpdateReplicationJobRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline UpdateReplicationJobRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}
  private:

    Aws::String m_replicationJobId;
    bool m_replicationJobIdHasBeenSet = false;

    int m_frequency;
    bool m_frequencyHasBeenSet = false;

    Aws::Utils::DateTime m_nextReplicationRunStartTime;
    bool m_nextReplicationRunStartTimeHasBeenSet = false;

    LicenseType m_licenseType;
    bool m_licenseTypeHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_numberOfRecentAmisToKeep;
    bool m_numberOfRecentAmisToKeepHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
