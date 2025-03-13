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
    AWS_QUICKSIGHT_API SnapshotJobS3Result() = default;
    AWS_QUICKSIGHT_API SnapshotJobS3Result(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotJobS3Result& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of Amazon S3 bucket configurations that are provided when you make a
     * <code>StartDashboardSnapshotJob</code> API call. </p>
     */
    inline const SnapshotS3DestinationConfiguration& GetS3DestinationConfiguration() const { return m_s3DestinationConfiguration; }
    inline bool S3DestinationConfigurationHasBeenSet() const { return m_s3DestinationConfigurationHasBeenSet; }
    template<typename S3DestinationConfigurationT = SnapshotS3DestinationConfiguration>
    void SetS3DestinationConfiguration(S3DestinationConfigurationT&& value) { m_s3DestinationConfigurationHasBeenSet = true; m_s3DestinationConfiguration = std::forward<S3DestinationConfigurationT>(value); }
    template<typename S3DestinationConfigurationT = SnapshotS3DestinationConfiguration>
    SnapshotJobS3Result& WithS3DestinationConfiguration(S3DestinationConfigurationT&& value) { SetS3DestinationConfiguration(std::forward<S3DestinationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 Uri.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    SnapshotJobS3Result& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of error records that describe any failures that occur while the
     * dashboard snapshot job runs.</p>
     */
    inline const Aws::Vector<SnapshotJobResultErrorInfo>& GetErrorInfo() const { return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    template<typename ErrorInfoT = Aws::Vector<SnapshotJobResultErrorInfo>>
    void SetErrorInfo(ErrorInfoT&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::forward<ErrorInfoT>(value); }
    template<typename ErrorInfoT = Aws::Vector<SnapshotJobResultErrorInfo>>
    SnapshotJobS3Result& WithErrorInfo(ErrorInfoT&& value) { SetErrorInfo(std::forward<ErrorInfoT>(value)); return *this;}
    template<typename ErrorInfoT = SnapshotJobResultErrorInfo>
    SnapshotJobS3Result& AddErrorInfo(ErrorInfoT&& value) { m_errorInfoHasBeenSet = true; m_errorInfo.emplace_back(std::forward<ErrorInfoT>(value)); return *this; }
    ///@}
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
