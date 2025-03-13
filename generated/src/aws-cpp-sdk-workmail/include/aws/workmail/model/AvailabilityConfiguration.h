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
    AWS_WORKMAIL_API AvailabilityConfiguration() = default;
    AWS_WORKMAIL_API AvailabilityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API AvailabilityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Displays the domain to which the provider applies.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    AvailabilityConfiguration& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the provider type that applies to this domain.</p>
     */
    inline AvailabilityProviderType GetProviderType() const { return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    inline void SetProviderType(AvailabilityProviderType value) { m_providerTypeHasBeenSet = true; m_providerType = value; }
    inline AvailabilityConfiguration& WithProviderType(AvailabilityProviderType value) { SetProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>ProviderType</code> is <code>EWS</code>, then this field contains
     * <code>RedactedEwsAvailabilityProvider</code>. Otherwise, it is not required.</p>
     */
    inline const RedactedEwsAvailabilityProvider& GetEwsProvider() const { return m_ewsProvider; }
    inline bool EwsProviderHasBeenSet() const { return m_ewsProviderHasBeenSet; }
    template<typename EwsProviderT = RedactedEwsAvailabilityProvider>
    void SetEwsProvider(EwsProviderT&& value) { m_ewsProviderHasBeenSet = true; m_ewsProvider = std::forward<EwsProviderT>(value); }
    template<typename EwsProviderT = RedactedEwsAvailabilityProvider>
    AvailabilityConfiguration& WithEwsProvider(EwsProviderT&& value) { SetEwsProvider(std::forward<EwsProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If ProviderType is <code>LAMBDA</code> then this field contains
     * <code>LambdaAvailabilityProvider</code>. Otherwise, it is not required.</p>
     */
    inline const LambdaAvailabilityProvider& GetLambdaProvider() const { return m_lambdaProvider; }
    inline bool LambdaProviderHasBeenSet() const { return m_lambdaProviderHasBeenSet; }
    template<typename LambdaProviderT = LambdaAvailabilityProvider>
    void SetLambdaProvider(LambdaProviderT&& value) { m_lambdaProviderHasBeenSet = true; m_lambdaProvider = std::forward<LambdaProviderT>(value); }
    template<typename LambdaProviderT = LambdaAvailabilityProvider>
    AvailabilityConfiguration& WithLambdaProvider(LambdaProviderT&& value) { SetLambdaProvider(std::forward<LambdaProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the availability configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const { return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    void SetDateCreated(DateCreatedT&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::forward<DateCreatedT>(value); }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    AvailabilityConfiguration& WithDateCreated(DateCreatedT&& value) { SetDateCreated(std::forward<DateCreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the availability configuration was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetDateModified() const { return m_dateModified; }
    inline bool DateModifiedHasBeenSet() const { return m_dateModifiedHasBeenSet; }
    template<typename DateModifiedT = Aws::Utils::DateTime>
    void SetDateModified(DateModifiedT&& value) { m_dateModifiedHasBeenSet = true; m_dateModified = std::forward<DateModifiedT>(value); }
    template<typename DateModifiedT = Aws::Utils::DateTime>
    AvailabilityConfiguration& WithDateModified(DateModifiedT&& value) { SetDateModified(std::forward<DateModifiedT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    AvailabilityProviderType m_providerType{AvailabilityProviderType::NOT_SET};
    bool m_providerTypeHasBeenSet = false;

    RedactedEwsAvailabilityProvider m_ewsProvider;
    bool m_ewsProviderHasBeenSet = false;

    LambdaAvailabilityProvider m_lambdaProvider;
    bool m_lambdaProviderHasBeenSet = false;

    Aws::Utils::DateTime m_dateCreated{};
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateModified{};
    bool m_dateModifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
