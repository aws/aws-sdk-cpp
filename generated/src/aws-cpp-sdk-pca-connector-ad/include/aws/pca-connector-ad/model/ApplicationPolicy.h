/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pca-connector-ad/model/ApplicationPolicyType.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/ApplicationPolicy">AWS
   * API Reference</a></p>
   */
  class ApplicationPolicy
  {
  public:
    AWS_PCACONNECTORAD_API ApplicationPolicy();
    AWS_PCACONNECTORAD_API ApplicationPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API ApplicationPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The object identifier (OID) of an application policy.</p>
     */
    inline const Aws::String& GetPolicyObjectIdentifier() const{ return m_policyObjectIdentifier; }

    /**
     * <p>The object identifier (OID) of an application policy.</p>
     */
    inline bool PolicyObjectIdentifierHasBeenSet() const { return m_policyObjectIdentifierHasBeenSet; }

    /**
     * <p>The object identifier (OID) of an application policy.</p>
     */
    inline void SetPolicyObjectIdentifier(const Aws::String& value) { m_policyObjectIdentifierHasBeenSet = true; m_policyObjectIdentifier = value; }

    /**
     * <p>The object identifier (OID) of an application policy.</p>
     */
    inline void SetPolicyObjectIdentifier(Aws::String&& value) { m_policyObjectIdentifierHasBeenSet = true; m_policyObjectIdentifier = std::move(value); }

    /**
     * <p>The object identifier (OID) of an application policy.</p>
     */
    inline void SetPolicyObjectIdentifier(const char* value) { m_policyObjectIdentifierHasBeenSet = true; m_policyObjectIdentifier.assign(value); }

    /**
     * <p>The object identifier (OID) of an application policy.</p>
     */
    inline ApplicationPolicy& WithPolicyObjectIdentifier(const Aws::String& value) { SetPolicyObjectIdentifier(value); return *this;}

    /**
     * <p>The object identifier (OID) of an application policy.</p>
     */
    inline ApplicationPolicy& WithPolicyObjectIdentifier(Aws::String&& value) { SetPolicyObjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The object identifier (OID) of an application policy.</p>
     */
    inline ApplicationPolicy& WithPolicyObjectIdentifier(const char* value) { SetPolicyObjectIdentifier(value); return *this;}


    /**
     * <p>The type of application policy</p>
     */
    inline const ApplicationPolicyType& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The type of application policy</p>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p>The type of application policy</p>
     */
    inline void SetPolicyType(const ApplicationPolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The type of application policy</p>
     */
    inline void SetPolicyType(ApplicationPolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>The type of application policy</p>
     */
    inline ApplicationPolicy& WithPolicyType(const ApplicationPolicyType& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The type of application policy</p>
     */
    inline ApplicationPolicy& WithPolicyType(ApplicationPolicyType&& value) { SetPolicyType(std::move(value)); return *this;}

  private:

    Aws::String m_policyObjectIdentifier;
    bool m_policyObjectIdentifierHasBeenSet = false;

    ApplicationPolicyType m_policyType;
    bool m_policyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
