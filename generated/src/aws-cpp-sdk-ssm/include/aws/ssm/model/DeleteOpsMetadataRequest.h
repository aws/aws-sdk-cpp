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
  class DeleteOpsMetadataRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DeleteOpsMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteOpsMetadata"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of an OpsMetadata Object to delete.</p>
     */
    inline const Aws::String& GetOpsMetadataArn() const{ return m_opsMetadataArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an OpsMetadata Object to delete.</p>
     */
    inline bool OpsMetadataArnHasBeenSet() const { return m_opsMetadataArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an OpsMetadata Object to delete.</p>
     */
    inline void SetOpsMetadataArn(const Aws::String& value) { m_opsMetadataArnHasBeenSet = true; m_opsMetadataArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an OpsMetadata Object to delete.</p>
     */
    inline void SetOpsMetadataArn(Aws::String&& value) { m_opsMetadataArnHasBeenSet = true; m_opsMetadataArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an OpsMetadata Object to delete.</p>
     */
    inline void SetOpsMetadataArn(const char* value) { m_opsMetadataArnHasBeenSet = true; m_opsMetadataArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an OpsMetadata Object to delete.</p>
     */
    inline DeleteOpsMetadataRequest& WithOpsMetadataArn(const Aws::String& value) { SetOpsMetadataArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an OpsMetadata Object to delete.</p>
     */
    inline DeleteOpsMetadataRequest& WithOpsMetadataArn(Aws::String&& value) { SetOpsMetadataArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an OpsMetadata Object to delete.</p>
     */
    inline DeleteOpsMetadataRequest& WithOpsMetadataArn(const char* value) { SetOpsMetadataArn(value); return *this;}

  private:

    Aws::String m_opsMetadataArn;
    bool m_opsMetadataArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
