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
  class DeletePatchBaselineRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DeletePatchBaselineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePatchBaseline"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the patch baseline to delete.</p>
     */
    inline const Aws::String& GetBaselineId() const{ return m_baselineId; }
    inline bool BaselineIdHasBeenSet() const { return m_baselineIdHasBeenSet; }
    inline void SetBaselineId(const Aws::String& value) { m_baselineIdHasBeenSet = true; m_baselineId = value; }
    inline void SetBaselineId(Aws::String&& value) { m_baselineIdHasBeenSet = true; m_baselineId = std::move(value); }
    inline void SetBaselineId(const char* value) { m_baselineIdHasBeenSet = true; m_baselineId.assign(value); }
    inline DeletePatchBaselineRequest& WithBaselineId(const Aws::String& value) { SetBaselineId(value); return *this;}
    inline DeletePatchBaselineRequest& WithBaselineId(Aws::String&& value) { SetBaselineId(std::move(value)); return *this;}
    inline DeletePatchBaselineRequest& WithBaselineId(const char* value) { SetBaselineId(value); return *this;}
    ///@}
  private:

    Aws::String m_baselineId;
    bool m_baselineIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
