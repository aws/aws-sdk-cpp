/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Represents interaction details included in a lead invitation payload. This
 * structure provides context about how the lead was generated and the customer's
 * engagement history to help partners assess the opportunity
 * quality.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/LeadInvitationInteraction">AWS
 * API Reference</a></p>
 */
class LeadInvitationInteraction {
 public:
  AWS_PARTNERCENTRALSELLING_API LeadInvitationInteraction() = default;
  AWS_PARTNERCENTRALSELLING_API LeadInvitationInteraction(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API LeadInvitationInteraction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the type of source that generated the lead interaction, such as
   * "Event", "Website", or "Campaign". This helps partners understand the lead
   * generation channel and assess lead quality based on the source type.</p>
   */
  inline const Aws::String& GetSourceType() const { return m_sourceType; }
  inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
  template <typename SourceTypeT = Aws::String>
  void SetSourceType(SourceTypeT&& value) {
    m_sourceTypeHasBeenSet = true;
    m_sourceType = std::forward<SourceTypeT>(value);
  }
  template <typename SourceTypeT = Aws::String>
  LeadInvitationInteraction& WithSourceType(SourceTypeT&& value) {
    SetSourceType(std::forward<SourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the specific source that generated the lead
   * interaction. This provides traceability to the original lead generation activity
   * for reference and follow-up purposes.</p>
   */
  inline const Aws::String& GetSourceId() const { return m_sourceId; }
  inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
  template <typename SourceIdT = Aws::String>
  void SetSourceId(SourceIdT&& value) {
    m_sourceIdHasBeenSet = true;
    m_sourceId = std::forward<SourceIdT>(value);
  }
  template <typename SourceIdT = Aws::String>
  LeadInvitationInteraction& WithSourceId(SourceIdT&& value) {
    SetSourceId(std::forward<SourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptive name of the source that generated the lead interaction. This
   * human-readable identifier helps partners understand the specific lead generation
   * channel or campaign that created the opportunity.</p>
   */
  inline const Aws::String& GetSourceName() const { return m_sourceName; }
  inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
  template <typename SourceNameT = Aws::String>
  void SetSourceName(SourceNameT&& value) {
    m_sourceNameHasBeenSet = true;
    m_sourceName = std::forward<SourceNameT>(value);
  }
  template <typename SourceNameT = Aws::String>
  LeadInvitationInteraction& WithSourceName(SourceNameT&& value) {
    SetSourceName(std::forward<SourceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the specific use case or business scenario associated with the lead
   * interaction. This information helps partners understand the customer's interests
   * and potential solution requirements.</p>
   */
  inline const Aws::String& GetUsecase() const { return m_usecase; }
  inline bool UsecaseHasBeenSet() const { return m_usecaseHasBeenSet; }
  template <typename UsecaseT = Aws::String>
  void SetUsecase(UsecaseT&& value) {
    m_usecaseHasBeenSet = true;
    m_usecase = std::forward<UsecaseT>(value);
  }
  template <typename UsecaseT = Aws::String>
  LeadInvitationInteraction& WithUsecase(UsecaseT&& value) {
    SetUsecase(std::forward<UsecaseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The business title or job role of the customer contact involved in the lead
   * interaction. This helps partners identify the decision-making level and
   * engagement approach for the lead.</p>
   */
  inline const Aws::String& GetContactBusinessTitle() const { return m_contactBusinessTitle; }
  inline bool ContactBusinessTitleHasBeenSet() const { return m_contactBusinessTitleHasBeenSet; }
  template <typename ContactBusinessTitleT = Aws::String>
  void SetContactBusinessTitle(ContactBusinessTitleT&& value) {
    m_contactBusinessTitleHasBeenSet = true;
    m_contactBusinessTitle = std::forward<ContactBusinessTitleT>(value);
  }
  template <typename ContactBusinessTitleT = Aws::String>
  LeadInvitationInteraction& WithContactBusinessTitle(ContactBusinessTitleT&& value) {
    SetContactBusinessTitle(std::forward<ContactBusinessTitleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceType;

  Aws::String m_sourceId;

  Aws::String m_sourceName;

  Aws::String m_usecase;

  Aws::String m_contactBusinessTitle;
  bool m_sourceTypeHasBeenSet = false;
  bool m_sourceIdHasBeenSet = false;
  bool m_sourceNameHasBeenSet = false;
  bool m_usecaseHasBeenSet = false;
  bool m_contactBusinessTitleHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
