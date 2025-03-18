/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>Configuration parameters for where in an S3 bucket to place the harvested
   * content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/S3DestinationConfig">AWS
   * API Reference</a></p>
   */
  class S3DestinationConfig
  {
  public:
    AWS_MEDIAPACKAGEV2_API S3DestinationConfig() = default;
    AWS_MEDIAPACKAGEV2_API S3DestinationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API S3DestinationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of an S3 bucket within which harvested content will be exported.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    S3DestinationConfig& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path within the specified S3 bucket where the harvested content will be
     * placed.</p>
     */
    inline const Aws::String& GetDestinationPath() const { return m_destinationPath; }
    inline bool DestinationPathHasBeenSet() const { return m_destinationPathHasBeenSet; }
    template<typename DestinationPathT = Aws::String>
    void SetDestinationPath(DestinationPathT&& value) { m_destinationPathHasBeenSet = true; m_destinationPath = std::forward<DestinationPathT>(value); }
    template<typename DestinationPathT = Aws::String>
    S3DestinationConfig& WithDestinationPath(DestinationPathT&& value) { SetDestinationPath(std::forward<DestinationPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_destinationPath;
    bool m_destinationPathHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
