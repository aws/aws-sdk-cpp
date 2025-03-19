/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p> The output of the bridge. A flow output is delivered to the Amazon Web
   * Services cloud. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/BridgeFlowOutput">AWS
   * API Reference</a></p>
   */
  class BridgeFlowOutput
  {
  public:
    AWS_MEDIACONNECT_API BridgeFlowOutput() = default;
    AWS_MEDIACONNECT_API BridgeFlowOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API BridgeFlowOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Number (ARN) of the cloud flow.</p>
     */
    inline const Aws::String& GetFlowArn() const { return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    template<typename FlowArnT = Aws::String>
    void SetFlowArn(FlowArnT&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::forward<FlowArnT>(value); }
    template<typename FlowArnT = Aws::String>
    BridgeFlowOutput& WithFlowArn(FlowArnT&& value) { SetFlowArn(std::forward<FlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Number (ARN) of the flow source.</p>
     */
    inline const Aws::String& GetFlowSourceArn() const { return m_flowSourceArn; }
    inline bool FlowSourceArnHasBeenSet() const { return m_flowSourceArnHasBeenSet; }
    template<typename FlowSourceArnT = Aws::String>
    void SetFlowSourceArn(FlowSourceArnT&& value) { m_flowSourceArnHasBeenSet = true; m_flowSourceArn = std::forward<FlowSourceArnT>(value); }
    template<typename FlowSourceArnT = Aws::String>
    BridgeFlowOutput& WithFlowSourceArn(FlowSourceArnT&& value) { SetFlowSourceArn(std::forward<FlowSourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the bridge's output.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    BridgeFlowOutput& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::String m_flowSourceArn;
    bool m_flowSourceArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
