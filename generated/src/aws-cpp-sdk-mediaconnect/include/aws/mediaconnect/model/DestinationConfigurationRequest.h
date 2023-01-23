/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * The transport parameters that you want to associate with an outbound media
   * stream.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DestinationConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class DestinationConfigurationRequest
  {
  public:
    AWS_MEDIACONNECT_API DestinationConfigurationRequest();
    AWS_MEDIACONNECT_API DestinationConfigurationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API DestinationConfigurationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The IP address where you want MediaConnect to send contents of the media stream.
     */
    inline const Aws::String& GetDestinationIp() const{ return m_destinationIp; }

    /**
     * The IP address where you want MediaConnect to send contents of the media stream.
     */
    inline bool DestinationIpHasBeenSet() const { return m_destinationIpHasBeenSet; }

    /**
     * The IP address where you want MediaConnect to send contents of the media stream.
     */
    inline void SetDestinationIp(const Aws::String& value) { m_destinationIpHasBeenSet = true; m_destinationIp = value; }

    /**
     * The IP address where you want MediaConnect to send contents of the media stream.
     */
    inline void SetDestinationIp(Aws::String&& value) { m_destinationIpHasBeenSet = true; m_destinationIp = std::move(value); }

    /**
     * The IP address where you want MediaConnect to send contents of the media stream.
     */
    inline void SetDestinationIp(const char* value) { m_destinationIpHasBeenSet = true; m_destinationIp.assign(value); }

    /**
     * The IP address where you want MediaConnect to send contents of the media stream.
     */
    inline DestinationConfigurationRequest& WithDestinationIp(const Aws::String& value) { SetDestinationIp(value); return *this;}

    /**
     * The IP address where you want MediaConnect to send contents of the media stream.
     */
    inline DestinationConfigurationRequest& WithDestinationIp(Aws::String&& value) { SetDestinationIp(std::move(value)); return *this;}

    /**
     * The IP address where you want MediaConnect to send contents of the media stream.
     */
    inline DestinationConfigurationRequest& WithDestinationIp(const char* value) { SetDestinationIp(value); return *this;}


    /**
     * The port that you want MediaConnect to use when it distributes the media stream
     * to the output.
     */
    inline int GetDestinationPort() const{ return m_destinationPort; }

    /**
     * The port that you want MediaConnect to use when it distributes the media stream
     * to the output.
     */
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }

    /**
     * The port that you want MediaConnect to use when it distributes the media stream
     * to the output.
     */
    inline void SetDestinationPort(int value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }

    /**
     * The port that you want MediaConnect to use when it distributes the media stream
     * to the output.
     */
    inline DestinationConfigurationRequest& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}


    /**
     * The VPC interface that you want to use for the media stream associated with the
     * output.
     */
    inline const InterfaceRequest& GetInterface() const{ return m_interface; }

    /**
     * The VPC interface that you want to use for the media stream associated with the
     * output.
     */
    inline bool InterfaceHasBeenSet() const { return m_interfaceHasBeenSet; }

    /**
     * The VPC interface that you want to use for the media stream associated with the
     * output.
     */
    inline void SetInterface(const InterfaceRequest& value) { m_interfaceHasBeenSet = true; m_interface = value; }

    /**
     * The VPC interface that you want to use for the media stream associated with the
     * output.
     */
    inline void SetInterface(InterfaceRequest&& value) { m_interfaceHasBeenSet = true; m_interface = std::move(value); }

    /**
     * The VPC interface that you want to use for the media stream associated with the
     * output.
     */
    inline DestinationConfigurationRequest& WithInterface(const InterfaceRequest& value) { SetInterface(value); return *this;}

    /**
     * The VPC interface that you want to use for the media stream associated with the
     * output.
     */
    inline DestinationConfigurationRequest& WithInterface(InterfaceRequest&& value) { SetInterface(std::move(value)); return *this;}

  private:

    Aws::String m_destinationIp;
    bool m_destinationIpHasBeenSet = false;

    int m_destinationPort;
    bool m_destinationPortHasBeenSet = false;

    InterfaceRequest m_interface;
    bool m_interfaceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
