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
   * <p>The source of the image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ImageSource">AWS
   * API Reference</a></p>
   */
  class ImageSource
  {
  public:
    AWS_QUICKSIGHT_API ImageSource();
    AWS_QUICKSIGHT_API ImageSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ImageSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The public URL that points to the source image.</p>
     */
    inline const Aws::String& GetPublicUrl() const{ return m_publicUrl; }
    inline bool PublicUrlHasBeenSet() const { return m_publicUrlHasBeenSet; }
    inline void SetPublicUrl(const Aws::String& value) { m_publicUrlHasBeenSet = true; m_publicUrl = value; }
    inline void SetPublicUrl(Aws::String&& value) { m_publicUrlHasBeenSet = true; m_publicUrl = std::move(value); }
    inline void SetPublicUrl(const char* value) { m_publicUrlHasBeenSet = true; m_publicUrl.assign(value); }
    inline ImageSource& WithPublicUrl(const Aws::String& value) { SetPublicUrl(value); return *this;}
    inline ImageSource& WithPublicUrl(Aws::String&& value) { SetPublicUrl(std::move(value)); return *this;}
    inline ImageSource& WithPublicUrl(const char* value) { SetPublicUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URI that points to the source image.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }
    inline ImageSource& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}
    inline ImageSource& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}
    inline ImageSource& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}
    ///@}
  private:

    Aws::String m_publicUrl;
    bool m_publicUrlHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
