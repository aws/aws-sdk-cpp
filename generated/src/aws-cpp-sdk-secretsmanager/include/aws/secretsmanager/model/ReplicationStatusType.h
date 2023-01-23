/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/model/StatusType.h>
#include <aws/core/utils/DateTime.h>
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
namespace SecretsManager
{
namespace Model
{

  /**
   * <p>A replication object consisting of a <code>RegionReplicationStatus</code>
   * object and includes a Region, KMSKeyId, status, and status
   * message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ReplicationStatusType">AWS
   * API Reference</a></p>
   */
  class ReplicationStatusType
  {
  public:
    AWS_SECRETSMANAGER_API ReplicationStatusType();
    AWS_SECRETSMANAGER_API ReplicationStatusType(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API ReplicationStatusType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Region where replication occurs.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Region where replication occurs.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Region where replication occurs.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Region where replication occurs.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Region where replication occurs.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Region where replication occurs.</p>
     */
    inline ReplicationStatusType& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Region where replication occurs.</p>
     */
    inline ReplicationStatusType& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Region where replication occurs.</p>
     */
    inline ReplicationStatusType& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>Can be an <code>ARN</code>, <code>Key ID</code>, or <code>Alias</code>. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>Can be an <code>ARN</code>, <code>Key ID</code>, or <code>Alias</code>. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>Can be an <code>ARN</code>, <code>Key ID</code>, or <code>Alias</code>. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>Can be an <code>ARN</code>, <code>Key ID</code>, or <code>Alias</code>. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>Can be an <code>ARN</code>, <code>Key ID</code>, or <code>Alias</code>. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>Can be an <code>ARN</code>, <code>Key ID</code>, or <code>Alias</code>. </p>
     */
    inline ReplicationStatusType& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>Can be an <code>ARN</code>, <code>Key ID</code>, or <code>Alias</code>. </p>
     */
    inline ReplicationStatusType& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Can be an <code>ARN</code>, <code>Key ID</code>, or <code>Alias</code>. </p>
     */
    inline ReplicationStatusType& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The status can be <code>InProgress</code>, <code>Failed</code>, or
     * <code>InSync</code>.</p>
     */
    inline const StatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status can be <code>InProgress</code>, <code>Failed</code>, or
     * <code>InSync</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status can be <code>InProgress</code>, <code>Failed</code>, or
     * <code>InSync</code>.</p>
     */
    inline void SetStatus(const StatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status can be <code>InProgress</code>, <code>Failed</code>, or
     * <code>InSync</code>.</p>
     */
    inline void SetStatus(StatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status can be <code>InProgress</code>, <code>Failed</code>, or
     * <code>InSync</code>.</p>
     */
    inline ReplicationStatusType& WithStatus(const StatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status can be <code>InProgress</code>, <code>Failed</code>, or
     * <code>InSync</code>.</p>
     */
    inline ReplicationStatusType& WithStatus(StatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Status message such as "<i>Secret with this name already exists in this
     * region</i>".</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Status message such as "<i>Secret with this name already exists in this
     * region</i>".</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>Status message such as "<i>Secret with this name already exists in this
     * region</i>".</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>Status message such as "<i>Secret with this name already exists in this
     * region</i>".</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>Status message such as "<i>Secret with this name already exists in this
     * region</i>".</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>Status message such as "<i>Secret with this name already exists in this
     * region</i>".</p>
     */
    inline ReplicationStatusType& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Status message such as "<i>Secret with this name already exists in this
     * region</i>".</p>
     */
    inline ReplicationStatusType& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Status message such as "<i>Secret with this name already exists in this
     * region</i>".</p>
     */
    inline ReplicationStatusType& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessedDate() const{ return m_lastAccessedDate; }

    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline bool LastAccessedDateHasBeenSet() const { return m_lastAccessedDateHasBeenSet; }

    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline void SetLastAccessedDate(const Aws::Utils::DateTime& value) { m_lastAccessedDateHasBeenSet = true; m_lastAccessedDate = value; }

    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline void SetLastAccessedDate(Aws::Utils::DateTime&& value) { m_lastAccessedDateHasBeenSet = true; m_lastAccessedDate = std::move(value); }

    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline ReplicationStatusType& WithLastAccessedDate(const Aws::Utils::DateTime& value) { SetLastAccessedDate(value); return *this;}

    /**
     * <p>The date that the secret was last accessed in the Region. This field is
     * omitted if the secret has never been retrieved in the Region.</p>
     */
    inline ReplicationStatusType& WithLastAccessedDate(Aws::Utils::DateTime&& value) { SetLastAccessedDate(std::move(value)); return *this;}

  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    StatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastAccessedDate;
    bool m_lastAccessedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
