/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/Interface.h>
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
   * <p> The transport parameters that are associated with an incoming media
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/InputConfiguration">AWS
   * API Reference</a></p>
   */
  class InputConfiguration
  {
  public:
    AWS_MEDIACONNECT_API InputConfiguration() = default;
    AWS_MEDIACONNECT_API InputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API InputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The IP address that the flow listens on for incoming content for a media
     * stream.</p>
     */
    inline const Aws::String& GetInputIp() const { return m_inputIp; }
    inline bool InputIpHasBeenSet() const { return m_inputIpHasBeenSet; }
    template<typename InputIpT = Aws::String>
    void SetInputIp(InputIpT&& value) { m_inputIpHasBeenSet = true; m_inputIp = std::forward<InputIpT>(value); }
    template<typename InputIpT = Aws::String>
    InputConfiguration& WithInputIp(InputIpT&& value) { SetInputIp(std::forward<InputIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The port that the flow listens on for an incoming media stream.</p>
     */
    inline int GetInputPort() const { return m_inputPort; }
    inline bool InputPortHasBeenSet() const { return m_inputPortHasBeenSet; }
    inline void SetInputPort(int value) { m_inputPortHasBeenSet = true; m_inputPort = value; }
    inline InputConfiguration& WithInputPort(int value) { SetInputPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The VPC interface where the media stream comes in from.</p>
     */
    inline const Interface& GetInterface() const { return m_interface; }
    inline bool InterfaceHasBeenSet() const { return m_interfaceHasBeenSet; }
    template<typename InterfaceT = Interface>
    void SetInterface(InterfaceT&& value) { m_interfaceHasBeenSet = true; m_interface = std::forward<InterfaceT>(value); }
    template<typename InterfaceT = Interface>
    InputConfiguration& WithInterface(InterfaceT&& value) { SetInterface(std::forward<InterfaceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputIp;
    bool m_inputIpHasBeenSet = false;

    int m_inputPort{0};
    bool m_inputPortHasBeenSet = false;

    Interface m_interface;
    bool m_interfaceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
