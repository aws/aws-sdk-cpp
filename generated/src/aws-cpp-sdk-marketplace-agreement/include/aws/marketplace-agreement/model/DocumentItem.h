/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
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
namespace AgreementService
{
namespace Model
{

  /**
   * <p>Includes the list of references to legal resources proposed by the proposer
   * to the acceptor. Each <code>DocumentItem</code> refers to an individual
   * reference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/DocumentItem">AWS
   * API Reference</a></p>
   */
  class DocumentItem
  {
  public:
    AWS_AGREEMENTSERVICE_API DocumentItem();
    AWS_AGREEMENTSERVICE_API DocumentItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API DocumentItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Category of the document. Document types include:</p> <ul> <li> <p>
     * <code>CustomEula</code> – A custom EULA provided by you as seller. A URL for a
     * EULA stored in an accessible Amazon S3 bucket is required for this document
     * type.</p> </li> <li> <p> <code>CustomDsa</code> – A custom Data Subscription
     * Agreement (DSA) provided by you as seller. A URL for a DSA stored in an
     * accessible Amazon S3 bucket is required for this document type.</p> </li> <li>
     * <p> <code>StandardEula</code> – The Standard Contract for AWS Marketplace
     * (SCMP). For more information about SCMP, see the AWS Marketplace Seller Guide.
     * You don’t provide a URL for this type because it’s managed by AWS
     * Marketplace.</p> </li> <li> <p> <code>StandardDsa</code> – DSA for AWS
     * Marketplace. For more information about the DSA, see the AWS Data Exchange User
     * Guide. You don’t provide a URL for this type because it’s managed by AWS
     * Marketplace.</p> </li> </ul>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline DocumentItem& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline DocumentItem& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline DocumentItem& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL to the legal document for buyers to read. Required when
     * <code>Type</code> is <code>CustomEula</code>.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline DocumentItem& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline DocumentItem& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline DocumentItem& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of standard contracts provided by AWS Marketplace. Required when Type
     * is <code>StandardEula</code> or <code>StandardDsa</code>. </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline DocumentItem& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline DocumentItem& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline DocumentItem& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
