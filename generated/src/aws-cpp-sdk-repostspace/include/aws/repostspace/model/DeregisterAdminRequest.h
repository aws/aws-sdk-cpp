/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/repostspace/RepostspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace repostspace
{
namespace Model
{

  /**
   */
  class DeregisterAdminRequest : public RepostspaceRequest
  {
  public:
    AWS_REPOSTSPACE_API DeregisterAdminRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterAdmin"; }

    AWS_REPOSTSPACE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the admin to remove.</p>
     */
    inline const Aws::String& GetAdminId() const{ return m_adminId; }

    /**
     * <p>The ID of the admin to remove.</p>
     */
    inline bool AdminIdHasBeenSet() const { return m_adminIdHasBeenSet; }

    /**
     * <p>The ID of the admin to remove.</p>
     */
    inline void SetAdminId(const Aws::String& value) { m_adminIdHasBeenSet = true; m_adminId = value; }

    /**
     * <p>The ID of the admin to remove.</p>
     */
    inline void SetAdminId(Aws::String&& value) { m_adminIdHasBeenSet = true; m_adminId = std::move(value); }

    /**
     * <p>The ID of the admin to remove.</p>
     */
    inline void SetAdminId(const char* value) { m_adminIdHasBeenSet = true; m_adminId.assign(value); }

    /**
     * <p>The ID of the admin to remove.</p>
     */
    inline DeregisterAdminRequest& WithAdminId(const Aws::String& value) { SetAdminId(value); return *this;}

    /**
     * <p>The ID of the admin to remove.</p>
     */
    inline DeregisterAdminRequest& WithAdminId(Aws::String&& value) { SetAdminId(std::move(value)); return *this;}

    /**
     * <p>The ID of the admin to remove.</p>
     */
    inline DeregisterAdminRequest& WithAdminId(const char* value) { SetAdminId(value); return *this;}


    /**
     * <p>The ID of the private re:Post to remove the admin from.</p>
     */
    inline const Aws::String& GetSpaceId() const{ return m_spaceId; }

    /**
     * <p>The ID of the private re:Post to remove the admin from.</p>
     */
    inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }

    /**
     * <p>The ID of the private re:Post to remove the admin from.</p>
     */
    inline void SetSpaceId(const Aws::String& value) { m_spaceIdHasBeenSet = true; m_spaceId = value; }

    /**
     * <p>The ID of the private re:Post to remove the admin from.</p>
     */
    inline void SetSpaceId(Aws::String&& value) { m_spaceIdHasBeenSet = true; m_spaceId = std::move(value); }

    /**
     * <p>The ID of the private re:Post to remove the admin from.</p>
     */
    inline void SetSpaceId(const char* value) { m_spaceIdHasBeenSet = true; m_spaceId.assign(value); }

    /**
     * <p>The ID of the private re:Post to remove the admin from.</p>
     */
    inline DeregisterAdminRequest& WithSpaceId(const Aws::String& value) { SetSpaceId(value); return *this;}

    /**
     * <p>The ID of the private re:Post to remove the admin from.</p>
     */
    inline DeregisterAdminRequest& WithSpaceId(Aws::String&& value) { SetSpaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the private re:Post to remove the admin from.</p>
     */
    inline DeregisterAdminRequest& WithSpaceId(const char* value) { SetSpaceId(value); return *this;}

  private:

    Aws::String m_adminId;
    bool m_adminIdHasBeenSet = false;

    Aws::String m_spaceId;
    bool m_spaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
