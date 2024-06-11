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
    AWS_SSM_API ComplianceItemEntry();
    AWS_SSM_API ComplianceItemEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ComplianceItemEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compliance item ID. For example, if the compliance item is a Windows
     * patch, the ID could be the number of the KB article.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ComplianceItemEntry& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ComplianceItemEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ComplianceItemEntry& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the compliance item. For example, if the compliance item is a
     * Windows patch, the title could be the title of the KB article for the patch; for
     * example: Security Update for Active Directory Federation Services. </p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline ComplianceItemEntry& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline ComplianceItemEntry& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline ComplianceItemEntry& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the compliance status. Severity can be one of the following:
     * Critical, High, Medium, Low, Informational, Unspecified.</p>
     */
    inline const ComplianceSeverity& GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(const ComplianceSeverity& value) { m_severityHasBeenSet = true; m_severity = value; }
    inline void SetSeverity(ComplianceSeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }
    inline ComplianceItemEntry& WithSeverity(const ComplianceSeverity& value) { SetSeverity(value); return *this;}
    inline ComplianceItemEntry& WithSeverity(ComplianceSeverity&& value) { SetSeverity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the compliance item. An item is either COMPLIANT or
     * NON_COMPLIANT.</p>
     */
    inline const ComplianceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ComplianceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ComplianceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ComplianceItemEntry& WithStatus(const ComplianceStatus& value) { SetStatus(value); return *this;}
    inline ComplianceItemEntry& WithStatus(ComplianceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A "Key": "Value" tag combination for the compliance item.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(const Aws::Map<Aws::String, Aws::String>& value) { m_detailsHasBeenSet = true; m_details = value; }
    inline void SetDetails(Aws::Map<Aws::String, Aws::String>&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }
    inline ComplianceItemEntry& WithDetails(const Aws::Map<Aws::String, Aws::String>& value) { SetDetails(value); return *this;}
    inline ComplianceItemEntry& WithDetails(Aws::Map<Aws::String, Aws::String>&& value) { SetDetails(std::move(value)); return *this;}
    inline ComplianceItemEntry& AddDetails(const Aws::String& key, const Aws::String& value) { m_detailsHasBeenSet = true; m_details.emplace(key, value); return *this; }
    inline ComplianceItemEntry& AddDetails(Aws::String&& key, const Aws::String& value) { m_detailsHasBeenSet = true; m_details.emplace(std::move(key), value); return *this; }
    inline ComplianceItemEntry& AddDetails(const Aws::String& key, Aws::String&& value) { m_detailsHasBeenSet = true; m_details.emplace(key, std::move(value)); return *this; }
    inline ComplianceItemEntry& AddDetails(Aws::String&& key, Aws::String&& value) { m_detailsHasBeenSet = true; m_details.emplace(std::move(key), std::move(value)); return *this; }
    inline ComplianceItemEntry& AddDetails(const char* key, Aws::String&& value) { m_detailsHasBeenSet = true; m_details.emplace(key, std::move(value)); return *this; }
    inline ComplianceItemEntry& AddDetails(Aws::String&& key, const char* value) { m_detailsHasBeenSet = true; m_details.emplace(std::move(key), value); return *this; }
    inline ComplianceItemEntry& AddDetails(const char* key, const char* value) { m_detailsHasBeenSet = true; m_details.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    ComplianceSeverity m_severity;
    bool m_severityHasBeenSet = false;

    ComplianceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
