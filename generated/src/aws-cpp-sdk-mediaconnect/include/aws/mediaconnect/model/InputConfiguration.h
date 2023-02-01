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
   * The transport parameters that are associated with an incoming media
   * stream.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/InputConfiguration">AWS
   * API Reference</a></p>
   */
  class InputConfiguration
  {
  public:
    AWS_MEDIACONNECT_API InputConfiguration();
    AWS_MEDIACONNECT_API InputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API InputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The IP address that the flow listens on for incoming content for a media stream.
     */
    inline const Aws::String& GetInputIp() const{ return m_inputIp; }

    /**
     * The IP address that the flow listens on for incoming content for a media stream.
     */
    inline bool InputIpHasBeenSet() const { return m_inputIpHasBeenSet; }

    /**
     * The IP address that the flow listens on for incoming content for a media stream.
     */
    inline void SetInputIp(const Aws::String& value) { m_inputIpHasBeenSet = true; m_inputIp = value; }

    /**
     * The IP address that the flow listens on for incoming content for a media stream.
     */
    inline void SetInputIp(Aws::String&& value) { m_inputIpHasBeenSet = true; m_inputIp = std::move(value); }

    /**
     * The IP address that the flow listens on for incoming content for a media stream.
     */
    inline void SetInputIp(const char* value) { m_inputIpHasBeenSet = true; m_inputIp.assign(value); }

    /**
     * The IP address that the flow listens on for incoming content for a media stream.
     */
    inline InputConfiguration& WithInputIp(const Aws::String& value) { SetInputIp(value); return *this;}

    /**
     * The IP address that the flow listens on for incoming content for a media stream.
     */
    inline InputConfiguration& WithInputIp(Aws::String&& value) { SetInputIp(std::move(value)); return *this;}

    /**
     * The IP address that the flow listens on for incoming content for a media stream.
     */
    inline InputConfiguration& WithInputIp(const char* value) { SetInputIp(value); return *this;}


    /**
     * The port that the flow listens on for an incoming media stream.
     */
    inline int GetInputPort() const{ return m_inputPort; }

    /**
     * The port that the flow listens on for an incoming media stream.
     */
    inline bool InputPortHasBeenSet() const { return m_inputPortHasBeenSet; }

    /**
     * The port that the flow listens on for an incoming media stream.
     */
    inline void SetInputPort(int value) { m_inputPortHasBeenSet = true; m_inputPort = value; }

    /**
     * The port that the flow listens on for an incoming media stream.
     */
    inline InputConfiguration& WithInputPort(int value) { SetInputPort(value); return *this;}


    /**
     * The VPC interface where the media stream comes in from.
     */
    inline const Interface& GetInterface() const{ return m_interface; }

    /**
     * The VPC interface where the media stream comes in from.
     */
    inline bool InterfaceHasBeenSet() const { return m_interfaceHasBeenSet; }

    /**
     * The VPC interface where the media stream comes in from.
     */
    inline void SetInterface(const Interface& value) { m_interfaceHasBeenSet = true; m_interface = value; }

    /**
     * The VPC interface where the media stream comes in from.
     */
    inline void SetInterface(Interface&& value) { m_interfaceHasBeenSet = true; m_interface = std::move(value); }

    /**
     * The VPC interface where the media stream comes in from.
     */
    inline InputConfiguration& WithInterface(const Interface& value) { SetInterface(value); return *this;}

    /**
     * The VPC interface where the media stream comes in from.
     */
    inline InputConfiguration& WithInterface(Interface&& value) { SetInterface(std::move(value)); return *this;}

  private:

    Aws::String m_inputIp;
    bool m_inputIpHasBeenSet = false;

    int m_inputPort;
    bool m_inputPortHasBeenSet = false;

    Interface m_interface;
    bool m_interfaceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
