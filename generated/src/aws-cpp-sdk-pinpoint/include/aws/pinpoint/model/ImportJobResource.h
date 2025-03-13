/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
   * <p>Provides information about the resource settings for a job that imports
   * endpoint definitions from one or more files. The files can be stored in an
   * Amazon Simple Storage Service (Amazon S3) bucket or uploaded directly from a
   * computer by using the Amazon Pinpoint console.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ImportJobResource">AWS
   * API Reference</a></p>
   */
  class ImportJobResource
  {
  public:
    AWS_PINPOINT_API ImportJobResource() = default;
    AWS_PINPOINT_API ImportJobResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ImportJobResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether the import job creates a segment that contains the
     * endpoints, when the endpoint definitions are imported.</p>
     */
    inline bool GetDefineSegment() const { return m_defineSegment; }
    inline bool DefineSegmentHasBeenSet() const { return m_defineSegmentHasBeenSet; }
    inline void SetDefineSegment(bool value) { m_defineSegmentHasBeenSet = true; m_defineSegment = value; }
    inline ImportJobResource& WithDefineSegment(bool value) { SetDefineSegment(value); return *this;}
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
    ImportJobResource& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the files that contain the endpoint definitions to import.
     * Valid values are: CSV, for comma-separated values format; and, JSON, for
     * newline-delimited JSON format.</p> <p>If the files are stored in an Amazon S3
     * location and that location contains multiple files that use different formats,
     * Amazon Pinpoint imports data only from the files that use the specified
     * format.</p>
     */
    inline Format GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(Format value) { m_formatHasBeenSet = true; m_format = value; }
    inline ImportJobResource& WithFormat(Format value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the import job registers the endpoints with Amazon
     * Pinpoint, when the endpoint definitions are imported.</p>
     */
    inline bool GetRegisterEndpoints() const { return m_registerEndpoints; }
    inline bool RegisterEndpointsHasBeenSet() const { return m_registerEndpointsHasBeenSet; }
    inline void SetRegisterEndpoints(bool value) { m_registerEndpointsHasBeenSet = true; m_registerEndpoints = value; }
    inline ImportJobResource& WithRegisterEndpoints(bool value) { SetRegisterEndpoints(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to access the Amazon S3 location to
     * import endpoint definitions from.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    ImportJobResource& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the Amazon Simple Storage Service (Amazon S3) bucket that contains
     * the endpoint definitions to import. This location can be a folder or a single
     * file. If the location is a folder, Amazon Pinpoint imports endpoint definitions
     * from the files in this location, including any subfolders that the folder
     * contains.</p> <p>The URL should be in the following format:
     * s3://<replaceable>bucket-name</replaceable>/<replaceable>folder-name</replaceable>/<replaceable>file-name</replaceable>.
     * The location can end with the key for an individual object or a prefix that
     * qualifies multiple objects.</p>
     */
    inline const Aws::String& GetS3Url() const { return m_s3Url; }
    inline bool S3UrlHasBeenSet() const { return m_s3UrlHasBeenSet; }
    template<typename S3UrlT = Aws::String>
    void SetS3Url(S3UrlT&& value) { m_s3UrlHasBeenSet = true; m_s3Url = std::forward<S3UrlT>(value); }
    template<typename S3UrlT = Aws::String>
    ImportJobResource& WithS3Url(S3UrlT&& value) { SetS3Url(std::forward<S3UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the segment that the import job updates or adds endpoint
     * definitions to, if the import job updates an existing segment.</p>
     */
    inline const Aws::String& GetSegmentId() const { return m_segmentId; }
    inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }
    template<typename SegmentIdT = Aws::String>
    void SetSegmentId(SegmentIdT&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::forward<SegmentIdT>(value); }
    template<typename SegmentIdT = Aws::String>
    ImportJobResource& WithSegmentId(SegmentIdT&& value) { SetSegmentId(std::forward<SegmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom name for the segment that's created by the import job, if the
     * value of the DefineSegment property is true.</p>
     */
    inline const Aws::String& GetSegmentName() const { return m_segmentName; }
    inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }
    template<typename SegmentNameT = Aws::String>
    void SetSegmentName(SegmentNameT&& value) { m_segmentNameHasBeenSet = true; m_segmentName = std::forward<SegmentNameT>(value); }
    template<typename SegmentNameT = Aws::String>
    ImportJobResource& WithSegmentName(SegmentNameT&& value) { SetSegmentName(std::forward<SegmentNameT>(value)); return *this;}
    ///@}
  private:

    bool m_defineSegment{false};
    bool m_defineSegmentHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Format m_format{Format::NOT_SET};
    bool m_formatHasBeenSet = false;

    bool m_registerEndpoints{false};
    bool m_registerEndpointsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_s3Url;
    bool m_s3UrlHasBeenSet = false;

    Aws::String m_segmentId;
    bool m_segmentIdHasBeenSet = false;

    Aws::String m_segmentName;
    bool m_segmentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
