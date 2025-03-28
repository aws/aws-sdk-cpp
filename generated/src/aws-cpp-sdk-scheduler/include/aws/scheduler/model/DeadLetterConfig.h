﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
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
namespace Scheduler
{
namespace Model
{

  /**
   * <p>An object that contains information about an Amazon SQS queue that
   * EventBridge Scheduler uses as a dead-letter queue for your schedule. If
   * specified, EventBridge Scheduler delivers failed events that could not be
   * successfully delivered to a target to the queue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/DeadLetterConfig">AWS
   * API Reference</a></p>
   */
  class DeadLetterConfig
  {
  public:
    AWS_SCHEDULER_API DeadLetterConfig() = default;
    AWS_SCHEDULER_API DeadLetterConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API DeadLetterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SQS queue specified as the destination
     * for the dead-letter queue.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DeadLetterConfig& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
