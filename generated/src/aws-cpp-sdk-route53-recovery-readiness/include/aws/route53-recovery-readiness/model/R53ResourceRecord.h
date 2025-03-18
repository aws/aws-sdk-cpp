/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * <p>The Route 53 resource that a DNS target resource record points
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/R53ResourceRecord">AWS
   * API Reference</a></p>
   */
  class R53ResourceRecord
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API R53ResourceRecord() = default;
    AWS_ROUTE53RECOVERYREADINESS_API R53ResourceRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API R53ResourceRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DNS target domain name.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    R53ResourceRecord& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Route 53 Resource Record Set ID.</p>
     */
    inline const Aws::String& GetRecordSetId() const { return m_recordSetId; }
    inline bool RecordSetIdHasBeenSet() const { return m_recordSetIdHasBeenSet; }
    template<typename RecordSetIdT = Aws::String>
    void SetRecordSetId(RecordSetIdT&& value) { m_recordSetIdHasBeenSet = true; m_recordSetId = std::forward<RecordSetIdT>(value); }
    template<typename RecordSetIdT = Aws::String>
    R53ResourceRecord& WithRecordSetId(RecordSetIdT&& value) { SetRecordSetId(std::forward<RecordSetIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_recordSetId;
    bool m_recordSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
