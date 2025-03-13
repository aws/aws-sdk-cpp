/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/SecurityIRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/model/ResolverType.h>
#include <utility>

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

  /**
   */
  class UpdateResolverTypeRequest : public SecurityIRRequest
  {
  public:
    AWS_SECURITYIR_API UpdateResolverTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResolverType"; }

    AWS_SECURITYIR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Required element for UpdateResolverType to identify the case to update.</p>
     */
    inline const Aws::String& GetCaseId() const { return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    template<typename CaseIdT = Aws::String>
    void SetCaseId(CaseIdT&& value) { m_caseIdHasBeenSet = true; m_caseId = std::forward<CaseIdT>(value); }
    template<typename CaseIdT = Aws::String>
    UpdateResolverTypeRequest& WithCaseId(CaseIdT&& value) { SetCaseId(std::forward<CaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required element for UpdateResolverType to identify the new resolver.</p>
     */
    inline ResolverType GetResolverType() const { return m_resolverType; }
    inline bool ResolverTypeHasBeenSet() const { return m_resolverTypeHasBeenSet; }
    inline void SetResolverType(ResolverType value) { m_resolverTypeHasBeenSet = true; m_resolverType = value; }
    inline UpdateResolverTypeRequest& WithResolverType(ResolverType value) { SetResolverType(value); return *this;}
    ///@}
  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    ResolverType m_resolverType{ResolverType::NOT_SET};
    bool m_resolverTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
