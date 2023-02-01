/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class GetOpsItemRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetOpsItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOpsItem"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the OpsItem that you want to get.</p>
     */
    inline const Aws::String& GetOpsItemId() const{ return m_opsItemId; }

    /**
     * <p>The ID of the OpsItem that you want to get.</p>
     */
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }

    /**
     * <p>The ID of the OpsItem that you want to get.</p>
     */
    inline void SetOpsItemId(const Aws::String& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = value; }

    /**
     * <p>The ID of the OpsItem that you want to get.</p>
     */
    inline void SetOpsItemId(Aws::String&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::move(value); }

    /**
     * <p>The ID of the OpsItem that you want to get.</p>
     */
    inline void SetOpsItemId(const char* value) { m_opsItemIdHasBeenSet = true; m_opsItemId.assign(value); }

    /**
     * <p>The ID of the OpsItem that you want to get.</p>
     */
    inline GetOpsItemRequest& WithOpsItemId(const Aws::String& value) { SetOpsItemId(value); return *this;}

    /**
     * <p>The ID of the OpsItem that you want to get.</p>
     */
    inline GetOpsItemRequest& WithOpsItemId(Aws::String&& value) { SetOpsItemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the OpsItem that you want to get.</p>
     */
    inline GetOpsItemRequest& WithOpsItemId(const char* value) { SetOpsItemId(value); return *this;}


    /**
     * <p>The OpsItem Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetOpsItemArn() const{ return m_opsItemArn; }

    /**
     * <p>The OpsItem Amazon Resource Name (ARN).</p>
     */
    inline bool OpsItemArnHasBeenSet() const { return m_opsItemArnHasBeenSet; }

    /**
     * <p>The OpsItem Amazon Resource Name (ARN).</p>
     */
    inline void SetOpsItemArn(const Aws::String& value) { m_opsItemArnHasBeenSet = true; m_opsItemArn = value; }

    /**
     * <p>The OpsItem Amazon Resource Name (ARN).</p>
     */
    inline void SetOpsItemArn(Aws::String&& value) { m_opsItemArnHasBeenSet = true; m_opsItemArn = std::move(value); }

    /**
     * <p>The OpsItem Amazon Resource Name (ARN).</p>
     */
    inline void SetOpsItemArn(const char* value) { m_opsItemArnHasBeenSet = true; m_opsItemArn.assign(value); }

    /**
     * <p>The OpsItem Amazon Resource Name (ARN).</p>
     */
    inline GetOpsItemRequest& WithOpsItemArn(const Aws::String& value) { SetOpsItemArn(value); return *this;}

    /**
     * <p>The OpsItem Amazon Resource Name (ARN).</p>
     */
    inline GetOpsItemRequest& WithOpsItemArn(Aws::String&& value) { SetOpsItemArn(std::move(value)); return *this;}

    /**
     * <p>The OpsItem Amazon Resource Name (ARN).</p>
     */
    inline GetOpsItemRequest& WithOpsItemArn(const char* value) { SetOpsItemArn(value); return *this;}

  private:

    Aws::String m_opsItemId;
    bool m_opsItemIdHasBeenSet = false;

    Aws::String m_opsItemArn;
    bool m_opsItemArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
