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
    AWS_QUICKSIGHT_API ImageSource() = default;
    AWS_QUICKSIGHT_API ImageSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ImageSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The public URL that points to the source image.</p>
     */
    inline const Aws::String& GetPublicUrl() const { return m_publicUrl; }
    inline bool PublicUrlHasBeenSet() const { return m_publicUrlHasBeenSet; }
    template<typename PublicUrlT = Aws::String>
    void SetPublicUrl(PublicUrlT&& value) { m_publicUrlHasBeenSet = true; m_publicUrl = std::forward<PublicUrlT>(value); }
    template<typename PublicUrlT = Aws::String>
    ImageSource& WithPublicUrl(PublicUrlT&& value) { SetPublicUrl(std::forward<PublicUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URI that points to the source image.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    ImageSource& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
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
