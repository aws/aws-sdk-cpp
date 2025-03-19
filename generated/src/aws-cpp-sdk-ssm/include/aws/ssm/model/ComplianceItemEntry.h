/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ComplianceSeverity.h>
#include <aws/ssm/model/ComplianceStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Information about a compliance item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ComplianceItemEntry">AWS
   * API Reference</a></p>
   */
  class ComplianceItemEntry
  {
  public:
    AWS_SSM_API ComplianceItemEntry() = default;
    AWS_SSM_API ComplianceItemEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ComplianceItemEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compliance item ID. For example, if the compliance item is a Windows
     * patch, the ID could be the number of the KB article.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ComplianceItemEntry& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the compliance item. For example, if the compliance item is a
     * Windows patch, the title could be the title of the KB article for the patch; for
     * example: Security Update for Active Directory Federation Services. </p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    ComplianceItemEntry& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the compliance status. Severity can be one of the following:
     * Critical, High, Medium, Low, Informational, Unspecified.</p>
     */
    inline ComplianceSeverity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(ComplianceSeverity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline ComplianceItemEntry& WithSeverity(ComplianceSeverity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the compliance item. An item is either COMPLIANT or
     * NON_COMPLIANT.</p>
     */
    inline ComplianceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ComplianceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ComplianceItemEntry& WithStatus(ComplianceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A "Key": "Value" tag combination for the compliance item.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::Map<Aws::String, Aws::String>>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::Map<Aws::String, Aws::String>>
    ComplianceItemEntry& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    template<typename DetailsKeyT = Aws::String, typename DetailsValueT = Aws::String>
    ComplianceItemEntry& AddDetails(DetailsKeyT&& key, DetailsValueT&& value) {
      m_detailsHasBeenSet = true; m_details.emplace(std::forward<DetailsKeyT>(key), std::forward<DetailsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    ComplianceSeverity m_severity{ComplianceSeverity::NOT_SET};
    bool m_severityHasBeenSet = false;

    ComplianceStatus m_status{ComplianceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
