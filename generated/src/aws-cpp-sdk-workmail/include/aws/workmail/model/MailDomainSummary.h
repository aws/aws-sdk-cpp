/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>The data for a given domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/MailDomainSummary">AWS
   * API Reference</a></p>
   */
  class MailDomainSummary
  {
  public:
    AWS_WORKMAIL_API MailDomainSummary() = default;
    AWS_WORKMAIL_API MailDomainSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API MailDomainSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain name.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    MailDomainSummary& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the domain is default or not.</p>
     */
    inline bool GetDefaultDomain() const { return m_defaultDomain; }
    inline bool DefaultDomainHasBeenSet() const { return m_defaultDomainHasBeenSet; }
    inline void SetDefaultDomain(bool value) { m_defaultDomainHasBeenSet = true; m_defaultDomain = value; }
    inline MailDomainSummary& WithDefaultDomain(bool value) { SetDefaultDomain(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    bool m_defaultDomain{false};
    bool m_defaultDomainHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
