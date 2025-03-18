/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/snowball/model/EventTriggerDefinition.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>Identifies </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/LambdaResource">AWS
   * API Reference</a></p>
   */
  class LambdaResource
  {
  public:
    AWS_SNOWBALL_API LambdaResource() = default;
    AWS_SNOWBALL_API LambdaResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API LambdaResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that represents an Lambda function to be
     * triggered by PUT object actions on the associated local Amazon S3 resource.</p>
     */
    inline const Aws::String& GetLambdaArn() const { return m_lambdaArn; }
    inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }
    template<typename LambdaArnT = Aws::String>
    void SetLambdaArn(LambdaArnT&& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = std::forward<LambdaArnT>(value); }
    template<typename LambdaArnT = Aws::String>
    LambdaResource& WithLambdaArn(LambdaArnT&& value) { SetLambdaArn(std::forward<LambdaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array of ARNs for <a>S3Resource</a> objects to trigger the
     * <a>LambdaResource</a> objects associated with this job.</p>
     */
    inline const Aws::Vector<EventTriggerDefinition>& GetEventTriggers() const { return m_eventTriggers; }
    inline bool EventTriggersHasBeenSet() const { return m_eventTriggersHasBeenSet; }
    template<typename EventTriggersT = Aws::Vector<EventTriggerDefinition>>
    void SetEventTriggers(EventTriggersT&& value) { m_eventTriggersHasBeenSet = true; m_eventTriggers = std::forward<EventTriggersT>(value); }
    template<typename EventTriggersT = Aws::Vector<EventTriggerDefinition>>
    LambdaResource& WithEventTriggers(EventTriggersT&& value) { SetEventTriggers(std::forward<EventTriggersT>(value)); return *this;}
    template<typename EventTriggersT = EventTriggerDefinition>
    LambdaResource& AddEventTriggers(EventTriggersT&& value) { m_eventTriggersHasBeenSet = true; m_eventTriggers.emplace_back(std::forward<EventTriggersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_lambdaArn;
    bool m_lambdaArnHasBeenSet = false;

    Aws::Vector<EventTriggerDefinition> m_eventTriggers;
    bool m_eventTriggersHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
