/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/InterfaceRequest.h>
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
   * <p> The transport parameters that you want to associate with an incoming media
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/InputConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class InputConfigurationRequest
  {
  public:
    AWS_MEDIACONNECT_API InputConfigurationRequest() = default;
    AWS_MEDIACONNECT_API InputConfigurationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API InputConfigurationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The port that you want the flow to listen on for an incoming media
     * stream.</p>
     */
    inline int GetInputPort() const { return m_inputPort; }
    inline bool InputPortHasBeenSet() const { return m_inputPortHasBeenSet; }
    inline void SetInputPort(int value) { m_inputPortHasBeenSet = true; m_inputPort = value; }
    inline InputConfigurationRequest& WithInputPort(int value) { SetInputPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The VPC interface that you want to use for the incoming media stream.</p>
     */
    inline const InterfaceRequest& GetInterface() const { return m_interface; }
    inline bool InterfaceHasBeenSet() const { return m_interfaceHasBeenSet; }
    template<typename InterfaceT = InterfaceRequest>
    void SetInterface(InterfaceT&& value) { m_interfaceHasBeenSet = true; m_interface = std::forward<InterfaceT>(value); }
    template<typename InterfaceT = InterfaceRequest>
    InputConfigurationRequest& WithInterface(InterfaceT&& value) { SetInterface(std::forward<InterfaceT>(value)); return *this;}
    ///@}
  private:

    int m_inputPort{0};
    bool m_inputPortHasBeenSet = false;

    InterfaceRequest m_interface;
    bool m_interfaceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
