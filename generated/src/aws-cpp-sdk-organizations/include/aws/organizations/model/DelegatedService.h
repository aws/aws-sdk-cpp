/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains information about the Amazon Web Services service for which the
   * account is a delegated administrator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DelegatedService">AWS
   * API Reference</a></p>
   */
  class DelegatedService
  {
  public:
    AWS_ORGANIZATIONS_API DelegatedService();
    AWS_ORGANIZATIONS_API DelegatedService(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API DelegatedService& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an Amazon Web Services service that can request an operation for
     * the specified service. This is typically in the form of a URL, such as: <code>
     * <i>servicename</i>.amazonaws.com</code>.</p>
     */
    inline const Aws::String& GetServicePrincipal() const{ return m_servicePrincipal; }

    /**
     * <p>The name of an Amazon Web Services service that can request an operation for
     * the specified service. This is typically in the form of a URL, such as: <code>
     * <i>servicename</i>.amazonaws.com</code>.</p>
     */
    inline bool ServicePrincipalHasBeenSet() const { return m_servicePrincipalHasBeenSet; }

    /**
     * <p>The name of an Amazon Web Services service that can request an operation for
     * the specified service. This is typically in the form of a URL, such as: <code>
     * <i>servicename</i>.amazonaws.com</code>.</p>
     */
    inline void SetServicePrincipal(const Aws::String& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = value; }

    /**
     * <p>The name of an Amazon Web Services service that can request an operation for
     * the specified service. This is typically in the form of a URL, such as: <code>
     * <i>servicename</i>.amazonaws.com</code>.</p>
     */
    inline void SetServicePrincipal(Aws::String&& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = std::move(value); }

    /**
     * <p>The name of an Amazon Web Services service that can request an operation for
     * the specified service. This is typically in the form of a URL, such as: <code>
     * <i>servicename</i>.amazonaws.com</code>.</p>
     */
    inline void SetServicePrincipal(const char* value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal.assign(value); }

    /**
     * <p>The name of an Amazon Web Services service that can request an operation for
     * the specified service. This is typically in the form of a URL, such as: <code>
     * <i>servicename</i>.amazonaws.com</code>.</p>
     */
    inline DelegatedService& WithServicePrincipal(const Aws::String& value) { SetServicePrincipal(value); return *this;}

    /**
     * <p>The name of an Amazon Web Services service that can request an operation for
     * the specified service. This is typically in the form of a URL, such as: <code>
     * <i>servicename</i>.amazonaws.com</code>.</p>
     */
    inline DelegatedService& WithServicePrincipal(Aws::String&& value) { SetServicePrincipal(std::move(value)); return *this;}

    /**
     * <p>The name of an Amazon Web Services service that can request an operation for
     * the specified service. This is typically in the form of a URL, such as: <code>
     * <i>servicename</i>.amazonaws.com</code>.</p>
     */
    inline DelegatedService& WithServicePrincipal(const char* value) { SetServicePrincipal(value); return *this;}


    /**
     * <p>The date that the account became a delegated administrator for this service.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetDelegationEnabledDate() const{ return m_delegationEnabledDate; }

    /**
     * <p>The date that the account became a delegated administrator for this service.
     * </p>
     */
    inline bool DelegationEnabledDateHasBeenSet() const { return m_delegationEnabledDateHasBeenSet; }

    /**
     * <p>The date that the account became a delegated administrator for this service.
     * </p>
     */
    inline void SetDelegationEnabledDate(const Aws::Utils::DateTime& value) { m_delegationEnabledDateHasBeenSet = true; m_delegationEnabledDate = value; }

    /**
     * <p>The date that the account became a delegated administrator for this service.
     * </p>
     */
    inline void SetDelegationEnabledDate(Aws::Utils::DateTime&& value) { m_delegationEnabledDateHasBeenSet = true; m_delegationEnabledDate = std::move(value); }

    /**
     * <p>The date that the account became a delegated administrator for this service.
     * </p>
     */
    inline DelegatedService& WithDelegationEnabledDate(const Aws::Utils::DateTime& value) { SetDelegationEnabledDate(value); return *this;}

    /**
     * <p>The date that the account became a delegated administrator for this service.
     * </p>
     */
    inline DelegatedService& WithDelegationEnabledDate(Aws::Utils::DateTime&& value) { SetDelegationEnabledDate(std::move(value)); return *this;}

  private:

    Aws::String m_servicePrincipal;
    bool m_servicePrincipalHasBeenSet = false;

    Aws::Utils::DateTime m_delegationEnabledDate;
    bool m_delegationEnabledDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
