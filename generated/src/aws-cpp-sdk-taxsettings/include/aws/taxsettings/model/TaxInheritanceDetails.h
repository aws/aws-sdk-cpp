/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace TaxSettings
{
namespace Model
{

  /**
   * <p> Tax inheritance information associated with the account. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/TaxInheritanceDetails">AWS
   * API Reference</a></p>
   */
  class TaxInheritanceDetails
  {
  public:
    AWS_TAXSETTINGS_API TaxInheritanceDetails() = default;
    AWS_TAXSETTINGS_API TaxInheritanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API TaxInheritanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Tax inheritance reason information associated with the account. </p>
     */
    inline const Aws::String& GetInheritanceObtainedReason() const { return m_inheritanceObtainedReason; }
    inline bool InheritanceObtainedReasonHasBeenSet() const { return m_inheritanceObtainedReasonHasBeenSet; }
    template<typename InheritanceObtainedReasonT = Aws::String>
    void SetInheritanceObtainedReason(InheritanceObtainedReasonT&& value) { m_inheritanceObtainedReasonHasBeenSet = true; m_inheritanceObtainedReason = std::forward<InheritanceObtainedReasonT>(value); }
    template<typename InheritanceObtainedReasonT = Aws::String>
    TaxInheritanceDetails& WithInheritanceObtainedReason(InheritanceObtainedReasonT&& value) { SetInheritanceObtainedReason(std::forward<InheritanceObtainedReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Tax inheritance parent account information associated with the account. </p>
     */
    inline const Aws::String& GetParentEntityId() const { return m_parentEntityId; }
    inline bool ParentEntityIdHasBeenSet() const { return m_parentEntityIdHasBeenSet; }
    template<typename ParentEntityIdT = Aws::String>
    void SetParentEntityId(ParentEntityIdT&& value) { m_parentEntityIdHasBeenSet = true; m_parentEntityId = std::forward<ParentEntityIdT>(value); }
    template<typename ParentEntityIdT = Aws::String>
    TaxInheritanceDetails& WithParentEntityId(ParentEntityIdT&& value) { SetParentEntityId(std::forward<ParentEntityIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inheritanceObtainedReason;
    bool m_inheritanceObtainedReasonHasBeenSet = false;

    Aws::String m_parentEntityId;
    bool m_parentEntityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
