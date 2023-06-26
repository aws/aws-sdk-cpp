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
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateExtendedKeyUsage();
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateExtendedKeyUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateExtendedKeyUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an extension value. Indicates the purpose for which the
     * certificate public key can be used.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of an extension value. Indicates the purpose for which the
     * certificate public key can be used.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of an extension value. Indicates the purpose for which the
     * certificate public key can be used.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of an extension value. Indicates the purpose for which the
     * certificate public key can be used.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of an extension value. Indicates the purpose for which the
     * certificate public key can be used.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of an extension value. Indicates the purpose for which the
     * certificate public key can be used.</p>
     */
    inline AwsCertificateManagerCertificateExtendedKeyUsage& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of an extension value. Indicates the purpose for which the
     * certificate public key can be used.</p>
     */
    inline AwsCertificateManagerCertificateExtendedKeyUsage& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of an extension value. Indicates the purpose for which the
     * certificate public key can be used.</p>
     */
    inline AwsCertificateManagerCertificateExtendedKeyUsage& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An object identifier (OID) for the extension value.</p> <p>The format is
     * numbers separated by periods.</p>
     */
    inline const Aws::String& GetOId() const{ return m_oId; }

    /**
     * <p>An object identifier (OID) for the extension value.</p> <p>The format is
     * numbers separated by periods.</p>
     */
    inline bool OIdHasBeenSet() const { return m_oIdHasBeenSet; }

    /**
     * <p>An object identifier (OID) for the extension value.</p> <p>The format is
     * numbers separated by periods.</p>
     */
    inline void SetOId(const Aws::String& value) { m_oIdHasBeenSet = true; m_oId = value; }

    /**
     * <p>An object identifier (OID) for the extension value.</p> <p>The format is
     * numbers separated by periods.</p>
     */
    inline void SetOId(Aws::String&& value) { m_oIdHasBeenSet = true; m_oId = std::move(value); }

    /**
     * <p>An object identifier (OID) for the extension value.</p> <p>The format is
     * numbers separated by periods.</p>
     */
    inline void SetOId(const char* value) { m_oIdHasBeenSet = true; m_oId.assign(value); }

    /**
     * <p>An object identifier (OID) for the extension value.</p> <p>The format is
     * numbers separated by periods.</p>
     */
    inline AwsCertificateManagerCertificateExtendedKeyUsage& WithOId(const Aws::String& value) { SetOId(value); return *this;}

    /**
     * <p>An object identifier (OID) for the extension value.</p> <p>The format is
     * numbers separated by periods.</p>
     */
    inline AwsCertificateManagerCertificateExtendedKeyUsage& WithOId(Aws::String&& value) { SetOId(std::move(value)); return *this;}

    /**
     * <p>An object identifier (OID) for the extension value.</p> <p>The format is
     * numbers separated by periods.</p>
     */
    inline AwsCertificateManagerCertificateExtendedKeyUsage& WithOId(const char* value) { SetOId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_oId;
    bool m_oIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
