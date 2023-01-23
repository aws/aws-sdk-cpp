/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsSsmPatch.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about the state of a patch on an instance based on the
   * patch baseline that was used to patch the instance.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsSsmPatchComplianceDetails">AWS
   * API Reference</a></p>
   */
  class AwsSsmPatchComplianceDetails
  {
  public:
    AWS_SECURITYHUB_API AwsSsmPatchComplianceDetails();
    AWS_SECURITYHUB_API AwsSsmPatchComplianceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsSsmPatchComplianceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the status of a patch.</p>
     */
    inline const AwsSsmPatch& GetPatch() const{ return m_patch; }

    /**
     * <p>Information about the status of a patch.</p>
     */
    inline bool PatchHasBeenSet() const { return m_patchHasBeenSet; }

    /**
     * <p>Information about the status of a patch.</p>
     */
    inline void SetPatch(const AwsSsmPatch& value) { m_patchHasBeenSet = true; m_patch = value; }

    /**
     * <p>Information about the status of a patch.</p>
     */
    inline void SetPatch(AwsSsmPatch&& value) { m_patchHasBeenSet = true; m_patch = std::move(value); }

    /**
     * <p>Information about the status of a patch.</p>
     */
    inline AwsSsmPatchComplianceDetails& WithPatch(const AwsSsmPatch& value) { SetPatch(value); return *this;}

    /**
     * <p>Information about the status of a patch.</p>
     */
    inline AwsSsmPatchComplianceDetails& WithPatch(AwsSsmPatch&& value) { SetPatch(std::move(value)); return *this;}

  private:

    AwsSsmPatch m_patch;
    bool m_patchHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
