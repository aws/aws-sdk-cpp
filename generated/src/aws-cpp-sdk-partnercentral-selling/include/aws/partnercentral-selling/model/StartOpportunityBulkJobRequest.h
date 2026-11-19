/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/BulkFileFormat.h>

#include <utility>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Specifies the input file location, file format, and client token for starting
 * an opportunity bulk job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/StartOpportunityBulkJobRequest">AWS
 * API Reference</a></p>
 */
class StartOpportunityBulkJobRequest : public PartnerCentralSellingRequest {
 public:
  AWS_PARTNERCENTRALSELLING_API StartOpportunityBulkJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartOpportunityBulkJob"; }

  AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the catalog for the request. Valid values:</p> <ul> <li> <p>
   * <code>AWS</code>: Production.</p> </li> <li> <p> <code>Sandbox</code>: Testing
   * environments.</p> </li> </ul>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  StartOpportunityBulkJobRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the operation
   * completes no more than one time. If this token matches a previous request with
   * the same parameters, the operation returns the <code>JobId</code> of the
   * original job. If you reuse the token with different parameters, the request
   * fails with a <code>ConflictException</code>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartOpportunityBulkJobRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the location of the CSV file that contains the opportunities to
   * create or update. Use one of the following:</p> <ul> <li> <p>An
   * <code>s3://</code> URI of a file that you uploaded to Partner Central for your
   * account. You can add only the <code>versionId</code> query parameter.</p> </li>
   * <li> <p>An <code>https://</code> presigned Amazon S3 URL</p> </li> </ul> <p>The
   * file must be a plain-text CSV file no larger than 100 MB.</p>
   */
  inline const Aws::String& GetFileURI() const { return m_fileURI; }
  inline bool FileURIHasBeenSet() const { return m_fileURIHasBeenSet; }
  template <typename FileURIT = Aws::String>
  void SetFileURI(FileURIT&& value) {
    m_fileURIHasBeenSet = true;
    m_fileURI = std::forward<FileURIT>(value);
  }
  template <typename FileURIT = Aws::String>
  StartOpportunityBulkJobRequest& WithFileURI(FileURIT&& value) {
    SetFileURI(std::forward<FileURIT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the format of the input file. The only supported value is
   * <code>CSV</code>.</p>
   */
  inline BulkFileFormat GetFileFormat() const { return m_fileFormat; }
  inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }
  inline void SetFileFormat(BulkFileFormat value) {
    m_fileFormatHasBeenSet = true;
    m_fileFormat = value;
  }
  inline StartOpportunityBulkJobRequest& WithFileFormat(BulkFileFormat value) {
    SetFileFormat(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_fileURI;

  BulkFileFormat m_fileFormat{BulkFileFormat::NOT_SET};
  bool m_catalogHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_fileURIHasBeenSet = false;
  bool m_fileFormatHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
