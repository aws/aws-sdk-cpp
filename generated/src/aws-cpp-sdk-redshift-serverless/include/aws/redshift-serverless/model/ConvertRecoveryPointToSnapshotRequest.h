/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class ConvertRecoveryPointToSnapshotRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ConvertRecoveryPointToSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConvertRecoveryPointToSnapshot"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the recovery point.</p>
     */
    inline const Aws::String& GetRecoveryPointId() const{ return m_recoveryPointId; }
    inline bool RecoveryPointIdHasBeenSet() const { return m_recoveryPointIdHasBeenSet; }
    inline void SetRecoveryPointId(const Aws::String& value) { m_recoveryPointIdHasBeenSet = true; m_recoveryPointId = value; }
    inline void SetRecoveryPointId(Aws::String&& value) { m_recoveryPointIdHasBeenSet = true; m_recoveryPointId = std::move(value); }
    inline void SetRecoveryPointId(const char* value) { m_recoveryPointIdHasBeenSet = true; m_recoveryPointId.assign(value); }
    inline ConvertRecoveryPointToSnapshotRequest& WithRecoveryPointId(const Aws::String& value) { SetRecoveryPointId(value); return *this;}
    inline ConvertRecoveryPointToSnapshotRequest& WithRecoveryPointId(Aws::String&& value) { SetRecoveryPointId(std::move(value)); return *this;}
    inline ConvertRecoveryPointToSnapshotRequest& WithRecoveryPointId(const char* value) { SetRecoveryPointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long to retain the snapshot.</p>
     */
    inline int GetRetentionPeriod() const{ return m_retentionPeriod; }
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }
    inline void SetRetentionPeriod(int value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }
    inline ConvertRecoveryPointToSnapshotRequest& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }
    inline ConvertRecoveryPointToSnapshotRequest& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}
    inline ConvertRecoveryPointToSnapshotRequest& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}
    inline ConvertRecoveryPointToSnapshotRequest& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/redshift-serverless/latest/APIReference/API_Tag.html">Tag
     * objects</a> to associate with the created snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ConvertRecoveryPointToSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ConvertRecoveryPointToSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ConvertRecoveryPointToSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ConvertRecoveryPointToSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_recoveryPointId;
    bool m_recoveryPointIdHasBeenSet = false;

    int m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
