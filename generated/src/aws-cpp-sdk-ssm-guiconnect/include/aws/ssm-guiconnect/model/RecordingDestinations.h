/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-guiconnect/SSMGuiConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-guiconnect/model/S3Bucket.h>
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
namespace SSMGuiConnect
{
namespace Model
{

  /**
   * <p>Determines where recordings of RDP connections are stored.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-guiconnect-2021-05-01/RecordingDestinations">AWS
   * API Reference</a></p>
   */
  class RecordingDestinations
  {
  public:
    AWS_SSMGUICONNECT_API RecordingDestinations() = default;
    AWS_SSMGUICONNECT_API RecordingDestinations(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMGUICONNECT_API RecordingDestinations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMGUICONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 bucket where RDP connection recordings are stored.</p>
     */
    inline const Aws::Vector<S3Bucket>& GetS3Buckets() const { return m_s3Buckets; }
    inline bool S3BucketsHasBeenSet() const { return m_s3BucketsHasBeenSet; }
    template<typename S3BucketsT = Aws::Vector<S3Bucket>>
    void SetS3Buckets(S3BucketsT&& value) { m_s3BucketsHasBeenSet = true; m_s3Buckets = std::forward<S3BucketsT>(value); }
    template<typename S3BucketsT = Aws::Vector<S3Bucket>>
    RecordingDestinations& WithS3Buckets(S3BucketsT&& value) { SetS3Buckets(std::forward<S3BucketsT>(value)); return *this;}
    template<typename S3BucketsT = S3Bucket>
    RecordingDestinations& AddS3Buckets(S3BucketsT&& value) { m_s3BucketsHasBeenSet = true; m_s3Buckets.emplace_back(std::forward<S3BucketsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<S3Bucket> m_s3Buckets;
    bool m_s3BucketsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMGuiConnect
} // namespace Aws
