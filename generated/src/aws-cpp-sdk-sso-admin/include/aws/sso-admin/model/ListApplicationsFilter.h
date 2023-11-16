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
    AWS_SSOADMIN_API ListApplicationsFilter();
    AWS_SSOADMIN_API ListApplicationsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API ListApplicationsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Amazon Web Services account ID number that filters the results in the
     * response.</p>
     */
    inline const Aws::String& GetApplicationAccount() const{ return m_applicationAccount; }

    /**
     * <p>An Amazon Web Services account ID number that filters the results in the
     * response.</p>
     */
    inline bool ApplicationAccountHasBeenSet() const { return m_applicationAccountHasBeenSet; }

    /**
     * <p>An Amazon Web Services account ID number that filters the results in the
     * response.</p>
     */
    inline void SetApplicationAccount(const Aws::String& value) { m_applicationAccountHasBeenSet = true; m_applicationAccount = value; }

    /**
     * <p>An Amazon Web Services account ID number that filters the results in the
     * response.</p>
     */
    inline void SetApplicationAccount(Aws::String&& value) { m_applicationAccountHasBeenSet = true; m_applicationAccount = std::move(value); }

    /**
     * <p>An Amazon Web Services account ID number that filters the results in the
     * response.</p>
     */
    inline void SetApplicationAccount(const char* value) { m_applicationAccountHasBeenSet = true; m_applicationAccount.assign(value); }

    /**
     * <p>An Amazon Web Services account ID number that filters the results in the
     * response.</p>
     */
    inline ListApplicationsFilter& WithApplicationAccount(const Aws::String& value) { SetApplicationAccount(value); return *this;}

    /**
     * <p>An Amazon Web Services account ID number that filters the results in the
     * response.</p>
     */
    inline ListApplicationsFilter& WithApplicationAccount(Aws::String&& value) { SetApplicationAccount(std::move(value)); return *this;}

    /**
     * <p>An Amazon Web Services account ID number that filters the results in the
     * response.</p>
     */
    inline ListApplicationsFilter& WithApplicationAccount(const char* value) { SetApplicationAccount(value); return *this;}


    /**
     * <p>The ARN of an application provider that can filter the results in the
     * response.</p>
     */
    inline const Aws::String& GetApplicationProvider() const{ return m_applicationProvider; }

    /**
     * <p>The ARN of an application provider that can filter the results in the
     * response.</p>
     */
    inline bool ApplicationProviderHasBeenSet() const { return m_applicationProviderHasBeenSet; }

    /**
     * <p>The ARN of an application provider that can filter the results in the
     * response.</p>
     */
    inline void SetApplicationProvider(const Aws::String& value) { m_applicationProviderHasBeenSet = true; m_applicationProvider = value; }

    /**
     * <p>The ARN of an application provider that can filter the results in the
     * response.</p>
     */
    inline void SetApplicationProvider(Aws::String&& value) { m_applicationProviderHasBeenSet = true; m_applicationProvider = std::move(value); }

    /**
     * <p>The ARN of an application provider that can filter the results in the
     * response.</p>
     */
    inline void SetApplicationProvider(const char* value) { m_applicationProviderHasBeenSet = true; m_applicationProvider.assign(value); }

    /**
     * <p>The ARN of an application provider that can filter the results in the
     * response.</p>
     */
    inline ListApplicationsFilter& WithApplicationProvider(const Aws::String& value) { SetApplicationProvider(value); return *this;}

    /**
     * <p>The ARN of an application provider that can filter the results in the
     * response.</p>
     */
    inline ListApplicationsFilter& WithApplicationProvider(Aws::String&& value) { SetApplicationProvider(std::move(value)); return *this;}

    /**
     * <p>The ARN of an application provider that can filter the results in the
     * response.</p>
     */
    inline ListApplicationsFilter& WithApplicationProvider(const char* value) { SetApplicationProvider(value); return *this;}

  private:

    Aws::String m_applicationAccount;
    bool m_applicationAccountHasBeenSet = false;

    Aws::String m_applicationProvider;
    bool m_applicationProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
