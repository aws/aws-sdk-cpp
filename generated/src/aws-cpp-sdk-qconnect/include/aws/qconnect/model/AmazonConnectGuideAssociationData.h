/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>Content association data for a <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/step-by-step-guided-experiences.html">step-by-step
   * guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AmazonConnectGuideAssociationData">AWS
   * API Reference</a></p>
   */
  class AmazonConnectGuideAssociationData
  {
  public:
    AWS_QCONNECT_API AmazonConnectGuideAssociationData() = default;
    AWS_QCONNECT_API AmazonConnectGuideAssociationData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AmazonConnectGuideAssociationData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Connect flow. Step-by-step
     * guides are a type of flow.</p>
     */
    inline const Aws::String& GetFlowId() const { return m_flowId; }
    inline bool FlowIdHasBeenSet() const { return m_flowIdHasBeenSet; }
    template<typename FlowIdT = Aws::String>
    void SetFlowId(FlowIdT&& value) { m_flowIdHasBeenSet = true; m_flowId = std::forward<FlowIdT>(value); }
    template<typename FlowIdT = Aws::String>
    AmazonConnectGuideAssociationData& WithFlowId(FlowIdT&& value) { SetFlowId(std::forward<FlowIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowId;
    bool m_flowIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
