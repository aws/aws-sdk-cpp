/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/EndpointType.h>
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
namespace PCS
{
namespace Model
{

  /**
   * <p>An endpoint available for interaction with the scheduler.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/Endpoint">AWS API
   * Reference</a></p>
   */
  class Endpoint
  {
  public:
    AWS_PCS_API Endpoint();
    AWS_PCS_API Endpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the type of endpoint running at the specific IP address.</p>
     */
    inline const EndpointType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const EndpointType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(EndpointType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Endpoint& WithType(const EndpointType& value) { SetType(value); return *this;}
    inline Endpoint& WithType(EndpointType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint's private IP address.</p> <p>Example: <code>2.2.2.2</code> </p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }
    inline Endpoint& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}
    inline Endpoint& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}
    inline Endpoint& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint's public IP address.</p> <p>Example: <code>1.1.1.1</code> </p>
     */
    inline const Aws::String& GetPublicIpAddress() const{ return m_publicIpAddress; }
    inline bool PublicIpAddressHasBeenSet() const { return m_publicIpAddressHasBeenSet; }
    inline void SetPublicIpAddress(const Aws::String& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = value; }
    inline void SetPublicIpAddress(Aws::String&& value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress = std::move(value); }
    inline void SetPublicIpAddress(const char* value) { m_publicIpAddressHasBeenSet = true; m_publicIpAddress.assign(value); }
    inline Endpoint& WithPublicIpAddress(const Aws::String& value) { SetPublicIpAddress(value); return *this;}
    inline Endpoint& WithPublicIpAddress(Aws::String&& value) { SetPublicIpAddress(std::move(value)); return *this;}
    inline Endpoint& WithPublicIpAddress(const char* value) { SetPublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint's connection port number.</p> <p> Example: <code>1234</code>
     * </p>
     */
    inline const Aws::String& GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(const Aws::String& value) { m_portHasBeenSet = true; m_port = value; }
    inline void SetPort(Aws::String&& value) { m_portHasBeenSet = true; m_port = std::move(value); }
    inline void SetPort(const char* value) { m_portHasBeenSet = true; m_port.assign(value); }
    inline Endpoint& WithPort(const Aws::String& value) { SetPort(value); return *this;}
    inline Endpoint& WithPort(Aws::String&& value) { SetPort(std::move(value)); return *this;}
    inline Endpoint& WithPort(const char* value) { SetPort(value); return *this;}
    ///@}
  private:

    EndpointType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::String m_publicIpAddress;
    bool m_publicIpAddressHasBeenSet = false;

    Aws::String m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
