/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class GetListenerRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API GetListenerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetListener"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID or ARN of the listener.</p>
     */
    inline const Aws::String& GetListenerIdentifier() const { return m_listenerIdentifier; }
    inline bool ListenerIdentifierHasBeenSet() const { return m_listenerIdentifierHasBeenSet; }
    template<typename ListenerIdentifierT = Aws::String>
    void SetListenerIdentifier(ListenerIdentifierT&& value) { m_listenerIdentifierHasBeenSet = true; m_listenerIdentifier = std::forward<ListenerIdentifierT>(value); }
    template<typename ListenerIdentifierT = Aws::String>
    GetListenerRequest& WithListenerIdentifier(ListenerIdentifierT&& value) { SetListenerIdentifier(std::forward<ListenerIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID or ARN of the service.</p>
     */
    inline const Aws::String& GetServiceIdentifier() const { return m_serviceIdentifier; }
    inline bool ServiceIdentifierHasBeenSet() const { return m_serviceIdentifierHasBeenSet; }
    template<typename ServiceIdentifierT = Aws::String>
    void SetServiceIdentifier(ServiceIdentifierT&& value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier = std::forward<ServiceIdentifierT>(value); }
    template<typename ServiceIdentifierT = Aws::String>
    GetListenerRequest& WithServiceIdentifier(ServiceIdentifierT&& value) { SetServiceIdentifier(std::forward<ServiceIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_listenerIdentifier;
    bool m_listenerIdentifierHasBeenSet = false;

    Aws::String m_serviceIdentifier;
    bool m_serviceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
