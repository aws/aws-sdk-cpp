/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class DeleteVPCConnectionRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DeleteVPCConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVPCConnection"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Web Services account ID of the account where you want to delete a
     * VPC connection.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The Amazon Web Services account ID of the account where you want to delete a
     * VPC connection.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the account where you want to delete a
     * VPC connection.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the account where you want to delete a
     * VPC connection.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the account where you want to delete a
     * VPC connection.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the account where you want to delete a
     * VPC connection.</p>
     */
    inline DeleteVPCConnectionRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the account where you want to delete a
     * VPC connection.</p>
     */
    inline DeleteVPCConnectionRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the account where you want to delete a
     * VPC connection.</p>
     */
    inline DeleteVPCConnectionRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID of the VPC connection that you're creating. This ID is a unique
     * identifier for each Amazon Web Services Region in an Amazon Web Services
     * account.</p>
     */
    inline const Aws::String& GetVPCConnectionId() const{ return m_vPCConnectionId; }

    /**
     * <p>The ID of the VPC connection that you're creating. This ID is a unique
     * identifier for each Amazon Web Services Region in an Amazon Web Services
     * account.</p>
     */
    inline bool VPCConnectionIdHasBeenSet() const { return m_vPCConnectionIdHasBeenSet; }

    /**
     * <p>The ID of the VPC connection that you're creating. This ID is a unique
     * identifier for each Amazon Web Services Region in an Amazon Web Services
     * account.</p>
     */
    inline void SetVPCConnectionId(const Aws::String& value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId = value; }

    /**
     * <p>The ID of the VPC connection that you're creating. This ID is a unique
     * identifier for each Amazon Web Services Region in an Amazon Web Services
     * account.</p>
     */
    inline void SetVPCConnectionId(Aws::String&& value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId = std::move(value); }

    /**
     * <p>The ID of the VPC connection that you're creating. This ID is a unique
     * identifier for each Amazon Web Services Region in an Amazon Web Services
     * account.</p>
     */
    inline void SetVPCConnectionId(const char* value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId.assign(value); }

    /**
     * <p>The ID of the VPC connection that you're creating. This ID is a unique
     * identifier for each Amazon Web Services Region in an Amazon Web Services
     * account.</p>
     */
    inline DeleteVPCConnectionRequest& WithVPCConnectionId(const Aws::String& value) { SetVPCConnectionId(value); return *this;}

    /**
     * <p>The ID of the VPC connection that you're creating. This ID is a unique
     * identifier for each Amazon Web Services Region in an Amazon Web Services
     * account.</p>
     */
    inline DeleteVPCConnectionRequest& WithVPCConnectionId(Aws::String&& value) { SetVPCConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC connection that you're creating. This ID is a unique
     * identifier for each Amazon Web Services Region in an Amazon Web Services
     * account.</p>
     */
    inline DeleteVPCConnectionRequest& WithVPCConnectionId(const char* value) { SetVPCConnectionId(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_vPCConnectionId;
    bool m_vPCConnectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
