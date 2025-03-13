/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The parameters for using an EventBridge event bus as a target.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeTargetEventBridgeEventBusParameters">AWS
   * API Reference</a></p>
   */
  class PipeTargetEventBridgeEventBusParameters
  {
  public:
    AWS_PIPES_API PipeTargetEventBridgeEventBusParameters() = default;
    AWS_PIPES_API PipeTargetEventBridgeEventBusParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeTargetEventBridgeEventBusParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL subdomain of the endpoint. For example, if the URL for Endpoint is
     * https://abcde.veo.endpoints.event.amazonaws.com, then the EndpointId is
     * <code>abcde.veo</code>.</p>
     */
    inline const Aws::String& GetEndpointId() const { return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    template<typename EndpointIdT = Aws::String>
    void SetEndpointId(EndpointIdT&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::forward<EndpointIdT>(value); }
    template<typename EndpointIdT = Aws::String>
    PipeTargetEventBridgeEventBusParameters& WithEndpointId(EndpointIdT&& value) { SetEndpointId(std::forward<EndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A free-form string, with a maximum of 128 characters, used to decide what
     * fields to expect in the event detail.</p>
     */
    inline const Aws::String& GetDetailType() const { return m_detailType; }
    inline bool DetailTypeHasBeenSet() const { return m_detailTypeHasBeenSet; }
    template<typename DetailTypeT = Aws::String>
    void SetDetailType(DetailTypeT&& value) { m_detailTypeHasBeenSet = true; m_detailType = std::forward<DetailTypeT>(value); }
    template<typename DetailTypeT = Aws::String>
    PipeTargetEventBridgeEventBusParameters& WithDetailType(DetailTypeT&& value) { SetDetailType(std::forward<DetailTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the event.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    PipeTargetEventBridgeEventBusParameters& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services resources, identified by Amazon Resource Name (ARN),
     * which the event primarily concerns. Any number, including zero, may be
     * present.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<Aws::String>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<Aws::String>>
    PipeTargetEventBridgeEventBusParameters& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = Aws::String>
    PipeTargetEventBridgeEventBusParameters& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time stamp of the event, per <a
     * href="https://www.rfc-editor.org/rfc/rfc3339.txt">RFC3339</a>. If no time stamp
     * is provided, the time stamp of the <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/APIReference/API_PutEvents.html">PutEvents</a>
     * call is used.</p>
     */
    inline const Aws::String& GetTime() const { return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    template<typename TimeT = Aws::String>
    void SetTime(TimeT&& value) { m_timeHasBeenSet = true; m_time = std::forward<TimeT>(value); }
    template<typename TimeT = Aws::String>
    PipeTargetEventBridgeEventBusParameters& WithTime(TimeT&& value) { SetTime(std::forward<TimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::String m_detailType;
    bool m_detailTypeHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::String m_time;
    bool m_timeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
