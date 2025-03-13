/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/Architecture.h>
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
   * <p>Information about a source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/Source">AWS
   * API Reference</a></p>
   */
  class Source
  {
  public:
    AWS_ROBOMAKER_API Source() = default;
    AWS_ROBOMAKER_API Source(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Source& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The s3 bucket name.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    Source& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The s3 object key.</p>
     */
    inline const Aws::String& GetS3Key() const { return m_s3Key; }
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }
    template<typename S3KeyT = Aws::String>
    void SetS3Key(S3KeyT&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::forward<S3KeyT>(value); }
    template<typename S3KeyT = Aws::String>
    Source& WithS3Key(S3KeyT&& value) { SetS3Key(std::forward<S3KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A hash of the object specified by <code>s3Bucket</code> and
     * <code>s3Key</code>.</p>
     */
    inline const Aws::String& GetEtag() const { return m_etag; }
    inline bool EtagHasBeenSet() const { return m_etagHasBeenSet; }
    template<typename EtagT = Aws::String>
    void SetEtag(EtagT&& value) { m_etagHasBeenSet = true; m_etag = std::forward<EtagT>(value); }
    template<typename EtagT = Aws::String>
    Source& WithEtag(EtagT&& value) { SetEtag(std::forward<EtagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The taget processor architecture for the application.</p>
     */
    inline Architecture GetArchitecture() const { return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(Architecture value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline Source& WithArchitecture(Architecture value) { SetArchitecture(value); return *this;}
    ///@}
  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;

    Aws::String m_etag;
    bool m_etagHasBeenSet = false;

    Architecture m_architecture{Architecture::NOT_SET};
    bool m_architectureHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
