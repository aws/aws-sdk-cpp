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
    AWS_S3CONTROL_API S3JobManifestGenerator();
    AWS_S3CONTROL_API S3JobManifestGenerator(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3JobManifestGenerator& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The Amazon Web Services account ID that owns the bucket the generated
     * manifest is written to. If provided the generated manifest bucket's owner Amazon
     * Web Services account ID must match this value, else the job fails.</p>
     */
    inline const Aws::String& GetExpectedBucketOwner() const{ return m_expectedBucketOwner; }

    /**
     * <p>The Amazon Web Services account ID that owns the bucket the generated
     * manifest is written to. If provided the generated manifest bucket's owner Amazon
     * Web Services account ID must match this value, else the job fails.</p>
     */
    inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID that owns the bucket the generated
     * manifest is written to. If provided the generated manifest bucket's owner Amazon
     * Web Services account ID must match this value, else the job fails.</p>
     */
    inline void SetExpectedBucketOwner(const Aws::String& value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner = value; }

    /**
     * <p>The Amazon Web Services account ID that owns the bucket the generated
     * manifest is written to. If provided the generated manifest bucket's owner Amazon
     * Web Services account ID must match this value, else the job fails.</p>
     */
    inline void SetExpectedBucketOwner(Aws::String&& value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID that owns the bucket the generated
     * manifest is written to. If provided the generated manifest bucket's owner Amazon
     * Web Services account ID must match this value, else the job fails.</p>
     */
    inline void SetExpectedBucketOwner(const char* value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner.assign(value); }

    /**
     * <p>The Amazon Web Services account ID that owns the bucket the generated
     * manifest is written to. If provided the generated manifest bucket's owner Amazon
     * Web Services account ID must match this value, else the job fails.</p>
     */
    inline S3JobManifestGenerator& WithExpectedBucketOwner(const Aws::String& value) { SetExpectedBucketOwner(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID that owns the bucket the generated
     * manifest is written to. If provided the generated manifest bucket's owner Amazon
     * Web Services account ID must match this value, else the job fails.</p>
     */
    inline S3JobManifestGenerator& WithExpectedBucketOwner(Aws::String&& value) { SetExpectedBucketOwner(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID that owns the bucket the generated
     * manifest is written to. If provided the generated manifest bucket's owner Amazon
     * Web Services account ID must match this value, else the job fails.</p>
     */
    inline S3JobManifestGenerator& WithExpectedBucketOwner(const char* value) { SetExpectedBucketOwner(value); return *this;}


    /**
     * <p>The source bucket used by the ManifestGenerator.</p>
     */
    inline const Aws::String& GetSourceBucket() const{ return m_sourceBucket; }

    /**
     * <p>The source bucket used by the ManifestGenerator.</p>
     */
    inline bool SourceBucketHasBeenSet() const { return m_sourceBucketHasBeenSet; }

    /**
     * <p>The source bucket used by the ManifestGenerator.</p>
     */
    inline void SetSourceBucket(const Aws::String& value) { m_sourceBucketHasBeenSet = true; m_sourceBucket = value; }

    /**
     * <p>The source bucket used by the ManifestGenerator.</p>
     */
    inline void SetSourceBucket(Aws::String&& value) { m_sourceBucketHasBeenSet = true; m_sourceBucket = std::move(value); }

    /**
     * <p>The source bucket used by the ManifestGenerator.</p>
     */
    inline void SetSourceBucket(const char* value) { m_sourceBucketHasBeenSet = true; m_sourceBucket.assign(value); }

    /**
     * <p>The source bucket used by the ManifestGenerator.</p>
     */
    inline S3JobManifestGenerator& WithSourceBucket(const Aws::String& value) { SetSourceBucket(value); return *this;}

    /**
     * <p>The source bucket used by the ManifestGenerator.</p>
     */
    inline S3JobManifestGenerator& WithSourceBucket(Aws::String&& value) { SetSourceBucket(std::move(value)); return *this;}

    /**
     * <p>The source bucket used by the ManifestGenerator.</p>
     */
    inline S3JobManifestGenerator& WithSourceBucket(const char* value) { SetSourceBucket(value); return *this;}


    /**
     * <p>Specifies the location the generated manifest will be written to.</p>
     */
    inline const S3ManifestOutputLocation& GetManifestOutputLocation() const{ return m_manifestOutputLocation; }

    /**
     * <p>Specifies the location the generated manifest will be written to.</p>
     */
    inline bool ManifestOutputLocationHasBeenSet() const { return m_manifestOutputLocationHasBeenSet; }

    /**
     * <p>Specifies the location the generated manifest will be written to.</p>
     */
    inline void SetManifestOutputLocation(const S3ManifestOutputLocation& value) { m_manifestOutputLocationHasBeenSet = true; m_manifestOutputLocation = value; }

    /**
     * <p>Specifies the location the generated manifest will be written to.</p>
     */
    inline void SetManifestOutputLocation(S3ManifestOutputLocation&& value) { m_manifestOutputLocationHasBeenSet = true; m_manifestOutputLocation = std::move(value); }

    /**
     * <p>Specifies the location the generated manifest will be written to.</p>
     */
    inline S3JobManifestGenerator& WithManifestOutputLocation(const S3ManifestOutputLocation& value) { SetManifestOutputLocation(value); return *this;}

    /**
     * <p>Specifies the location the generated manifest will be written to.</p>
     */
    inline S3JobManifestGenerator& WithManifestOutputLocation(S3ManifestOutputLocation&& value) { SetManifestOutputLocation(std::move(value)); return *this;}


    /**
     * <p>Specifies rules the S3JobManifestGenerator should use to use to decide
     * whether an object in the source bucket should or should not be included in the
     * generated job manifest.</p>
     */
    inline const JobManifestGeneratorFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>Specifies rules the S3JobManifestGenerator should use to use to decide
     * whether an object in the source bucket should or should not be included in the
     * generated job manifest.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Specifies rules the S3JobManifestGenerator should use to use to decide
     * whether an object in the source bucket should or should not be included in the
     * generated job manifest.</p>
     */
    inline void SetFilter(const JobManifestGeneratorFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Specifies rules the S3JobManifestGenerator should use to use to decide
     * whether an object in the source bucket should or should not be included in the
     * generated job manifest.</p>
     */
    inline void SetFilter(JobManifestGeneratorFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Specifies rules the S3JobManifestGenerator should use to use to decide
     * whether an object in the source bucket should or should not be included in the
     * generated job manifest.</p>
     */
    inline S3JobManifestGenerator& WithFilter(const JobManifestGeneratorFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>Specifies rules the S3JobManifestGenerator should use to use to decide
     * whether an object in the source bucket should or should not be included in the
     * generated job manifest.</p>
     */
    inline S3JobManifestGenerator& WithFilter(JobManifestGeneratorFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>Determines whether or not to write the job's generated manifest to a
     * bucket.</p>
     */
    inline bool GetEnableManifestOutput() const{ return m_enableManifestOutput; }

    /**
     * <p>Determines whether or not to write the job's generated manifest to a
     * bucket.</p>
     */
    inline bool EnableManifestOutputHasBeenSet() const { return m_enableManifestOutputHasBeenSet; }

    /**
     * <p>Determines whether or not to write the job's generated manifest to a
     * bucket.</p>
     */
    inline void SetEnableManifestOutput(bool value) { m_enableManifestOutputHasBeenSet = true; m_enableManifestOutput = value; }

    /**
     * <p>Determines whether or not to write the job's generated manifest to a
     * bucket.</p>
     */
    inline S3JobManifestGenerator& WithEnableManifestOutput(bool value) { SetEnableManifestOutput(value); return *this;}

  private:

    Aws::String m_expectedBucketOwner;
    bool m_expectedBucketOwnerHasBeenSet = false;

    Aws::String m_sourceBucket;
    bool m_sourceBucketHasBeenSet = false;

    S3ManifestOutputLocation m_manifestOutputLocation;
    bool m_manifestOutputLocationHasBeenSet = false;

    JobManifestGeneratorFilter m_filter;
    bool m_filterHasBeenSet = false;

    bool m_enableManifestOutput;
    bool m_enableManifestOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
