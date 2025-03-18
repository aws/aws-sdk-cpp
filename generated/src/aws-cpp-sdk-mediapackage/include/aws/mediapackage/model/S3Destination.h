/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * Configuration parameters for where in an S3 bucket to place the harvested
   * content
<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/S3Destination">AWS
   * API Reference</a></p>
   */
  class S3Destination
  {
  public:
    AWS_MEDIAPACKAGE_API S3Destination() = default;
    AWS_MEDIAPACKAGE_API S3Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API S3Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The name of an S3 bucket within which harvested content will be exported

     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    S3Destination& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The key in the specified S3 bucket where the harvested top-level manifest will
     * be placed.

     */
    inline const Aws::String& GetManifestKey() const { return m_manifestKey; }
    inline bool ManifestKeyHasBeenSet() const { return m_manifestKeyHasBeenSet; }
    template<typename ManifestKeyT = Aws::String>
    void SetManifestKey(ManifestKeyT&& value) { m_manifestKeyHasBeenSet = true; m_manifestKey = std::forward<ManifestKeyT>(value); }
    template<typename ManifestKeyT = Aws::String>
    S3Destination& WithManifestKey(ManifestKeyT&& value) { SetManifestKey(std::forward<ManifestKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The IAM role used to write to the specified S3 bucket

     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    S3Destination& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_manifestKey;
    bool m_manifestKeyHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
