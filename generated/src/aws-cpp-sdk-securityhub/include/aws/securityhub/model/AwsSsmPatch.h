/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsSsmComplianceSummary.h>
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
   * <p>Provides details about the compliance for a patch.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsSsmPatch">AWS
   * API Reference</a></p>
   */
  class AwsSsmPatch
  {
  public:
    AWS_SECURITYHUB_API AwsSsmPatch();
    AWS_SECURITYHUB_API AwsSsmPatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsSsmPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The compliance status details for the patch.</p>
     */
    inline const AwsSsmComplianceSummary& GetComplianceSummary() const{ return m_complianceSummary; }

    /**
     * <p>The compliance status details for the patch.</p>
     */
    inline bool ComplianceSummaryHasBeenSet() const { return m_complianceSummaryHasBeenSet; }

    /**
     * <p>The compliance status details for the patch.</p>
     */
    inline void SetComplianceSummary(const AwsSsmComplianceSummary& value) { m_complianceSummaryHasBeenSet = true; m_complianceSummary = value; }

    /**
     * <p>The compliance status details for the patch.</p>
     */
    inline void SetComplianceSummary(AwsSsmComplianceSummary&& value) { m_complianceSummaryHasBeenSet = true; m_complianceSummary = std::move(value); }

    /**
     * <p>The compliance status details for the patch.</p>
     */
    inline AwsSsmPatch& WithComplianceSummary(const AwsSsmComplianceSummary& value) { SetComplianceSummary(value); return *this;}

    /**
     * <p>The compliance status details for the patch.</p>
     */
    inline AwsSsmPatch& WithComplianceSummary(AwsSsmComplianceSummary&& value) { SetComplianceSummary(std::move(value)); return *this;}

  private:

    AwsSsmComplianceSummary m_complianceSummary;
    bool m_complianceSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
