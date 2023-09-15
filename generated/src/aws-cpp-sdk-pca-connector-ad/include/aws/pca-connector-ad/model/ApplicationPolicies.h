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
    AWS_PCACONNECTORAD_API ApplicationPolicies();
    AWS_PCACONNECTORAD_API ApplicationPolicies(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API ApplicationPolicies& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Marks the application policy extension as critical.</p>
     */
    inline bool GetCritical() const{ return m_critical; }

    /**
     * <p>Marks the application policy extension as critical.</p>
     */
    inline bool CriticalHasBeenSet() const { return m_criticalHasBeenSet; }

    /**
     * <p>Marks the application policy extension as critical.</p>
     */
    inline void SetCritical(bool value) { m_criticalHasBeenSet = true; m_critical = value; }

    /**
     * <p>Marks the application policy extension as critical.</p>
     */
    inline ApplicationPolicies& WithCritical(bool value) { SetCritical(value); return *this;}


    /**
     * <p>Application policies describe what the certificate can be used for.</p>
     */
    inline const Aws::Vector<ApplicationPolicy>& GetPolicies() const{ return m_policies; }

    /**
     * <p>Application policies describe what the certificate can be used for.</p>
     */
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }

    /**
     * <p>Application policies describe what the certificate can be used for.</p>
     */
    inline void SetPolicies(const Aws::Vector<ApplicationPolicy>& value) { m_policiesHasBeenSet = true; m_policies = value; }

    /**
     * <p>Application policies describe what the certificate can be used for.</p>
     */
    inline void SetPolicies(Aws::Vector<ApplicationPolicy>&& value) { m_policiesHasBeenSet = true; m_policies = std::move(value); }

    /**
     * <p>Application policies describe what the certificate can be used for.</p>
     */
    inline ApplicationPolicies& WithPolicies(const Aws::Vector<ApplicationPolicy>& value) { SetPolicies(value); return *this;}

    /**
     * <p>Application policies describe what the certificate can be used for.</p>
     */
    inline ApplicationPolicies& WithPolicies(Aws::Vector<ApplicationPolicy>&& value) { SetPolicies(std::move(value)); return *this;}

    /**
     * <p>Application policies describe what the certificate can be used for.</p>
     */
    inline ApplicationPolicies& AddPolicies(const ApplicationPolicy& value) { m_policiesHasBeenSet = true; m_policies.push_back(value); return *this; }

    /**
     * <p>Application policies describe what the certificate can be used for.</p>
     */
    inline ApplicationPolicies& AddPolicies(ApplicationPolicy&& value) { m_policiesHasBeenSet = true; m_policies.push_back(std::move(value)); return *this; }

  private:

    bool m_critical;
    bool m_criticalHasBeenSet = false;

    Aws::Vector<ApplicationPolicy> m_policies;
    bool m_policiesHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
