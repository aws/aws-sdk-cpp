/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-readiness/model/TargetResource.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * <p>A component for DNS/routing control readiness checks and architecture
   * checks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/DNSTargetResource">AWS
   * API Reference</a></p>
   */
  class DNSTargetResource
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API DNSTargetResource() = default;
    AWS_ROUTE53RECOVERYREADINESS_API DNSTargetResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API DNSTargetResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain name that acts as an ingress point to a portion of the customer
     * application.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DNSTargetResource& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hosted zone Amazon Resource Name (ARN) that contains the DNS record with
     * the provided name of the target resource.</p>
     */
    inline const Aws::String& GetHostedZoneArn() const { return m_hostedZoneArn; }
    inline bool HostedZoneArnHasBeenSet() const { return m_hostedZoneArnHasBeenSet; }
    template<typename HostedZoneArnT = Aws::String>
    void SetHostedZoneArn(HostedZoneArnT&& value) { m_hostedZoneArnHasBeenSet = true; m_hostedZoneArn = std::forward<HostedZoneArnT>(value); }
    template<typename HostedZoneArnT = Aws::String>
    DNSTargetResource& WithHostedZoneArn(HostedZoneArnT&& value) { SetHostedZoneArn(std::forward<HostedZoneArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Route 53 record set ID that uniquely identifies a DNS record, given a
     * name and a type.</p>
     */
    inline const Aws::String& GetRecordSetId() const { return m_recordSetId; }
    inline bool RecordSetIdHasBeenSet() const { return m_recordSetIdHasBeenSet; }
    template<typename RecordSetIdT = Aws::String>
    void SetRecordSetId(RecordSetIdT&& value) { m_recordSetIdHasBeenSet = true; m_recordSetId = std::forward<RecordSetIdT>(value); }
    template<typename RecordSetIdT = Aws::String>
    DNSTargetResource& WithRecordSetId(RecordSetIdT&& value) { SetRecordSetId(std::forward<RecordSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of DNS record of the target resource.</p>
     */
    inline const Aws::String& GetRecordType() const { return m_recordType; }
    inline bool RecordTypeHasBeenSet() const { return m_recordTypeHasBeenSet; }
    template<typename RecordTypeT = Aws::String>
    void SetRecordType(RecordTypeT&& value) { m_recordTypeHasBeenSet = true; m_recordType = std::forward<RecordTypeT>(value); }
    template<typename RecordTypeT = Aws::String>
    DNSTargetResource& WithRecordType(RecordTypeT&& value) { SetRecordType(std::forward<RecordTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target resource of the DNS target resource.</p>
     */
    inline const TargetResource& GetTargetResource() const { return m_targetResource; }
    inline bool TargetResourceHasBeenSet() const { return m_targetResourceHasBeenSet; }
    template<typename TargetResourceT = TargetResource>
    void SetTargetResource(TargetResourceT&& value) { m_targetResourceHasBeenSet = true; m_targetResource = std::forward<TargetResourceT>(value); }
    template<typename TargetResourceT = TargetResource>
    DNSTargetResource& WithTargetResource(TargetResourceT&& value) { SetTargetResource(std::forward<TargetResourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_hostedZoneArn;
    bool m_hostedZoneArnHasBeenSet = false;

    Aws::String m_recordSetId;
    bool m_recordSetIdHasBeenSet = false;

    Aws::String m_recordType;
    bool m_recordTypeHasBeenSet = false;

    TargetResource m_targetResource;
    bool m_targetResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
