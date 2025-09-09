/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>Represents an individual contributor to a multi-timeseries alarm, containing
   * information about a specific time series and its contribution to the alarm's
   * state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/AlarmContributor">AWS
   * API Reference</a></p>
   */
  class AlarmContributor
  {
  public:
    AWS_CLOUDWATCH_API AlarmContributor() = default;
    AWS_CLOUDWATCH_API AlarmContributor(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API AlarmContributor& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier for this alarm contributor.</p>
     */
    inline const Aws::String& GetContributorId() const { return m_contributorId; }
    inline bool ContributorIdHasBeenSet() const { return m_contributorIdHasBeenSet; }
    template<typename ContributorIdT = Aws::String>
    void SetContributorId(ContributorIdT&& value) { m_contributorIdHasBeenSet = true; m_contributorId = std::forward<ContributorIdT>(value); }
    template<typename ContributorIdT = Aws::String>
    AlarmContributor& WithContributorId(ContributorIdT&& value) { SetContributorId(std::forward<ContributorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of attributes that describe the contributor, such as metric dimensions
     * and other identifying characteristics.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContributorAttributes() const { return m_contributorAttributes; }
    inline bool ContributorAttributesHasBeenSet() const { return m_contributorAttributesHasBeenSet; }
    template<typename ContributorAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetContributorAttributes(ContributorAttributesT&& value) { m_contributorAttributesHasBeenSet = true; m_contributorAttributes = std::forward<ContributorAttributesT>(value); }
    template<typename ContributorAttributesT = Aws::Map<Aws::String, Aws::String>>
    AlarmContributor& WithContributorAttributes(ContributorAttributesT&& value) { SetContributorAttributes(std::forward<ContributorAttributesT>(value)); return *this;}
    template<typename ContributorAttributesKeyT = Aws::String, typename ContributorAttributesValueT = Aws::String>
    AlarmContributor& AddContributorAttributes(ContributorAttributesKeyT&& key, ContributorAttributesValueT&& value) {
      m_contributorAttributesHasBeenSet = true; m_contributorAttributes.emplace(std::forward<ContributorAttributesKeyT>(key), std::forward<ContributorAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An explanation for the contributor's current state, providing context about
     * why it is in its current condition.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    AlarmContributor& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the contributor last transitioned to its current
     * state.</p>
     */
    inline const Aws::Utils::DateTime& GetStateTransitionedTimestamp() const { return m_stateTransitionedTimestamp; }
    inline bool StateTransitionedTimestampHasBeenSet() const { return m_stateTransitionedTimestampHasBeenSet; }
    template<typename StateTransitionedTimestampT = Aws::Utils::DateTime>
    void SetStateTransitionedTimestamp(StateTransitionedTimestampT&& value) { m_stateTransitionedTimestampHasBeenSet = true; m_stateTransitionedTimestamp = std::forward<StateTransitionedTimestampT>(value); }
    template<typename StateTransitionedTimestampT = Aws::Utils::DateTime>
    AlarmContributor& WithStateTransitionedTimestamp(StateTransitionedTimestampT&& value) { SetStateTransitionedTimestamp(std::forward<StateTransitionedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contributorId;
    bool m_contributorIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_contributorAttributes;
    bool m_contributorAttributesHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::Utils::DateTime m_stateTransitionedTimestamp{};
    bool m_stateTransitionedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
