/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the settings for a job that exports endpoint definitions to an
   * Amazon Simple Storage Service (Amazon S3) bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ExportJobRequest">AWS
   * API Reference</a></p>
   */
  class ExportJobRequest
  {
  public:
    AWS_PINPOINT_API ExportJobRequest() = default;
    AWS_PINPOINT_API ExportJobRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ExportJobRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to access the Amazon S3 location
     * where you want to export endpoint definitions to.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    ExportJobRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the location in an Amazon Simple Storage Service (Amazon S3)
     * bucket where you want to export endpoint definitions to. This location is
     * typically a folder that contains multiple files. The URL should be in the
     * following format:
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>folder-name</replaceable>/.</p>
     */
    inline const Aws::String& GetS3UrlPrefix() const { return m_s3UrlPrefix; }
    inline bool S3UrlPrefixHasBeenSet() const { return m_s3UrlPrefixHasBeenSet; }
    template<typename S3UrlPrefixT = Aws::String>
    void SetS3UrlPrefix(S3UrlPrefixT&& value) { m_s3UrlPrefixHasBeenSet = true; m_s3UrlPrefix = std::forward<S3UrlPrefixT>(value); }
    template<typename S3UrlPrefixT = Aws::String>
    ExportJobRequest& WithS3UrlPrefix(S3UrlPrefixT&& value) { SetS3UrlPrefix(std::forward<S3UrlPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the segment to export endpoint definitions from. If you
     * don't specify this value, Amazon Pinpoint exports definitions for all the
     * endpoints that are associated with the application.</p>
     */
    inline const Aws::String& GetSegmentId() const { return m_segmentId; }
    inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }
    template<typename SegmentIdT = Aws::String>
    void SetSegmentId(SegmentIdT&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::forward<SegmentIdT>(value); }
    template<typename SegmentIdT = Aws::String>
    ExportJobRequest& WithSegmentId(SegmentIdT&& value) { SetSegmentId(std::forward<SegmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the segment to export endpoint definitions from, if
     * specified.</p>
     */
    inline int GetSegmentVersion() const { return m_segmentVersion; }
    inline bool SegmentVersionHasBeenSet() const { return m_segmentVersionHasBeenSet; }
    inline void SetSegmentVersion(int value) { m_segmentVersionHasBeenSet = true; m_segmentVersion = value; }
    inline ExportJobRequest& WithSegmentVersion(int value) { SetSegmentVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_s3UrlPrefix;
    bool m_s3UrlPrefixHasBeenSet = false;

    Aws::String m_segmentId;
    bool m_segmentIdHasBeenSet = false;

    int m_segmentVersion{0};
    bool m_segmentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
