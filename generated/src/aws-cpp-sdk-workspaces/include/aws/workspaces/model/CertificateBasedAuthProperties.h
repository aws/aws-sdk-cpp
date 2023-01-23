/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/CertificateBasedAuthStatusEnum.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the properties of the certificate-based authentication you want to
   * use with your WorkSpaces.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CertificateBasedAuthProperties">AWS
   * API Reference</a></p>
   */
  class CertificateBasedAuthProperties
  {
  public:
    AWS_WORKSPACES_API CertificateBasedAuthProperties();
    AWS_WORKSPACES_API CertificateBasedAuthProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API CertificateBasedAuthProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the certificate-based authentication properties.</p>
     */
    inline const CertificateBasedAuthStatusEnum& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the certificate-based authentication properties.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the certificate-based authentication properties.</p>
     */
    inline void SetStatus(const CertificateBasedAuthStatusEnum& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the certificate-based authentication properties.</p>
     */
    inline void SetStatus(CertificateBasedAuthStatusEnum&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the certificate-based authentication properties.</p>
     */
    inline CertificateBasedAuthProperties& WithStatus(const CertificateBasedAuthStatusEnum& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the certificate-based authentication properties.</p>
     */
    inline CertificateBasedAuthProperties& WithStatus(CertificateBasedAuthStatusEnum&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Certificate Manager
     * Private CA resource.</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Certificate Manager
     * Private CA resource.</p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Certificate Manager
     * Private CA resource.</p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Certificate Manager
     * Private CA resource.</p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Certificate Manager
     * Private CA resource.</p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Certificate Manager
     * Private CA resource.</p>
     */
    inline CertificateBasedAuthProperties& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Certificate Manager
     * Private CA resource.</p>
     */
    inline CertificateBasedAuthProperties& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Certificate Manager
     * Private CA resource.</p>
     */
    inline CertificateBasedAuthProperties& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}

  private:

    CertificateBasedAuthStatusEnum m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
