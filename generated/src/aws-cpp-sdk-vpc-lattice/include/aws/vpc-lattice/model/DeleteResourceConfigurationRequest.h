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
  class DeleteResourceConfigurationRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API DeleteResourceConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourceConfiguration"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID or ARN of the resource configuration.</p>
     */
    inline const Aws::String& GetResourceConfigurationIdentifier() const { return m_resourceConfigurationIdentifier; }
    inline bool ResourceConfigurationIdentifierHasBeenSet() const { return m_resourceConfigurationIdentifierHasBeenSet; }
    template<typename ResourceConfigurationIdentifierT = Aws::String>
    void SetResourceConfigurationIdentifier(ResourceConfigurationIdentifierT&& value) { m_resourceConfigurationIdentifierHasBeenSet = true; m_resourceConfigurationIdentifier = std::forward<ResourceConfigurationIdentifierT>(value); }
    template<typename ResourceConfigurationIdentifierT = Aws::String>
    DeleteResourceConfigurationRequest& WithResourceConfigurationIdentifier(ResourceConfigurationIdentifierT&& value) { SetResourceConfigurationIdentifier(std::forward<ResourceConfigurationIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceConfigurationIdentifier;
    bool m_resourceConfigurationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
