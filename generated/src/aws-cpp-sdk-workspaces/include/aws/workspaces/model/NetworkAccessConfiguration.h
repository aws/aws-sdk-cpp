/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the network details of a WorkSpaces Pool.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/NetworkAccessConfiguration">AWS
   * API Reference</a></p>
   */
  class NetworkAccessConfiguration
  {
  public:
    AWS_WORKSPACES_API NetworkAccessConfiguration() = default;
    AWS_WORKSPACES_API NetworkAccessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API NetworkAccessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The private IP address of the elastic network interface that is attached to
     * instances in your VPC.</p>
     */
    inline const Aws::String& GetEniPrivateIpAddress() const { return m_eniPrivateIpAddress; }
    inline bool EniPrivateIpAddressHasBeenSet() const { return m_eniPrivateIpAddressHasBeenSet; }
    template<typename EniPrivateIpAddressT = Aws::String>
    void SetEniPrivateIpAddress(EniPrivateIpAddressT&& value) { m_eniPrivateIpAddressHasBeenSet = true; m_eniPrivateIpAddress = std::forward<EniPrivateIpAddressT>(value); }
    template<typename EniPrivateIpAddressT = Aws::String>
    NetworkAccessConfiguration& WithEniPrivateIpAddress(EniPrivateIpAddressT&& value) { SetEniPrivateIpAddress(std::forward<EniPrivateIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource identifier of the elastic network interface that is attached to
     * instances in your VPC. All network interfaces have the eni-xxxxxxxx resource
     * identifier.</p>
     */
    inline const Aws::String& GetEniId() const { return m_eniId; }
    inline bool EniIdHasBeenSet() const { return m_eniIdHasBeenSet; }
    template<typename EniIdT = Aws::String>
    void SetEniId(EniIdT&& value) { m_eniIdHasBeenSet = true; m_eniId = std::forward<EniIdT>(value); }
    template<typename EniIdT = Aws::String>
    NetworkAccessConfiguration& WithEniId(EniIdT&& value) { SetEniId(std::forward<EniIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eniPrivateIpAddress;
    bool m_eniPrivateIpAddressHasBeenSet = false;

    Aws::String m_eniId;
    bool m_eniIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
