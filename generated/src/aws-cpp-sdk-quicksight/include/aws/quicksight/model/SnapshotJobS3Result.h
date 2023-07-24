/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SnapshotS3DestinationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SnapshotJobResultErrorInfo.h>
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
   * <p>The Amazon S3 result from the snapshot job. The result includes the
   * <code>DestinationConfiguration</code> and the Amazon S3 Uri. If an error occured
   * during the job, the result returns information on the error.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SnapshotJobS3Result">AWS
   * API Reference</a></p>
   */
  class SnapshotJobS3Result
  {
  public:
    AWS_QUICKSIGHT_API SnapshotJobS3Result();
    AWS_QUICKSIGHT_API SnapshotJobS3Result(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotJobS3Result& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of Amazon S3 bucket configurations that are provided when you make a
     * <code>StartDashboardSnapshotJob</code> API call. </p>
     */
    inline const SnapshotS3DestinationConfiguration& GetS3DestinationConfiguration() const{ return m_s3DestinationConfiguration; }

    /**
     * <p>A list of Amazon S3 bucket configurations that are provided when you make a
     * <code>StartDashboardSnapshotJob</code> API call. </p>
     */
    inline bool S3DestinationConfigurationHasBeenSet() const { return m_s3DestinationConfigurationHasBeenSet; }

    /**
     * <p>A list of Amazon S3 bucket configurations that are provided when you make a
     * <code>StartDashboardSnapshotJob</code> API call. </p>
     */
    inline void SetS3DestinationConfiguration(const SnapshotS3DestinationConfiguration& value) { m_s3DestinationConfigurationHasBeenSet = true; m_s3DestinationConfiguration = value; }

    /**
     * <p>A list of Amazon S3 bucket configurations that are provided when you make a
     * <code>StartDashboardSnapshotJob</code> API call. </p>
     */
    inline void SetS3DestinationConfiguration(SnapshotS3DestinationConfiguration&& value) { m_s3DestinationConfigurationHasBeenSet = true; m_s3DestinationConfiguration = std::move(value); }

    /**
     * <p>A list of Amazon S3 bucket configurations that are provided when you make a
     * <code>StartDashboardSnapshotJob</code> API call. </p>
     */
    inline SnapshotJobS3Result& WithS3DestinationConfiguration(const SnapshotS3DestinationConfiguration& value) { SetS3DestinationConfiguration(value); return *this;}

    /**
     * <p>A list of Amazon S3 bucket configurations that are provided when you make a
     * <code>StartDashboardSnapshotJob</code> API call. </p>
     */
    inline SnapshotJobS3Result& WithS3DestinationConfiguration(SnapshotS3DestinationConfiguration&& value) { SetS3DestinationConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 Uri.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The Amazon S3 Uri.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 Uri.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The Amazon S3 Uri.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 Uri.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The Amazon S3 Uri.</p>
     */
    inline SnapshotJobS3Result& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 Uri.</p>
     */
    inline SnapshotJobS3Result& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 Uri.</p>
     */
    inline SnapshotJobS3Result& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>An array of error records that describe any failures that occur while the
     * dashboard snapshot job runs.</p>
     */
    inline const Aws::Vector<SnapshotJobResultErrorInfo>& GetErrorInfo() const{ return m_errorInfo; }

    /**
     * <p>An array of error records that describe any failures that occur while the
     * dashboard snapshot job runs.</p>
     */
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }

    /**
     * <p>An array of error records that describe any failures that occur while the
     * dashboard snapshot job runs.</p>
     */
    inline void SetErrorInfo(const Aws::Vector<SnapshotJobResultErrorInfo>& value) { m_errorInfoHasBeenSet = true; m_errorInfo = value; }

    /**
     * <p>An array of error records that describe any failures that occur while the
     * dashboard snapshot job runs.</p>
     */
    inline void SetErrorInfo(Aws::Vector<SnapshotJobResultErrorInfo>&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::move(value); }

    /**
     * <p>An array of error records that describe any failures that occur while the
     * dashboard snapshot job runs.</p>
     */
    inline SnapshotJobS3Result& WithErrorInfo(const Aws::Vector<SnapshotJobResultErrorInfo>& value) { SetErrorInfo(value); return *this;}

    /**
     * <p>An array of error records that describe any failures that occur while the
     * dashboard snapshot job runs.</p>
     */
    inline SnapshotJobS3Result& WithErrorInfo(Aws::Vector<SnapshotJobResultErrorInfo>&& value) { SetErrorInfo(std::move(value)); return *this;}

    /**
     * <p>An array of error records that describe any failures that occur while the
     * dashboard snapshot job runs.</p>
     */
    inline SnapshotJobS3Result& AddErrorInfo(const SnapshotJobResultErrorInfo& value) { m_errorInfoHasBeenSet = true; m_errorInfo.push_back(value); return *this; }

    /**
     * <p>An array of error records that describe any failures that occur while the
     * dashboard snapshot job runs.</p>
     */
    inline SnapshotJobS3Result& AddErrorInfo(SnapshotJobResultErrorInfo&& value) { m_errorInfoHasBeenSet = true; m_errorInfo.push_back(std::move(value)); return *this; }

  private:

    SnapshotS3DestinationConfiguration m_s3DestinationConfiguration;
    bool m_s3DestinationConfigurationHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::Vector<SnapshotJobResultErrorInfo> m_errorInfo;
    bool m_errorInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
