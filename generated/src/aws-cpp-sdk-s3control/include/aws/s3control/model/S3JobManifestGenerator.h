/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/S3ManifestOutputLocation.h>
#include <aws/s3control/model/JobManifestGeneratorFilter.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>The container for the service that will create the S3 manifest.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3JobManifestGenerator">AWS
   * API Reference</a></p>
   */
  class S3JobManifestGenerator
  {
  public:
    AWS_S3CONTROL_API S3JobManifestGenerator() = default;
    AWS_S3CONTROL_API S3JobManifestGenerator(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3JobManifestGenerator& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the bucket the generated
     * manifest is written to. If provided the generated manifest bucket's owner Amazon
     * Web Services account ID must match this value, else the job fails.</p>
     */
    inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
    inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
    template<typename ExpectedBucketOwnerT = Aws::String>
    void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value); }
    template<typename ExpectedBucketOwnerT = Aws::String>
    S3JobManifestGenerator& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) { SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the source bucket used by the ManifestGenerator.</p>  <p>
     * <b>Directory buckets</b> - Directory buckets aren't supported as the source
     * buckets used by <code>S3JobManifestGenerator</code> to generate the job
     * manifest.</p> 
     */
    inline const Aws::String& GetSourceBucket() const { return m_sourceBucket; }
    inline bool SourceBucketHasBeenSet() const { return m_sourceBucketHasBeenSet; }
    template<typename SourceBucketT = Aws::String>
    void SetSourceBucket(SourceBucketT&& value) { m_sourceBucketHasBeenSet = true; m_sourceBucket = std::forward<SourceBucketT>(value); }
    template<typename SourceBucketT = Aws::String>
    S3JobManifestGenerator& WithSourceBucket(SourceBucketT&& value) { SetSourceBucket(std::forward<SourceBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the location the generated manifest will be written to. Manifests
     * can't be written to directory buckets. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/directory-buckets-overview.html">Directory
     * buckets</a>.</p>
     */
    inline const S3ManifestOutputLocation& GetManifestOutputLocation() const { return m_manifestOutputLocation; }
    inline bool ManifestOutputLocationHasBeenSet() const { return m_manifestOutputLocationHasBeenSet; }
    template<typename ManifestOutputLocationT = S3ManifestOutputLocation>
    void SetManifestOutputLocation(ManifestOutputLocationT&& value) { m_manifestOutputLocationHasBeenSet = true; m_manifestOutputLocation = std::forward<ManifestOutputLocationT>(value); }
    template<typename ManifestOutputLocationT = S3ManifestOutputLocation>
    S3JobManifestGenerator& WithManifestOutputLocation(ManifestOutputLocationT&& value) { SetManifestOutputLocation(std::forward<ManifestOutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies rules the S3JobManifestGenerator should use to decide whether an
     * object in the source bucket should or should not be included in the generated
     * job manifest.</p>
     */
    inline const JobManifestGeneratorFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = JobManifestGeneratorFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = JobManifestGeneratorFilter>
    S3JobManifestGenerator& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether or not to write the job's generated manifest to a
     * bucket.</p>
     */
    inline bool GetEnableManifestOutput() const { return m_enableManifestOutput; }
    inline bool EnableManifestOutputHasBeenSet() const { return m_enableManifestOutputHasBeenSet; }
    inline void SetEnableManifestOutput(bool value) { m_enableManifestOutputHasBeenSet = true; m_enableManifestOutput = value; }
    inline S3JobManifestGenerator& WithEnableManifestOutput(bool value) { SetEnableManifestOutput(value); return *this;}
    ///@}
  private:

    Aws::String m_expectedBucketOwner;
    bool m_expectedBucketOwnerHasBeenSet = false;

    Aws::String m_sourceBucket;
    bool m_sourceBucketHasBeenSet = false;

    S3ManifestOutputLocation m_manifestOutputLocation;
    bool m_manifestOutputLocationHasBeenSet = false;

    JobManifestGeneratorFilter m_filter;
    bool m_filterHasBeenSet = false;

    bool m_enableManifestOutput{false};
    bool m_enableManifestOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
