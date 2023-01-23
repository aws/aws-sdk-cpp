/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provided if <code>CallerType</code> is <code>domain</code>. It provides
   * information about the DNS domain that issued the API call.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsApiCallActionDomainDetails">AWS
   * API Reference</a></p>
   */
  class AwsApiCallActionDomainDetails
  {
  public:
    AWS_SECURITYHUB_API AwsApiCallActionDomainDetails();
    AWS_SECURITYHUB_API AwsApiCallActionDomainDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiCallActionDomainDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the DNS domain that issued the API call.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the DNS domain that issued the API call.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The name of the DNS domain that issued the API call.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the DNS domain that issued the API call.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The name of the DNS domain that issued the API call.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the DNS domain that issued the API call.</p>
     */
    inline AwsApiCallActionDomainDetails& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the DNS domain that issued the API call.</p>
     */
    inline AwsApiCallActionDomainDetails& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The name of the DNS domain that issued the API call.</p>
     */
    inline AwsApiCallActionDomainDetails& WithDomain(const char* value) { SetDomain(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
