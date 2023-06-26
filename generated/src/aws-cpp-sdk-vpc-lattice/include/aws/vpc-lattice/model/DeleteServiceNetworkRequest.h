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
    AWS_VPCLATTICE_API DeleteServiceNetworkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteServiceNetwork"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) or ID of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkIdentifier() const{ return m_serviceNetworkIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) or ID of the service network.</p>
     */
    inline bool ServiceNetworkIdentifierHasBeenSet() const { return m_serviceNetworkIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) or ID of the service network.</p>
     */
    inline void SetServiceNetworkIdentifier(const Aws::String& value) { m_serviceNetworkIdentifierHasBeenSet = true; m_serviceNetworkIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) or ID of the service network.</p>
     */
    inline void SetServiceNetworkIdentifier(Aws::String&& value) { m_serviceNetworkIdentifierHasBeenSet = true; m_serviceNetworkIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or ID of the service network.</p>
     */
    inline void SetServiceNetworkIdentifier(const char* value) { m_serviceNetworkIdentifierHasBeenSet = true; m_serviceNetworkIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or ID of the service network.</p>
     */
    inline DeleteServiceNetworkRequest& WithServiceNetworkIdentifier(const Aws::String& value) { SetServiceNetworkIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or ID of the service network.</p>
     */
    inline DeleteServiceNetworkRequest& WithServiceNetworkIdentifier(Aws::String&& value) { SetServiceNetworkIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or ID of the service network.</p>
     */
    inline DeleteServiceNetworkRequest& WithServiceNetworkIdentifier(const char* value) { SetServiceNetworkIdentifier(value); return *this;}

  private:

    Aws::String m_serviceNetworkIdentifier;
    bool m_serviceNetworkIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
