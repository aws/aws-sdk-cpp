/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/AvailabilityProviderType.h>
#include <aws/workmail/model/RedactedEwsAvailabilityProvider.h>
#include <aws/workmail/model/LambdaAvailabilityProvider.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>List all the <code>AvailabilityConfiguration</code>'s for the given WorkMail
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/AvailabilityConfiguration">AWS
   * API Reference</a></p>
   */
  class AvailabilityConfiguration
  {
  public:
    AWS_WORKMAIL_API AvailabilityConfiguration();
    AWS_WORKMAIL_API AvailabilityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API AvailabilityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Displays the domain to which the provider applies.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>Displays the domain to which the provider applies.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>Displays the domain to which the provider applies.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Displays the domain to which the provider applies.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>Displays the domain to which the provider applies.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>Displays the domain to which the provider applies.</p>
     */
    inline AvailabilityConfiguration& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>Displays the domain to which the provider applies.</p>
     */
    inline AvailabilityConfiguration& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>Displays the domain to which the provider applies.</p>
     */
    inline AvailabilityConfiguration& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Displays the provider type that applies to this domain.</p>
     */
    inline const AvailabilityProviderType& GetProviderType() const{ return m_providerType; }

    /**
     * <p>Displays the provider type that applies to this domain.</p>
     */
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }

    /**
     * <p>Displays the provider type that applies to this domain.</p>
     */
    inline void SetProviderType(const AvailabilityProviderType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }

    /**
     * <p>Displays the provider type that applies to this domain.</p>
     */
    inline void SetProviderType(AvailabilityProviderType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }

    /**
     * <p>Displays the provider type that applies to this domain.</p>
     */
    inline AvailabilityConfiguration& WithProviderType(const AvailabilityProviderType& value) { SetProviderType(value); return *this;}

    /**
     * <p>Displays the provider type that applies to this domain.</p>
     */
    inline AvailabilityConfiguration& WithProviderType(AvailabilityProviderType&& value) { SetProviderType(std::move(value)); return *this;}


    /**
     * <p>If <code>ProviderType</code> is <code>EWS</code>, then this field contains
     * <code>RedactedEwsAvailabilityProvider</code>. Otherwise, it is not required.</p>
     */
    inline const RedactedEwsAvailabilityProvider& GetEwsProvider() const{ return m_ewsProvider; }

    /**
     * <p>If <code>ProviderType</code> is <code>EWS</code>, then this field contains
     * <code>RedactedEwsAvailabilityProvider</code>. Otherwise, it is not required.</p>
     */
    inline bool EwsProviderHasBeenSet() const { return m_ewsProviderHasBeenSet; }

    /**
     * <p>If <code>ProviderType</code> is <code>EWS</code>, then this field contains
     * <code>RedactedEwsAvailabilityProvider</code>. Otherwise, it is not required.</p>
     */
    inline void SetEwsProvider(const RedactedEwsAvailabilityProvider& value) { m_ewsProviderHasBeenSet = true; m_ewsProvider = value; }

    /**
     * <p>If <code>ProviderType</code> is <code>EWS</code>, then this field contains
     * <code>RedactedEwsAvailabilityProvider</code>. Otherwise, it is not required.</p>
     */
    inline void SetEwsProvider(RedactedEwsAvailabilityProvider&& value) { m_ewsProviderHasBeenSet = true; m_ewsProvider = std::move(value); }

    /**
     * <p>If <code>ProviderType</code> is <code>EWS</code>, then this field contains
     * <code>RedactedEwsAvailabilityProvider</code>. Otherwise, it is not required.</p>
     */
    inline AvailabilityConfiguration& WithEwsProvider(const RedactedEwsAvailabilityProvider& value) { SetEwsProvider(value); return *this;}

    /**
     * <p>If <code>ProviderType</code> is <code>EWS</code>, then this field contains
     * <code>RedactedEwsAvailabilityProvider</code>. Otherwise, it is not required.</p>
     */
    inline AvailabilityConfiguration& WithEwsProvider(RedactedEwsAvailabilityProvider&& value) { SetEwsProvider(std::move(value)); return *this;}


    /**
     * <p>If ProviderType is <code>LAMBDA</code> then this field contains
     * <code>LambdaAvailabilityProvider</code>. Otherwise, it is not required.</p>
     */
    inline const LambdaAvailabilityProvider& GetLambdaProvider() const{ return m_lambdaProvider; }

    /**
     * <p>If ProviderType is <code>LAMBDA</code> then this field contains
     * <code>LambdaAvailabilityProvider</code>. Otherwise, it is not required.</p>
     */
    inline bool LambdaProviderHasBeenSet() const { return m_lambdaProviderHasBeenSet; }

    /**
     * <p>If ProviderType is <code>LAMBDA</code> then this field contains
     * <code>LambdaAvailabilityProvider</code>. Otherwise, it is not required.</p>
     */
    inline void SetLambdaProvider(const LambdaAvailabilityProvider& value) { m_lambdaProviderHasBeenSet = true; m_lambdaProvider = value; }

    /**
     * <p>If ProviderType is <code>LAMBDA</code> then this field contains
     * <code>LambdaAvailabilityProvider</code>. Otherwise, it is not required.</p>
     */
    inline void SetLambdaProvider(LambdaAvailabilityProvider&& value) { m_lambdaProviderHasBeenSet = true; m_lambdaProvider = std::move(value); }

    /**
     * <p>If ProviderType is <code>LAMBDA</code> then this field contains
     * <code>LambdaAvailabilityProvider</code>. Otherwise, it is not required.</p>
     */
    inline AvailabilityConfiguration& WithLambdaProvider(const LambdaAvailabilityProvider& value) { SetLambdaProvider(value); return *this;}

    /**
     * <p>If ProviderType is <code>LAMBDA</code> then this field contains
     * <code>LambdaAvailabilityProvider</code>. Otherwise, it is not required.</p>
     */
    inline AvailabilityConfiguration& WithLambdaProvider(LambdaAvailabilityProvider&& value) { SetLambdaProvider(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the availability configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The date and time at which the availability configuration was created.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The date and time at which the availability configuration was created.</p>
     */
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The date and time at which the availability configuration was created.</p>
     */
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The date and time at which the availability configuration was created.</p>
     */
    inline AvailabilityConfiguration& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The date and time at which the availability configuration was created.</p>
     */
    inline AvailabilityConfiguration& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the availability configuration was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetDateModified() const{ return m_dateModified; }

    /**
     * <p>The date and time at which the availability configuration was last
     * modified.</p>
     */
    inline bool DateModifiedHasBeenSet() const { return m_dateModifiedHasBeenSet; }

    /**
     * <p>The date and time at which the availability configuration was last
     * modified.</p>
     */
    inline void SetDateModified(const Aws::Utils::DateTime& value) { m_dateModifiedHasBeenSet = true; m_dateModified = value; }

    /**
     * <p>The date and time at which the availability configuration was last
     * modified.</p>
     */
    inline void SetDateModified(Aws::Utils::DateTime&& value) { m_dateModifiedHasBeenSet = true; m_dateModified = std::move(value); }

    /**
     * <p>The date and time at which the availability configuration was last
     * modified.</p>
     */
    inline AvailabilityConfiguration& WithDateModified(const Aws::Utils::DateTime& value) { SetDateModified(value); return *this;}

    /**
     * <p>The date and time at which the availability configuration was last
     * modified.</p>
     */
    inline AvailabilityConfiguration& WithDateModified(Aws::Utils::DateTime&& value) { SetDateModified(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    AvailabilityProviderType m_providerType;
    bool m_providerTypeHasBeenSet = false;

    RedactedEwsAvailabilityProvider m_ewsProvider;
    bool m_ewsProviderHasBeenSet = false;

    LambdaAvailabilityProvider m_lambdaProvider;
    bool m_lambdaProviderHasBeenSet = false;

    Aws::Utils::DateTime m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateModified;
    bool m_dateModifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
