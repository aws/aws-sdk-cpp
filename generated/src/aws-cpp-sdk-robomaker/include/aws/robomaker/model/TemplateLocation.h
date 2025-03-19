/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about a template location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/TemplateLocation">AWS
   * API Reference</a></p>
   */
  class TemplateLocation
  {
  public:
    AWS_ROBOMAKER_API TemplateLocation() = default;
    AWS_ROBOMAKER_API TemplateLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API TemplateLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 bucket name.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    TemplateLocation& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of S3 keys identifying the data source files.</p>
     */
    inline const Aws::String& GetS3Key() const { return m_s3Key; }
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }
    template<typename S3KeyT = Aws::String>
    void SetS3Key(S3KeyT&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::forward<S3KeyT>(value); }
    template<typename S3KeyT = Aws::String>
    TemplateLocation& WithS3Key(S3KeyT&& value) { SetS3Key(std::forward<S3KeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
