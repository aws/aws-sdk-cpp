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
    AWS_SSM_API DeleteOpsMetadataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteOpsMetadata"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an OpsMetadata Object to delete.</p>
     */
    inline const Aws::String& GetOpsMetadataArn() const { return m_opsMetadataArn; }
    inline bool OpsMetadataArnHasBeenSet() const { return m_opsMetadataArnHasBeenSet; }
    template<typename OpsMetadataArnT = Aws::String>
    void SetOpsMetadataArn(OpsMetadataArnT&& value) { m_opsMetadataArnHasBeenSet = true; m_opsMetadataArn = std::forward<OpsMetadataArnT>(value); }
    template<typename OpsMetadataArnT = Aws::String>
    DeleteOpsMetadataRequest& WithOpsMetadataArn(OpsMetadataArnT&& value) { SetOpsMetadataArn(std::forward<OpsMetadataArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_opsMetadataArn;
    bool m_opsMetadataArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
