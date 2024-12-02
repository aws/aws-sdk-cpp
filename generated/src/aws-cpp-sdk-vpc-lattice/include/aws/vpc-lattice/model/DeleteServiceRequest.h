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
  class DeleteServiceRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API DeleteServiceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteService"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID or ARN of the service.</p>
     */
    inline const Aws::String& GetServiceIdentifier() const{ return m_serviceIdentifier; }
    inline bool ServiceIdentifierHasBeenSet() const { return m_serviceIdentifierHasBeenSet; }
    inline void SetServiceIdentifier(const Aws::String& value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier = value; }
    inline void SetServiceIdentifier(Aws::String&& value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier = std::move(value); }
    inline void SetServiceIdentifier(const char* value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier.assign(value); }
    inline DeleteServiceRequest& WithServiceIdentifier(const Aws::String& value) { SetServiceIdentifier(value); return *this;}
    inline DeleteServiceRequest& WithServiceIdentifier(Aws::String&& value) { SetServiceIdentifier(std::move(value)); return *this;}
    inline DeleteServiceRequest& WithServiceIdentifier(const char* value) { SetServiceIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceIdentifier;
    bool m_serviceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
