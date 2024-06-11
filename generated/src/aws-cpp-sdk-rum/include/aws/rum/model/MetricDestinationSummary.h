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
    AWS_CLOUDWATCHRUM_API MetricDestinationSummary();
    AWS_CLOUDWATCHRUM_API MetricDestinationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API MetricDestinationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether the destination is <code>CloudWatch</code> or
     * <code>Evidently</code>.</p>
     */
    inline const MetricDestination& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const MetricDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(MetricDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline MetricDestinationSummary& WithDestination(const MetricDestination& value) { SetDestination(value); return *this;}
    inline MetricDestinationSummary& WithDestination(MetricDestination&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the destination is <code>Evidently</code>, this specifies the ARN of the
     * Evidently experiment that receives the metrics.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }
    inline MetricDestinationSummary& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}
    inline MetricDestinationSummary& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}
    inline MetricDestinationSummary& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field appears only when the destination is <code>Evidently</code>. It
     * specifies the ARN of the IAM role that is used to write to the Evidently
     * experiment that receives the metrics.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline MetricDestinationSummary& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline MetricDestinationSummary& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline MetricDestinationSummary& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}
  private:

    MetricDestination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
