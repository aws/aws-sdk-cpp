/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class UpdateSnapshotRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API UpdateSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSnapshot"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The new retention period of the snapshot.</p>
     */
    inline int GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>The new retention period of the snapshot.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>The new retention period of the snapshot.</p>
     */
    inline void SetRetentionPeriod(int value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>The new retention period of the snapshot.</p>
     */
    inline UpdateSnapshotRequest& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}


    /**
     * <p>The name of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }

    /**
     * <p>The name of the snapshot.</p>
     */
    inline UpdateSnapshotRequest& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The name of the snapshot.</p>
     */
    inline UpdateSnapshotRequest& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the snapshot.</p>
     */
    inline UpdateSnapshotRequest& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}

  private:

    int m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
