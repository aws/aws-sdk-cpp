/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/Format.h>
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
   * <p>Provides information about the import job that created a segment. An import
   * job is a job that creates a user segment by importing endpoint
   * definitions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentImportResource">AWS
   * API Reference</a></p>
   */
  class SegmentImportResource
  {
  public:
    AWS_PINPOINT_API SegmentImportResource() = default;
    AWS_PINPOINT_API SegmentImportResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SegmentImportResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of channel types in the endpoint definitions that were imported to
     * create the segment.</p>
     */
    inline const Aws::Map<Aws::String, int>& GetChannelCounts() const { return m_channelCounts; }
    inline bool ChannelCountsHasBeenSet() const { return m_channelCountsHasBeenSet; }
    template<typename ChannelCountsT = Aws::Map<Aws::String, int>>
    void SetChannelCounts(ChannelCountsT&& value) { m_channelCountsHasBeenSet = true; m_channelCounts = std::forward<ChannelCountsT>(value); }
    template<typename ChannelCountsT = Aws::Map<Aws::String, int>>
    SegmentImportResource& WithChannelCounts(ChannelCountsT&& value) { SetChannelCounts(std::forward<ChannelCountsT>(value)); return *this;}
    inline SegmentImportResource& AddChannelCounts(Aws::String key, int value) {
      m_channelCountsHasBeenSet = true; m_channelCounts.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>(Deprecated) Your AWS account ID, which you assigned to an external ID key in
     * an IAM trust policy. Amazon Pinpoint previously used this value to assume an IAM
     * role when importing endpoint definitions, but we removed this requirement. We
     * don't recommend use of external IDs for IAM roles that are assumed by Amazon
     * Pinpoint.</p>
     */
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    SegmentImportResource& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the files that were imported to create the segment. Valid
     * values are: CSV, for comma-separated values format; and, JSON, for
     * newline-delimited JSON format.</p>
     */
    inline Format GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(Format value) { m_formatHasBeenSet = true; m_format = value; }
    inline SegmentImportResource& WithFormat(Format value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorized Amazon Pinpoint to access the Amazon S3 location to
     * import endpoint definitions from.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    SegmentImportResource& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the Amazon Simple Storage Service (Amazon S3) bucket that the
     * endpoint definitions were imported from to create the segment.</p>
     */
    inline const Aws::String& GetS3Url() const { return m_s3Url; }
    inline bool S3UrlHasBeenSet() const { return m_s3UrlHasBeenSet; }
    template<typename S3UrlT = Aws::String>
    void SetS3Url(S3UrlT&& value) { m_s3UrlHasBeenSet = true; m_s3Url = std::forward<S3UrlT>(value); }
    template<typename S3UrlT = Aws::String>
    SegmentImportResource& WithS3Url(S3UrlT&& value) { SetS3Url(std::forward<S3UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of endpoint definitions that were imported successfully to create
     * the segment.</p>
     */
    inline int GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }
    inline SegmentImportResource& WithSize(int value) { SetSize(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, int> m_channelCounts;
    bool m_channelCountsHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Format m_format{Format::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_s3Url;
    bool m_s3UrlHasBeenSet = false;

    int m_size{0};
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
