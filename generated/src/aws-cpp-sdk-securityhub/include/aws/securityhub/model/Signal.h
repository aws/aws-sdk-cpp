/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/Indicator.h>
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
   * <p> Contains information about the signals involved in an Amazon GuardDuty
   * Extended Threat Detection attack sequence. An attack sequence is a type of
   * threat detected by GuardDuty. GuardDuty generates an attack sequence finding
   * when multiple events, or signals, align to a potentially suspicious activity.
   * When GuardDuty and Security Hub are integrated, GuardDuty sends attack sequence
   * findings to Security Hub.</p> <p>A signal can be an API activity or a finding
   * that GuardDuty uses to detect an attack sequence finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Signal">AWS
   * API Reference</a></p>
   */
  class Signal
  {
  public:
    AWS_SECURITYHUB_API Signal();
    AWS_SECURITYHUB_API Signal(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Signal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of the signal used to identify an attack sequence. </p> <p>Signals
     * can be GuardDuty findings or activities observed in data sources that GuardDuty
     * monitors. For more information, see <a
     * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_data-sources.html">GuardDuty
     * foundational data sources</a> in the <i>Amazon GuardDuty User Guide</i>.</p>
     * <p>A signal type can be one of the following values. Here are the related
     * descriptions:</p> <ul> <li> <p> <code>FINDING</code> - Individually generated
     * GuardDuty finding.</p> </li> <li> <p> <code>CLOUD_TRAIL</code> - Activity
     * observed from CloudTrail logs</p> </li> <li> <p> <code>S3_DATA_EVENTS</code> -
     * Activity observed from CloudTrail data events for Amazon Simple Storage Service
     * (S3). Activities associated with this type will show up only when you have
     * enabled GuardDuty S3 Protection feature in your account. For more information
     * about S3 Protection and the steps to enable it, see <a
     * href="https://docs.aws.amazon.com/guardduty/latest/ug/s3-protection.html">S3
     * Protection</a> in the <i>Amazon GuardDuty User Guide</i>.</p> </li> </ul>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline Signal& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline Signal& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline Signal& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the signal. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Signal& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Signal& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Signal& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the GuardDuty finding. </p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline Signal& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline Signal& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline Signal& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the product that generated the signal.
     * </p>
     */
    inline const Aws::String& GetProductArn() const{ return m_productArn; }
    inline bool ProductArnHasBeenSet() const { return m_productArnHasBeenSet; }
    inline void SetProductArn(const Aws::String& value) { m_productArnHasBeenSet = true; m_productArn = value; }
    inline void SetProductArn(Aws::String&& value) { m_productArnHasBeenSet = true; m_productArn = std::move(value); }
    inline void SetProductArn(const char* value) { m_productArnHasBeenSet = true; m_productArn.assign(value); }
    inline Signal& WithProductArn(const Aws::String& value) { SetProductArn(value); return *this;}
    inline Signal& WithProductArn(Aws::String&& value) { SetProductArn(std::move(value)); return *this;}
    inline Signal& WithProductArn(const char* value) { SetProductArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN or ID of the Amazon Web Services resource associated with the
     * signal. </p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }
    inline Signal& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}
    inline Signal& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(std::move(value)); return *this;}
    inline Signal& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }
    inline Signal& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }
    inline Signal& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Contains information about the indicators associated with the signals in
     * this attack sequence finding. The values for <code>SignalIndicators</code> are a
     * subset of the values for <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_Sequence.html">SequenceIndicators</a>,
     * but the values for these fields don't always match 1:1. </p>
     */
    inline const Aws::Vector<Indicator>& GetSignalIndicators() const{ return m_signalIndicators; }
    inline bool SignalIndicatorsHasBeenSet() const { return m_signalIndicatorsHasBeenSet; }
    inline void SetSignalIndicators(const Aws::Vector<Indicator>& value) { m_signalIndicatorsHasBeenSet = true; m_signalIndicators = value; }
    inline void SetSignalIndicators(Aws::Vector<Indicator>&& value) { m_signalIndicatorsHasBeenSet = true; m_signalIndicators = std::move(value); }
    inline Signal& WithSignalIndicators(const Aws::Vector<Indicator>& value) { SetSignalIndicators(value); return *this;}
    inline Signal& WithSignalIndicators(Aws::Vector<Indicator>&& value) { SetSignalIndicators(std::move(value)); return *this;}
    inline Signal& AddSignalIndicators(const Indicator& value) { m_signalIndicatorsHasBeenSet = true; m_signalIndicators.push_back(value); return *this; }
    inline Signal& AddSignalIndicators(Indicator&& value) { m_signalIndicatorsHasBeenSet = true; m_signalIndicators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the GuardDuty signal. For example, when signal type is
     * <code>FINDING</code>, the signal name is the name of the finding. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Signal& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Signal& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Signal& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the first finding or activity related to this signal was
     * observed. </p>
     */
    inline long long GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(long long value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline Signal& WithCreatedAt(long long value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when this signal was last observed. </p>
     */
    inline long long GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(long long value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline Signal& WithUpdatedAt(long long value) { SetUpdatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the first finding or activity related to this signal was
     * observed. </p>
     */
    inline long long GetFirstSeenAt() const{ return m_firstSeenAt; }
    inline bool FirstSeenAtHasBeenSet() const { return m_firstSeenAtHasBeenSet; }
    inline void SetFirstSeenAt(long long value) { m_firstSeenAtHasBeenSet = true; m_firstSeenAt = value; }
    inline Signal& WithFirstSeenAt(long long value) { SetFirstSeenAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the last finding or activity related to this signal was
     * observed. </p>
     */
    inline long long GetLastSeenAt() const{ return m_lastSeenAt; }
    inline bool LastSeenAtHasBeenSet() const { return m_lastSeenAtHasBeenSet; }
    inline void SetLastSeenAt(long long value) { m_lastSeenAtHasBeenSet = true; m_lastSeenAt = value; }
    inline Signal& WithLastSeenAt(long long value) { SetLastSeenAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity associated with the signal. For more information about severity,
     * see <a
     * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_findings-severity.html">Severity
     * levels for GuardDuty findings</a> in the <i>Amazon GuardDuty User Guide</i>.</p>
     */
    inline double GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(double value) { m_severityHasBeenSet = true; m_severity = value; }
    inline Signal& WithSeverity(double value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of times this signal was observed. </p>
     */
    inline int GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline Signal& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IDs of the threat actors involved in the signal. </p>
     */
    inline const Aws::Vector<Aws::String>& GetActorIds() const{ return m_actorIds; }
    inline bool ActorIdsHasBeenSet() const { return m_actorIdsHasBeenSet; }
    inline void SetActorIds(const Aws::Vector<Aws::String>& value) { m_actorIdsHasBeenSet = true; m_actorIds = value; }
    inline void SetActorIds(Aws::Vector<Aws::String>&& value) { m_actorIdsHasBeenSet = true; m_actorIds = std::move(value); }
    inline Signal& WithActorIds(const Aws::Vector<Aws::String>& value) { SetActorIds(value); return *this;}
    inline Signal& WithActorIds(Aws::Vector<Aws::String>&& value) { SetActorIds(std::move(value)); return *this;}
    inline Signal& AddActorIds(const Aws::String& value) { m_actorIdsHasBeenSet = true; m_actorIds.push_back(value); return *this; }
    inline Signal& AddActorIds(Aws::String&& value) { m_actorIdsHasBeenSet = true; m_actorIds.push_back(std::move(value)); return *this; }
    inline Signal& AddActorIds(const char* value) { m_actorIdsHasBeenSet = true; m_actorIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the endpoint IDs associated with this signal.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEndpointIds() const{ return m_endpointIds; }
    inline bool EndpointIdsHasBeenSet() const { return m_endpointIdsHasBeenSet; }
    inline void SetEndpointIds(const Aws::Vector<Aws::String>& value) { m_endpointIdsHasBeenSet = true; m_endpointIds = value; }
    inline void SetEndpointIds(Aws::Vector<Aws::String>&& value) { m_endpointIdsHasBeenSet = true; m_endpointIds = std::move(value); }
    inline Signal& WithEndpointIds(const Aws::Vector<Aws::String>& value) { SetEndpointIds(value); return *this;}
    inline Signal& WithEndpointIds(Aws::Vector<Aws::String>&& value) { SetEndpointIds(std::move(value)); return *this;}
    inline Signal& AddEndpointIds(const Aws::String& value) { m_endpointIdsHasBeenSet = true; m_endpointIds.push_back(value); return *this; }
    inline Signal& AddEndpointIds(Aws::String&& value) { m_endpointIdsHasBeenSet = true; m_endpointIds.push_back(std::move(value)); return *this; }
    inline Signal& AddEndpointIds(const char* value) { m_endpointIdsHasBeenSet = true; m_endpointIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_productArn;
    bool m_productArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;

    Aws::Vector<Indicator> m_signalIndicators;
    bool m_signalIndicatorsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_createdAt;
    bool m_createdAtHasBeenSet = false;

    long long m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    long long m_firstSeenAt;
    bool m_firstSeenAtHasBeenSet = false;

    long long m_lastSeenAt;
    bool m_lastSeenAtHasBeenSet = false;

    double m_severity;
    bool m_severityHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;

    Aws::Vector<Aws::String> m_actorIds;
    bool m_actorIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_endpointIds;
    bool m_endpointIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
