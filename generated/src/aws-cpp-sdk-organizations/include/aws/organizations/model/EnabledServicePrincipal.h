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
   * <p>A structure that contains details of a service principal that represents an
   * Amazon Web Services service that is enabled to integrate with
   * Organizations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/EnabledServicePrincipal">AWS
   * API Reference</a></p>
   */
  class EnabledServicePrincipal
  {
  public:
    AWS_ORGANIZATIONS_API EnabledServicePrincipal() = default;
    AWS_ORGANIZATIONS_API EnabledServicePrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API EnabledServicePrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the service principal. This is typically in the form of a URL,
     * such as: <code> <i>servicename</i>.amazonaws.com</code>.</p>
     */
    inline const Aws::String& GetServicePrincipal() const { return m_servicePrincipal; }
    inline bool ServicePrincipalHasBeenSet() const { return m_servicePrincipalHasBeenSet; }
    template<typename ServicePrincipalT = Aws::String>
    void SetServicePrincipal(ServicePrincipalT&& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = std::forward<ServicePrincipalT>(value); }
    template<typename ServicePrincipalT = Aws::String>
    EnabledServicePrincipal& WithServicePrincipal(ServicePrincipalT&& value) { SetServicePrincipal(std::forward<ServicePrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the service principal was enabled for integration with
     * Organizations.</p>
     */
    inline const Aws::Utils::DateTime& GetDateEnabled() const { return m_dateEnabled; }
    inline bool DateEnabledHasBeenSet() const { return m_dateEnabledHasBeenSet; }
    template<typename DateEnabledT = Aws::Utils::DateTime>
    void SetDateEnabled(DateEnabledT&& value) { m_dateEnabledHasBeenSet = true; m_dateEnabled = std::forward<DateEnabledT>(value); }
    template<typename DateEnabledT = Aws::Utils::DateTime>
    EnabledServicePrincipal& WithDateEnabled(DateEnabledT&& value) { SetDateEnabled(std::forward<DateEnabledT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_servicePrincipal;
    bool m_servicePrincipalHasBeenSet = false;

    Aws::Utils::DateTime m_dateEnabled{};
    bool m_dateEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
