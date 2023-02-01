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
   * <p>The domain to associate with an WorkMail organization.</p> <p>When you
   * configure a domain hosted in Amazon Route 53 (Route 53), all recommended DNS
   * records are added to the organization when you create it. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/workmail/latest/adminguide/add_domain.html">Adding
   * a domain</a> in the <i>WorkMail Administrator Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/Domain">AWS API
   * Reference</a></p>
   */
  class Domain
  {
  public:
    AWS_WORKMAIL_API Domain();
    AWS_WORKMAIL_API Domain(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Domain& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fully qualified domain name.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The fully qualified domain name.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The fully qualified domain name.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The fully qualified domain name.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The fully qualified domain name.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The fully qualified domain name.</p>
     */
    inline Domain& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The fully qualified domain name.</p>
     */
    inline Domain& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified domain name.</p>
     */
    inline Domain& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The hosted zone ID for a domain hosted in Route 53. Required when configuring
     * a domain hosted in Route 53.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }

    /**
     * <p>The hosted zone ID for a domain hosted in Route 53. Required when configuring
     * a domain hosted in Route 53.</p>
     */
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }

    /**
     * <p>The hosted zone ID for a domain hosted in Route 53. Required when configuring
     * a domain hosted in Route 53.</p>
     */
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }

    /**
     * <p>The hosted zone ID for a domain hosted in Route 53. Required when configuring
     * a domain hosted in Route 53.</p>
     */
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }

    /**
     * <p>The hosted zone ID for a domain hosted in Route 53. Required when configuring
     * a domain hosted in Route 53.</p>
     */
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }

    /**
     * <p>The hosted zone ID for a domain hosted in Route 53. Required when configuring
     * a domain hosted in Route 53.</p>
     */
    inline Domain& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}

    /**
     * <p>The hosted zone ID for a domain hosted in Route 53. Required when configuring
     * a domain hosted in Route 53.</p>
     */
    inline Domain& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}

    /**
     * <p>The hosted zone ID for a domain hosted in Route 53. Required when configuring
     * a domain hosted in Route 53.</p>
     */
    inline Domain& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
