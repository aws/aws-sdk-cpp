/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PatchBaselineIdentity.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>The mapping between a patch group and the patch baseline the patch group is
   * registered with.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchGroupPatchBaselineMapping">AWS
   * API Reference</a></p>
   */
  class PatchGroupPatchBaselineMapping
  {
  public:
    AWS_SSM_API PatchGroupPatchBaselineMapping();
    AWS_SSM_API PatchGroupPatchBaselineMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API PatchGroupPatchBaselineMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the patch group registered with the patch baseline.</p>
     */
    inline const Aws::String& GetPatchGroup() const{ return m_patchGroup; }
    inline bool PatchGroupHasBeenSet() const { return m_patchGroupHasBeenSet; }
    inline void SetPatchGroup(const Aws::String& value) { m_patchGroupHasBeenSet = true; m_patchGroup = value; }
    inline void SetPatchGroup(Aws::String&& value) { m_patchGroupHasBeenSet = true; m_patchGroup = std::move(value); }
    inline void SetPatchGroup(const char* value) { m_patchGroupHasBeenSet = true; m_patchGroup.assign(value); }
    inline PatchGroupPatchBaselineMapping& WithPatchGroup(const Aws::String& value) { SetPatchGroup(value); return *this;}
    inline PatchGroupPatchBaselineMapping& WithPatchGroup(Aws::String&& value) { SetPatchGroup(std::move(value)); return *this;}
    inline PatchGroupPatchBaselineMapping& WithPatchGroup(const char* value) { SetPatchGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The patch baseline the patch group is registered with.</p>
     */
    inline const PatchBaselineIdentity& GetBaselineIdentity() const{ return m_baselineIdentity; }
    inline bool BaselineIdentityHasBeenSet() const { return m_baselineIdentityHasBeenSet; }
    inline void SetBaselineIdentity(const PatchBaselineIdentity& value) { m_baselineIdentityHasBeenSet = true; m_baselineIdentity = value; }
    inline void SetBaselineIdentity(PatchBaselineIdentity&& value) { m_baselineIdentityHasBeenSet = true; m_baselineIdentity = std::move(value); }
    inline PatchGroupPatchBaselineMapping& WithBaselineIdentity(const PatchBaselineIdentity& value) { SetBaselineIdentity(value); return *this;}
    inline PatchGroupPatchBaselineMapping& WithBaselineIdentity(PatchBaselineIdentity&& value) { SetBaselineIdentity(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_patchGroup;
    bool m_patchGroupHasBeenSet = false;

    PatchBaselineIdentity m_baselineIdentity;
    bool m_baselineIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
