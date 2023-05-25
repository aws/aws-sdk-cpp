/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/vpc-lattice/model/AuthType.h>
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
  class UpdateServiceNetworkRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API UpdateServiceNetworkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceNetwork"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The type of IAM policy.</p> <ul> <li> <p> <code>NONE</code>: The resource
     * does not use an IAM policy. This is the default.</p> </li> <li> <p>
     * <code>AWS_IAM</code>: The resource uses an IAM policy. When this type is used,
     * auth is enabled and an auth policy is required.</p> </li> </ul>
     */
    inline const AuthType& GetAuthType() const{ return m_authType; }

    /**
     * <p>The type of IAM policy.</p> <ul> <li> <p> <code>NONE</code>: The resource
     * does not use an IAM policy. This is the default.</p> </li> <li> <p>
     * <code>AWS_IAM</code>: The resource uses an IAM policy. When this type is used,
     * auth is enabled and an auth policy is required.</p> </li> </ul>
     */
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }

    /**
     * <p>The type of IAM policy.</p> <ul> <li> <p> <code>NONE</code>: The resource
     * does not use an IAM policy. This is the default.</p> </li> <li> <p>
     * <code>AWS_IAM</code>: The resource uses an IAM policy. When this type is used,
     * auth is enabled and an auth policy is required.</p> </li> </ul>
     */
    inline void SetAuthType(const AuthType& value) { m_authTypeHasBeenSet = true; m_authType = value; }

    /**
     * <p>The type of IAM policy.</p> <ul> <li> <p> <code>NONE</code>: The resource
     * does not use an IAM policy. This is the default.</p> </li> <li> <p>
     * <code>AWS_IAM</code>: The resource uses an IAM policy. When this type is used,
     * auth is enabled and an auth policy is required.</p> </li> </ul>
     */
    inline void SetAuthType(AuthType&& value) { m_authTypeHasBeenSet = true; m_authType = std::move(value); }

    /**
     * <p>The type of IAM policy.</p> <ul> <li> <p> <code>NONE</code>: The resource
     * does not use an IAM policy. This is the default.</p> </li> <li> <p>
     * <code>AWS_IAM</code>: The resource uses an IAM policy. When this type is used,
     * auth is enabled and an auth policy is required.</p> </li> </ul>
     */
    inline UpdateServiceNetworkRequest& WithAuthType(const AuthType& value) { SetAuthType(value); return *this;}

    /**
     * <p>The type of IAM policy.</p> <ul> <li> <p> <code>NONE</code>: The resource
     * does not use an IAM policy. This is the default.</p> </li> <li> <p>
     * <code>AWS_IAM</code>: The resource uses an IAM policy. When this type is used,
     * auth is enabled and an auth policy is required.</p> </li> </ul>
     */
    inline UpdateServiceNetworkRequest& WithAuthType(AuthType&& value) { SetAuthType(std::move(value)); return *this;}


    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkIdentifier() const{ return m_serviceNetworkIdentifier; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service network.</p>
     */
    inline bool ServiceNetworkIdentifierHasBeenSet() const { return m_serviceNetworkIdentifierHasBeenSet; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service network.</p>
     */
    inline void SetServiceNetworkIdentifier(const Aws::String& value) { m_serviceNetworkIdentifierHasBeenSet = true; m_serviceNetworkIdentifier = value; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service network.</p>
     */
    inline void SetServiceNetworkIdentifier(Aws::String&& value) { m_serviceNetworkIdentifierHasBeenSet = true; m_serviceNetworkIdentifier = std::move(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service network.</p>
     */
    inline void SetServiceNetworkIdentifier(const char* value) { m_serviceNetworkIdentifierHasBeenSet = true; m_serviceNetworkIdentifier.assign(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service network.</p>
     */
    inline UpdateServiceNetworkRequest& WithServiceNetworkIdentifier(const Aws::String& value) { SetServiceNetworkIdentifier(value); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service network.</p>
     */
    inline UpdateServiceNetworkRequest& WithServiceNetworkIdentifier(Aws::String&& value) { SetServiceNetworkIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service network.</p>
     */
    inline UpdateServiceNetworkRequest& WithServiceNetworkIdentifier(const char* value) { SetServiceNetworkIdentifier(value); return *this;}

  private:

    AuthType m_authType;
    bool m_authTypeHasBeenSet = false;

    Aws::String m_serviceNetworkIdentifier;
    bool m_serviceNetworkIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
