/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/S3DataConfig.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>The output configuration details for a metric attribution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/MetricAttributionOutput">AWS
   * API Reference</a></p>
   */
  class MetricAttributionOutput
  {
  public:
    AWS_PERSONALIZE_API MetricAttributionOutput();
    AWS_PERSONALIZE_API MetricAttributionOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API MetricAttributionOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const S3DataConfig& GetS3DataDestination() const{ return m_s3DataDestination; }

    
    inline bool S3DataDestinationHasBeenSet() const { return m_s3DataDestinationHasBeenSet; }

    
    inline void SetS3DataDestination(const S3DataConfig& value) { m_s3DataDestinationHasBeenSet = true; m_s3DataDestination = value; }

    
    inline void SetS3DataDestination(S3DataConfig&& value) { m_s3DataDestinationHasBeenSet = true; m_s3DataDestination = std::move(value); }

    
    inline MetricAttributionOutput& WithS3DataDestination(const S3DataConfig& value) { SetS3DataDestination(value); return *this;}

    
    inline MetricAttributionOutput& WithS3DataDestination(S3DataConfig&& value) { SetS3DataDestination(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that has permissions
     * to add data to your output Amazon S3 bucket and add metrics to Amazon
     * CloudWatch. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that has permissions
     * to add data to your output Amazon S3 bucket and add metrics to Amazon
     * CloudWatch. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that has permissions
     * to add data to your output Amazon S3 bucket and add metrics to Amazon
     * CloudWatch. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that has permissions
     * to add data to your output Amazon S3 bucket and add metrics to Amazon
     * CloudWatch. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that has permissions
     * to add data to your output Amazon S3 bucket and add metrics to Amazon
     * CloudWatch. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that has permissions
     * to add data to your output Amazon S3 bucket and add metrics to Amazon
     * CloudWatch. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>.</p>
     */
    inline MetricAttributionOutput& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that has permissions
     * to add data to your output Amazon S3 bucket and add metrics to Amazon
     * CloudWatch. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>.</p>
     */
    inline MetricAttributionOutput& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that has permissions
     * to add data to your output Amazon S3 bucket and add metrics to Amazon
     * CloudWatch. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/measuring-recommendation-impact.html">Measuring
     * impact of recommendations</a>.</p>
     */
    inline MetricAttributionOutput& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    S3DataConfig m_s3DataDestination;
    bool m_s3DataDestinationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
