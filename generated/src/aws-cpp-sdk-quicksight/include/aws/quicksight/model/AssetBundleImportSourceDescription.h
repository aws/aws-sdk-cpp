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
   * <p>A description of the import source that you provide at the start of an import
   * job. This value is set to either <code>Body</code> or <code>S3Uri</code>,
   * depending on how the <code>StartAssetBundleImportJobRequest</code> is
   * configured.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportSourceDescription">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportSourceDescription
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportSourceDescription();
    AWS_QUICKSIGHT_API AssetBundleImportSourceDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportSourceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An HTTPS download URL for the provided asset bundle that you optionally
     * provided at the start of the import job. This URL is valid for five minutes
     * after issuance. Call <code>DescribeAssetBundleExportJob</code> again for a fresh
     * URL if needed. The downloaded asset bundle is a <code>.qs</code> zip file.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>An HTTPS download URL for the provided asset bundle that you optionally
     * provided at the start of the import job. This URL is valid for five minutes
     * after issuance. Call <code>DescribeAssetBundleExportJob</code> again for a fresh
     * URL if needed. The downloaded asset bundle is a <code>.qs</code> zip file.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>An HTTPS download URL for the provided asset bundle that you optionally
     * provided at the start of the import job. This URL is valid for five minutes
     * after issuance. Call <code>DescribeAssetBundleExportJob</code> again for a fresh
     * URL if needed. The downloaded asset bundle is a <code>.qs</code> zip file.</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>An HTTPS download URL for the provided asset bundle that you optionally
     * provided at the start of the import job. This URL is valid for five minutes
     * after issuance. Call <code>DescribeAssetBundleExportJob</code> again for a fresh
     * URL if needed. The downloaded asset bundle is a <code>.qs</code> zip file.</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>An HTTPS download URL for the provided asset bundle that you optionally
     * provided at the start of the import job. This URL is valid for five minutes
     * after issuance. Call <code>DescribeAssetBundleExportJob</code> again for a fresh
     * URL if needed. The downloaded asset bundle is a <code>.qs</code> zip file.</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>An HTTPS download URL for the provided asset bundle that you optionally
     * provided at the start of the import job. This URL is valid for five minutes
     * after issuance. Call <code>DescribeAssetBundleExportJob</code> again for a fresh
     * URL if needed. The downloaded asset bundle is a <code>.qs</code> zip file.</p>
     */
    inline AssetBundleImportSourceDescription& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>An HTTPS download URL for the provided asset bundle that you optionally
     * provided at the start of the import job. This URL is valid for five minutes
     * after issuance. Call <code>DescribeAssetBundleExportJob</code> again for a fresh
     * URL if needed. The downloaded asset bundle is a <code>.qs</code> zip file.</p>
     */
    inline AssetBundleImportSourceDescription& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>An HTTPS download URL for the provided asset bundle that you optionally
     * provided at the start of the import job. This URL is valid for five minutes
     * after issuance. Call <code>DescribeAssetBundleExportJob</code> again for a fresh
     * URL if needed. The downloaded asset bundle is a <code>.qs</code> zip file.</p>
     */
    inline AssetBundleImportSourceDescription& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>The Amazon S3 URI that you provided at the start of the import job.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The Amazon S3 URI that you provided at the start of the import job.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 URI that you provided at the start of the import job.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The Amazon S3 URI that you provided at the start of the import job.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 URI that you provided at the start of the import job.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The Amazon S3 URI that you provided at the start of the import job.</p>
     */
    inline AssetBundleImportSourceDescription& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 URI that you provided at the start of the import job.</p>
     */
    inline AssetBundleImportSourceDescription& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 URI that you provided at the start of the import job.</p>
     */
    inline AssetBundleImportSourceDescription& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}

  private:

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
