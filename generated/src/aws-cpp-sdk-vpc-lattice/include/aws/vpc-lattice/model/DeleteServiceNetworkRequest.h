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
  class DeleteServiceNetworkRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API DeleteServiceNetworkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteServiceNetwork"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID or ARN of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkIdentifier() const { return m_serviceNetworkIdentifier; }
    inline bool ServiceNetworkIdentifierHasBeenSet() const { return m_serviceNetworkIdentifierHasBeenSet; }
    template<typename ServiceNetworkIdentifierT = Aws::String>
    void SetServiceNetworkIdentifier(ServiceNetworkIdentifierT&& value) { m_serviceNetworkIdentifierHasBeenSet = true; m_serviceNetworkIdentifier = std::forward<ServiceNetworkIdentifierT>(value); }
    template<typename ServiceNetworkIdentifierT = Aws::String>
    DeleteServiceNetworkRequest& WithServiceNetworkIdentifier(ServiceNetworkIdentifierT&& value) { SetServiceNetworkIdentifier(std::forward<ServiceNetworkIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceNetworkIdentifier;
    bool m_serviceNetworkIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
