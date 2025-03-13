/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pca-connector-ad/model/ApplicationPolicy.h>
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
namespace PcaConnectorAd
{
namespace Model
{

  /**
   * <p>Application policies describe what the certificate can be used
   * for.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/ApplicationPolicies">AWS
   * API Reference</a></p>
   */
  class ApplicationPolicies
  {
  public:
    AWS_PCACONNECTORAD_API ApplicationPolicies() = default;
    AWS_PCACONNECTORAD_API ApplicationPolicies(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API ApplicationPolicies& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Marks the application policy extension as critical.</p>
     */
    inline bool GetCritical() const { return m_critical; }
    inline bool CriticalHasBeenSet() const { return m_criticalHasBeenSet; }
    inline void SetCritical(bool value) { m_criticalHasBeenSet = true; m_critical = value; }
    inline ApplicationPolicies& WithCritical(bool value) { SetCritical(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application policies describe what the certificate can be used for.</p>
     */
    inline const Aws::Vector<ApplicationPolicy>& GetPolicies() const { return m_policies; }
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }
    template<typename PoliciesT = Aws::Vector<ApplicationPolicy>>
    void SetPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies = std::forward<PoliciesT>(value); }
    template<typename PoliciesT = Aws::Vector<ApplicationPolicy>>
    ApplicationPolicies& WithPolicies(PoliciesT&& value) { SetPolicies(std::forward<PoliciesT>(value)); return *this;}
    template<typename PoliciesT = ApplicationPolicy>
    ApplicationPolicies& AddPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies.emplace_back(std::forward<PoliciesT>(value)); return *this; }
    ///@}
  private:

    bool m_critical{false};
    bool m_criticalHasBeenSet = false;

    Aws::Vector<ApplicationPolicy> m_policies;
    bool m_policiesHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
