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
   * <p>Contains information about an extended key usage X.509 v3 extension
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCertificateManagerCertificateExtendedKeyUsage">AWS
   * API Reference</a></p>
   */
  class AwsCertificateManagerCertificateExtendedKeyUsage
  {
  public:
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateExtendedKeyUsage() = default;
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateExtendedKeyUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateExtendedKeyUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of an extension value. Indicates the purpose for which the
     * certificate public key can be used.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsCertificateManagerCertificateExtendedKeyUsage& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object identifier (OID) for the extension value.</p> <p>The format is
     * numbers separated by periods.</p>
     */
    inline const Aws::String& GetOId() const { return m_oId; }
    inline bool OIdHasBeenSet() const { return m_oIdHasBeenSet; }
    template<typename OIdT = Aws::String>
    void SetOId(OIdT&& value) { m_oIdHasBeenSet = true; m_oId = std::forward<OIdT>(value); }
    template<typename OIdT = Aws::String>
    AwsCertificateManagerCertificateExtendedKeyUsage& WithOId(OIdT&& value) { SetOId(std::forward<OIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_oId;
    bool m_oIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
