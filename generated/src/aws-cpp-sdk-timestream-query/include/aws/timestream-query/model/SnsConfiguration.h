/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>Details on SNS that are required to send the notification.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/SnsConfiguration">AWS
   * API Reference</a></p>
   */
  class SnsConfiguration
  {
  public:
    AWS_TIMESTREAMQUERY_API SnsConfiguration();
    AWS_TIMESTREAMQUERY_API SnsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API SnsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>SNS topic ARN that the scheduled query status notifications will be sent
     * to.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>SNS topic ARN that the scheduled query status notifications will be sent
     * to.</p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p>SNS topic ARN that the scheduled query status notifications will be sent
     * to.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>SNS topic ARN that the scheduled query status notifications will be sent
     * to.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * <p>SNS topic ARN that the scheduled query status notifications will be sent
     * to.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>SNS topic ARN that the scheduled query status notifications will be sent
     * to.</p>
     */
    inline SnsConfiguration& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>SNS topic ARN that the scheduled query status notifications will be sent
     * to.</p>
     */
    inline SnsConfiguration& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>SNS topic ARN that the scheduled query status notifications will be sent
     * to.</p>
     */
    inline SnsConfiguration& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}

  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
