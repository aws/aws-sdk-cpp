/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
   * <p>The source of the asset bundle zip file that contains the data that you want
   * to import. The file must be in <code>QUICKSIGHT_JSON</code>
   * format.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportSource">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportSource
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportSource();
    AWS_QUICKSIGHT_API AssetBundleImportSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The bytes of the base64 encoded asset bundle import zip file. This file can't
     * exceed 20 MB.</p> <p>If you are calling the API operations from the Amazon Web
     * Services SDK for Java, JavaScript, Python, or PHP, the SDK encodes base64
     * automatically to allow the direct setting of the zip file's bytes. If you are
     * using an SDK for a different language or receiving related errors, try to base64
     * encode your data.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetBody() const{ return m_body; }

    /**
     * <p>The bytes of the base64 encoded asset bundle import zip file. This file can't
     * exceed 20 MB.</p> <p>If you are calling the API operations from the Amazon Web
     * Services SDK for Java, JavaScript, Python, or PHP, the SDK encodes base64
     * automatically to allow the direct setting of the zip file's bytes. If you are
     * using an SDK for a different language or receiving related errors, try to base64
     * encode your data.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The bytes of the base64 encoded asset bundle import zip file. This file can't
     * exceed 20 MB.</p> <p>If you are calling the API operations from the Amazon Web
     * Services SDK for Java, JavaScript, Python, or PHP, the SDK encodes base64
     * automatically to allow the direct setting of the zip file's bytes. If you are
     * using an SDK for a different language or receiving related errors, try to base64
     * encode your data.</p>
     */
    inline void SetBody(const Aws::Utils::CryptoBuffer& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The bytes of the base64 encoded asset bundle import zip file. This file can't
     * exceed 20 MB.</p> <p>If you are calling the API operations from the Amazon Web
     * Services SDK for Java, JavaScript, Python, or PHP, the SDK encodes base64
     * automatically to allow the direct setting of the zip file's bytes. If you are
     * using an SDK for a different language or receiving related errors, try to base64
     * encode your data.</p>
     */
    inline void SetBody(Aws::Utils::CryptoBuffer&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The bytes of the base64 encoded asset bundle import zip file. This file can't
     * exceed 20 MB.</p> <p>If you are calling the API operations from the Amazon Web
     * Services SDK for Java, JavaScript, Python, or PHP, the SDK encodes base64
     * automatically to allow the direct setting of the zip file's bytes. If you are
     * using an SDK for a different language or receiving related errors, try to base64
     * encode your data.</p>
     */
    inline AssetBundleImportSource& WithBody(const Aws::Utils::CryptoBuffer& value) { SetBody(value); return *this;}

    /**
     * <p>The bytes of the base64 encoded asset bundle import zip file. This file can't
     * exceed 20 MB.</p> <p>If you are calling the API operations from the Amazon Web
     * Services SDK for Java, JavaScript, Python, or PHP, the SDK encodes base64
     * automatically to allow the direct setting of the zip file's bytes. If you are
     * using an SDK for a different language or receiving related errors, try to base64
     * encode your data.</p>
     */
    inline AssetBundleImportSource& WithBody(Aws::Utils::CryptoBuffer&& value) { SetBody(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 URI for an asset bundle import file that exists in an Amazon S3
     * bucket that the caller has read access to. The file must be a zip format file
     * and can't exceed 20 MB.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The Amazon S3 URI for an asset bundle import file that exists in an Amazon S3
     * bucket that the caller has read access to. The file must be a zip format file
     * and can't exceed 20 MB.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 URI for an asset bundle import file that exists in an Amazon S3
     * bucket that the caller has read access to. The file must be a zip format file
     * and can't exceed 20 MB.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The Amazon S3 URI for an asset bundle import file that exists in an Amazon S3
     * bucket that the caller has read access to. The file must be a zip format file
     * and can't exceed 20 MB.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 URI for an asset bundle import file that exists in an Amazon S3
     * bucket that the caller has read access to. The file must be a zip format file
     * and can't exceed 20 MB.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The Amazon S3 URI for an asset bundle import file that exists in an Amazon S3
     * bucket that the caller has read access to. The file must be a zip format file
     * and can't exceed 20 MB.</p>
     */
    inline AssetBundleImportSource& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 URI for an asset bundle import file that exists in an Amazon S3
     * bucket that the caller has read access to. The file must be a zip format file
     * and can't exceed 20 MB.</p>
     */
    inline AssetBundleImportSource& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 URI for an asset bundle import file that exists in an Amazon S3
     * bucket that the caller has read access to. The file must be a zip format file
     * and can't exceed 20 MB.</p>
     */
    inline AssetBundleImportSource& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}

  private:

    Aws::Utils::CryptoBuffer m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
