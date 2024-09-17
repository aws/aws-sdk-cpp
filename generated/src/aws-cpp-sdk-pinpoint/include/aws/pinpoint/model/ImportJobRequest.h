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
   * <p>Specifies the settings for a job that imports endpoint definitions from an
   * Amazon Simple Storage Service (Amazon S3) bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ImportJobRequest">AWS
   * API Reference</a></p>
   */
  class ImportJobRequest
  {
  public:
    AWS_PINPOINT_API ImportJobRequest();
    AWS_PINPOINT_API ImportJobRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ImportJobRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether to create a segment that contains the endpoints, when the
     * endpoint definitions are imported.</p>
     */
    inline bool GetDefineSegment() const{ return m_defineSegment; }
    inline bool DefineSegmentHasBeenSet() const { return m_defineSegmentHasBeenSet; }
    inline void SetDefineSegment(bool value) { m_defineSegmentHasBeenSet = true; m_defineSegment = value; }
    inline ImportJobRequest& WithDefineSegment(bool value) { SetDefineSegment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Deprecated) Your AWS account ID, which you assigned to an external ID key in
     * an IAM trust policy. Amazon Pinpoint previously used this value to assume an IAM
     * role when importing endpoint definitions, but we removed this requirement. We
     * don't recommend use of external IDs for IAM roles that are assumed by Amazon
     * Pinpoint.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }
    inline ImportJobRequest& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}
    inline ImportJobRequest& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}
    inline ImportJobRequest& WithExternalId(const char* value) { SetExternalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the files that contain the endpoint definitions to import.
     * Valid values are: CSV, for comma-separated values format; and, JSON, for
     * newline-delimited JSON format. If the Amazon S3 location stores multiple files
     * that use different formats, Amazon Pinpoint imports data only from the files
     * that use the specified format.</p>
     */
    inline const Format& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const Format& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(Format&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline ImportJobRequest& WithFormat(const Format& value) { SetFormat(value); return *this;}
    inline ImportJobRequest& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to register the endpoints with Amazon Pinpoint, when the
     * endpoint definitions are imported.</p>
     */
    inline bool GetRegisterEndpoints() const{ return m_registerEndpoints; }
    inline bool RegisterEndpointsHasBeenSet() const { return m_registerEndpointsHasBeenSet; }
    inline void SetRegisterEndpoints(bool value) { m_registerEndpointsHasBeenSet = true; m_registerEndpoints = value; }
    inline ImportJobRequest& WithRegisterEndpoints(bool value) { SetRegisterEndpoints(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon Pinpoint to access the Amazon S3 location to
     * import endpoint definitions from.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline ImportJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline ImportJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline ImportJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
    inline const Aws::String& GetS3Url() const{ return m_s3Url; }
    inline bool S3UrlHasBeenSet() const { return m_s3UrlHasBeenSet; }
    inline void SetS3Url(const Aws::String& value) { m_s3UrlHasBeenSet = true; m_s3Url = value; }
    inline void SetS3Url(Aws::String&& value) { m_s3UrlHasBeenSet = true; m_s3Url = std::move(value); }
    inline void SetS3Url(const char* value) { m_s3UrlHasBeenSet = true; m_s3Url.assign(value); }
    inline ImportJobRequest& WithS3Url(const Aws::String& value) { SetS3Url(value); return *this;}
    inline ImportJobRequest& WithS3Url(Aws::String&& value) { SetS3Url(std::move(value)); return *this;}
    inline ImportJobRequest& WithS3Url(const char* value) { SetS3Url(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the segment to update or add the imported endpoint
     * definitions to, if the import job is meant to update an existing segment.</p>
     */
    inline const Aws::String& GetSegmentId() const{ return m_segmentId; }
    inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }
    inline void SetSegmentId(const Aws::String& value) { m_segmentIdHasBeenSet = true; m_segmentId = value; }
    inline void SetSegmentId(Aws::String&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::move(value); }
    inline void SetSegmentId(const char* value) { m_segmentIdHasBeenSet = true; m_segmentId.assign(value); }
    inline ImportJobRequest& WithSegmentId(const Aws::String& value) { SetSegmentId(value); return *this;}
    inline ImportJobRequest& WithSegmentId(Aws::String&& value) { SetSegmentId(std::move(value)); return *this;}
    inline ImportJobRequest& WithSegmentId(const char* value) { SetSegmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom name for the segment that's created by the import job, if the value
     * of the DefineSegment property is true.</p>
     */
    inline const Aws::String& GetSegmentName() const{ return m_segmentName; }
    inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }
    inline void SetSegmentName(const Aws::String& value) { m_segmentNameHasBeenSet = true; m_segmentName = value; }
    inline void SetSegmentName(Aws::String&& value) { m_segmentNameHasBeenSet = true; m_segmentName = std::move(value); }
    inline void SetSegmentName(const char* value) { m_segmentNameHasBeenSet = true; m_segmentName.assign(value); }
    inline ImportJobRequest& WithSegmentName(const Aws::String& value) { SetSegmentName(value); return *this;}
    inline ImportJobRequest& WithSegmentName(Aws::String&& value) { SetSegmentName(std::move(value)); return *this;}
    inline ImportJobRequest& WithSegmentName(const char* value) { SetSegmentName(value); return *this;}
    ///@}
  private:

    bool m_defineSegment;
    bool m_defineSegmentHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Format m_format;
    bool m_formatHasBeenSet = false;

    bool m_registerEndpoints;
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
