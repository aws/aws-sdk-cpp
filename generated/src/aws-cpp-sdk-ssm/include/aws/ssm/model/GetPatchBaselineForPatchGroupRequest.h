/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/OperatingSystem.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class GetPatchBaselineForPatchGroupRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetPatchBaselineForPatchGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPatchBaselineForPatchGroup"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the patch group whose patch baseline should be retrieved.</p>
     */
    inline const Aws::String& GetPatchGroup() const{ return m_patchGroup; }
    inline bool PatchGroupHasBeenSet() const { return m_patchGroupHasBeenSet; }
    inline void SetPatchGroup(const Aws::String& value) { m_patchGroupHasBeenSet = true; m_patchGroup = value; }
    inline void SetPatchGroup(Aws::String&& value) { m_patchGroupHasBeenSet = true; m_patchGroup = std::move(value); }
    inline void SetPatchGroup(const char* value) { m_patchGroupHasBeenSet = true; m_patchGroup.assign(value); }
    inline GetPatchBaselineForPatchGroupRequest& WithPatchGroup(const Aws::String& value) { SetPatchGroup(value); return *this;}
    inline GetPatchBaselineForPatchGroupRequest& WithPatchGroup(Aws::String&& value) { SetPatchGroup(std::move(value)); return *this;}
    inline GetPatchBaselineForPatchGroupRequest& WithPatchGroup(const char* value) { SetPatchGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the operating system rule specified for patch groups using the patch
     * baseline.</p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }
    inline GetPatchBaselineForPatchGroupRequest& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}
    inline GetPatchBaselineForPatchGroupRequest& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_patchGroup;
    bool m_patchGroupHasBeenSet = false;

    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
