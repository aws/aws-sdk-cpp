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
   * <p>The requested resource could not be found.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ResourceNotFoundException">AWS
   * API Reference</a></p>
   */
  class ResourceNotFoundException
  {
  public:
    AWS_TIMESTREAMQUERY_API ResourceNotFoundException() = default;
    AWS_TIMESTREAMQUERY_API ResourceNotFoundException(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ResourceNotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ResourceNotFoundException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the scheduled query.</p>
     */
    inline const Aws::String& GetScheduledQueryArn() const { return m_scheduledQueryArn; }
    inline bool ScheduledQueryArnHasBeenSet() const { return m_scheduledQueryArnHasBeenSet; }
    template<typename ScheduledQueryArnT = Aws::String>
    void SetScheduledQueryArn(ScheduledQueryArnT&& value) { m_scheduledQueryArnHasBeenSet = true; m_scheduledQueryArn = std::forward<ScheduledQueryArnT>(value); }
    template<typename ScheduledQueryArnT = Aws::String>
    ResourceNotFoundException& WithScheduledQueryArn(ScheduledQueryArnT&& value) { SetScheduledQueryArn(std::forward<ScheduledQueryArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_scheduledQueryArn;
    bool m_scheduledQueryArnHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
