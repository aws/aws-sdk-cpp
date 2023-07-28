/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>An optional structure that contains the Amazon S3 bucket configuration that
   * the generated snapshots are stored in. If you don't provide this information,
   * generated snapshots are stored in the default Amazon QuickSight
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/S3BucketConfiguration">AWS
   * API Reference</a></p>
   */
  class S3BucketConfiguration
  {
  public:
    AWS_QUICKSIGHT_API S3BucketConfiguration();
    AWS_QUICKSIGHT_API S3BucketConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API S3BucketConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an existing Amazon S3 bucket where the generated snapshot
     * artifacts are sent.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of an existing Amazon S3 bucket where the generated snapshot
     * artifacts are sent.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of an existing Amazon S3 bucket where the generated snapshot
     * artifacts are sent.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of an existing Amazon S3 bucket where the generated snapshot
     * artifacts are sent.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of an existing Amazon S3 bucket where the generated snapshot
     * artifacts are sent.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of an existing Amazon S3 bucket where the generated snapshot
     * artifacts are sent.</p>
     */
    inline S3BucketConfiguration& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of an existing Amazon S3 bucket where the generated snapshot
     * artifacts are sent.</p>
     */
    inline S3BucketConfiguration& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of an existing Amazon S3 bucket where the generated snapshot
     * artifacts are sent.</p>
     */
    inline S3BucketConfiguration& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The prefix of the Amazon S3 bucket that the generated snapshots are stored
     * in.</p>
     */
    inline const Aws::String& GetBucketPrefix() const{ return m_bucketPrefix; }

    /**
     * <p>The prefix of the Amazon S3 bucket that the generated snapshots are stored
     * in.</p>
     */
    inline bool BucketPrefixHasBeenSet() const { return m_bucketPrefixHasBeenSet; }

    /**
     * <p>The prefix of the Amazon S3 bucket that the generated snapshots are stored
     * in.</p>
     */
    inline void SetBucketPrefix(const Aws::String& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = value; }

    /**
     * <p>The prefix of the Amazon S3 bucket that the generated snapshots are stored
     * in.</p>
     */
    inline void SetBucketPrefix(Aws::String&& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = std::move(value); }

    /**
     * <p>The prefix of the Amazon S3 bucket that the generated snapshots are stored
     * in.</p>
     */
    inline void SetBucketPrefix(const char* value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix.assign(value); }

    /**
     * <p>The prefix of the Amazon S3 bucket that the generated snapshots are stored
     * in.</p>
     */
    inline S3BucketConfiguration& WithBucketPrefix(const Aws::String& value) { SetBucketPrefix(value); return *this;}

    /**
     * <p>The prefix of the Amazon S3 bucket that the generated snapshots are stored
     * in.</p>
     */
    inline S3BucketConfiguration& WithBucketPrefix(Aws::String&& value) { SetBucketPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix of the Amazon S3 bucket that the generated snapshots are stored
     * in.</p>
     */
    inline S3BucketConfiguration& WithBucketPrefix(const char* value) { SetBucketPrefix(value); return *this;}


    /**
     * <p>The region that the Amazon S3 bucket is located in. The bucket must be
     * located in the same region that the <code>StartDashboardSnapshotJob</code> API
     * call is made.</p>
     */
    inline const Aws::String& GetBucketRegion() const{ return m_bucketRegion; }

    /**
     * <p>The region that the Amazon S3 bucket is located in. The bucket must be
     * located in the same region that the <code>StartDashboardSnapshotJob</code> API
     * call is made.</p>
     */
    inline bool BucketRegionHasBeenSet() const { return m_bucketRegionHasBeenSet; }

    /**
     * <p>The region that the Amazon S3 bucket is located in. The bucket must be
     * located in the same region that the <code>StartDashboardSnapshotJob</code> API
     * call is made.</p>
     */
    inline void SetBucketRegion(const Aws::String& value) { m_bucketRegionHasBeenSet = true; m_bucketRegion = value; }

    /**
     * <p>The region that the Amazon S3 bucket is located in. The bucket must be
     * located in the same region that the <code>StartDashboardSnapshotJob</code> API
     * call is made.</p>
     */
    inline void SetBucketRegion(Aws::String&& value) { m_bucketRegionHasBeenSet = true; m_bucketRegion = std::move(value); }

    /**
     * <p>The region that the Amazon S3 bucket is located in. The bucket must be
     * located in the same region that the <code>StartDashboardSnapshotJob</code> API
     * call is made.</p>
     */
    inline void SetBucketRegion(const char* value) { m_bucketRegionHasBeenSet = true; m_bucketRegion.assign(value); }

    /**
     * <p>The region that the Amazon S3 bucket is located in. The bucket must be
     * located in the same region that the <code>StartDashboardSnapshotJob</code> API
     * call is made.</p>
     */
    inline S3BucketConfiguration& WithBucketRegion(const Aws::String& value) { SetBucketRegion(value); return *this;}

    /**
     * <p>The region that the Amazon S3 bucket is located in. The bucket must be
     * located in the same region that the <code>StartDashboardSnapshotJob</code> API
     * call is made.</p>
     */
    inline S3BucketConfiguration& WithBucketRegion(Aws::String&& value) { SetBucketRegion(std::move(value)); return *this;}

    /**
     * <p>The region that the Amazon S3 bucket is located in. The bucket must be
     * located in the same region that the <code>StartDashboardSnapshotJob</code> API
     * call is made.</p>
     */
    inline S3BucketConfiguration& WithBucketRegion(const char* value) { SetBucketRegion(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_bucketPrefix;
    bool m_bucketPrefixHasBeenSet = false;

    Aws::String m_bucketRegion;
    bool m_bucketRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
