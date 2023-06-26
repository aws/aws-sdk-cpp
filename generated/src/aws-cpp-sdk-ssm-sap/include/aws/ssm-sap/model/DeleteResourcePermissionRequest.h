﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/SsmSapRequest.h>
#include <aws/ssm-sap/model/PermissionActionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SsmSap
{
namespace Model
{

  /**
   */
  class DeleteResourcePermissionRequest : public SsmSapRequest
  {
  public:
    AWS_SSMSAP_API DeleteResourcePermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourcePermission"; }

    AWS_SSMSAP_API Aws::String SerializePayload() const override;


    /**
     * <p>Delete or restore the permissions on the target database.</p>
     */
    inline const PermissionActionType& GetActionType() const{ return m_actionType; }

    /**
     * <p>Delete or restore the permissions on the target database.</p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p>Delete or restore the permissions on the target database.</p>
     */
    inline void SetActionType(const PermissionActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p>Delete or restore the permissions on the target database.</p>
     */
    inline void SetActionType(PermissionActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p>Delete or restore the permissions on the target database.</p>
     */
    inline DeleteResourcePermissionRequest& WithActionType(const PermissionActionType& value) { SetActionType(value); return *this;}

    /**
     * <p>Delete or restore the permissions on the target database.</p>
     */
    inline DeleteResourcePermissionRequest& WithActionType(PermissionActionType&& value) { SetActionType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the source resource.</p>
     */
    inline const Aws::String& GetSourceResourceArn() const{ return m_sourceResourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source resource.</p>
     */
    inline bool SourceResourceArnHasBeenSet() const { return m_sourceResourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source resource.</p>
     */
    inline void SetSourceResourceArn(const Aws::String& value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source resource.</p>
     */
    inline void SetSourceResourceArn(Aws::String&& value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source resource.</p>
     */
    inline void SetSourceResourceArn(const char* value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source resource.</p>
     */
    inline DeleteResourcePermissionRequest& WithSourceResourceArn(const Aws::String& value) { SetSourceResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source resource.</p>
     */
    inline DeleteResourcePermissionRequest& WithSourceResourceArn(Aws::String&& value) { SetSourceResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source resource.</p>
     */
    inline DeleteResourcePermissionRequest& WithSourceResourceArn(const char* value) { SetSourceResourceArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline DeleteResourcePermissionRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline DeleteResourcePermissionRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline DeleteResourcePermissionRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    PermissionActionType m_actionType;
    bool m_actionTypeHasBeenSet = false;

    Aws::String m_sourceResourceArn;
    bool m_sourceResourceArnHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
