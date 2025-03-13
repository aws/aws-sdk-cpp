/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>A structure that describes a filter for applications.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListApplicationsFilter">AWS
   * API Reference</a></p>
   */
  class ListApplicationsFilter
  {
  public:
    AWS_SSOADMIN_API ListApplicationsFilter() = default;
    AWS_SSOADMIN_API ListApplicationsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API ListApplicationsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon Web Services account ID number that filters the results in the
     * response.</p>
     */
    inline const Aws::String& GetApplicationAccount() const { return m_applicationAccount; }
    inline bool ApplicationAccountHasBeenSet() const { return m_applicationAccountHasBeenSet; }
    template<typename ApplicationAccountT = Aws::String>
    void SetApplicationAccount(ApplicationAccountT&& value) { m_applicationAccountHasBeenSet = true; m_applicationAccount = std::forward<ApplicationAccountT>(value); }
    template<typename ApplicationAccountT = Aws::String>
    ListApplicationsFilter& WithApplicationAccount(ApplicationAccountT&& value) { SetApplicationAccount(std::forward<ApplicationAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an application provider that can filter the results in the
     * response.</p>
     */
    inline const Aws::String& GetApplicationProvider() const { return m_applicationProvider; }
    inline bool ApplicationProviderHasBeenSet() const { return m_applicationProviderHasBeenSet; }
    template<typename ApplicationProviderT = Aws::String>
    void SetApplicationProvider(ApplicationProviderT&& value) { m_applicationProviderHasBeenSet = true; m_applicationProvider = std::forward<ApplicationProviderT>(value); }
    template<typename ApplicationProviderT = Aws::String>
    ListApplicationsFilter& WithApplicationProvider(ApplicationProviderT&& value) { SetApplicationProvider(std::forward<ApplicationProviderT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationAccount;
    bool m_applicationAccountHasBeenSet = false;

    Aws::String m_applicationProvider;
    bool m_applicationProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
