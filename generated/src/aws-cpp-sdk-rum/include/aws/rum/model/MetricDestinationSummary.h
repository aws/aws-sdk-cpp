/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/model/MetricDestination.h>
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
namespace CloudWatchRUM
{
namespace Model
{

  /**
   * <p>A structure that displays information about one destination that CloudWatch
   * RUM sends extended metrics to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/MetricDestinationSummary">AWS
   * API Reference</a></p>
   */
  class MetricDestinationSummary
  {
  public:
    AWS_CLOUDWATCHRUM_API MetricDestinationSummary() = default;
    AWS_CLOUDWATCHRUM_API MetricDestinationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API MetricDestinationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether the destination is <code>CloudWatch</code> or
     * <code>Evidently</code>.</p>
     */
    inline MetricDestination GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(MetricDestination value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline MetricDestinationSummary& WithDestination(MetricDestination value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the destination is <code>Evidently</code>, this specifies the ARN of the
     * Evidently experiment that receives the metrics.</p>
     */
    inline const Aws::String& GetDestinationArn() const { return m_destinationArn; }
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
    template<typename DestinationArnT = Aws::String>
    void SetDestinationArn(DestinationArnT&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::forward<DestinationArnT>(value); }
    template<typename DestinationArnT = Aws::String>
    MetricDestinationSummary& WithDestinationArn(DestinationArnT&& value) { SetDestinationArn(std::forward<DestinationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field appears only when the destination is <code>Evidently</code>. It
     * specifies the ARN of the IAM role that is used to write to the Evidently
     * experiment that receives the metrics.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    MetricDestinationSummary& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}
  private:

    MetricDestination m_destination{MetricDestination::NOT_SET};
    bool m_destinationHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
