/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The ground truth labels for the dataset used for the monitoring
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringGroundTruthS3Input">AWS
   * API Reference</a></p>
   */
  class MonitoringGroundTruthS3Input
  {
  public:
    AWS_SAGEMAKER_API MonitoringGroundTruthS3Input() = default;
    AWS_SAGEMAKER_API MonitoringGroundTruthS3Input(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringGroundTruthS3Input& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The address of the Amazon S3 location of the ground truth labels.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    MonitoringGroundTruthS3Input& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
