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
    AWS_AGREEMENTSERVICE_API DocumentItem() = default;
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
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    DocumentItem& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL to the legal document for buyers to read. Required when
     * <code>Type</code> is <code>CustomEula</code>.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    DocumentItem& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of standard contracts provided by AWS Marketplace. Required when Type
     * is <code>StandardEula</code> or <code>StandardDsa</code>. </p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    DocumentItem& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
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
