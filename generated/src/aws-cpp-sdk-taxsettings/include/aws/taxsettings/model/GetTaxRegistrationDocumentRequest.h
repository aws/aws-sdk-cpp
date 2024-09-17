/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/TaxSettingsRequest.h>
#include <aws/taxsettings/model/DestinationS3Location.h>
#include <aws/taxsettings/model/TaxDocumentMetadata.h>
#include <utility>

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

  /**
   */
  class GetTaxRegistrationDocumentRequest : public TaxSettingsRequest
  {
  public:
    AWS_TAXSETTINGS_API GetTaxRegistrationDocumentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTaxRegistrationDocument"; }

    AWS_TAXSETTINGS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon S3 bucket that you specify to download your tax documents to.</p>
     */
    inline const DestinationS3Location& GetDestinationS3Location() const{ return m_destinationS3Location; }
    inline bool DestinationS3LocationHasBeenSet() const { return m_destinationS3LocationHasBeenSet; }
    inline void SetDestinationS3Location(const DestinationS3Location& value) { m_destinationS3LocationHasBeenSet = true; m_destinationS3Location = value; }
    inline void SetDestinationS3Location(DestinationS3Location&& value) { m_destinationS3LocationHasBeenSet = true; m_destinationS3Location = std::move(value); }
    inline GetTaxRegistrationDocumentRequest& WithDestinationS3Location(const DestinationS3Location& value) { SetDestinationS3Location(value); return *this;}
    inline GetTaxRegistrationDocumentRequest& WithDestinationS3Location(DestinationS3Location&& value) { SetDestinationS3Location(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata for your tax document.</p>
     */
    inline const TaxDocumentMetadata& GetTaxDocumentMetadata() const{ return m_taxDocumentMetadata; }
    inline bool TaxDocumentMetadataHasBeenSet() const { return m_taxDocumentMetadataHasBeenSet; }
    inline void SetTaxDocumentMetadata(const TaxDocumentMetadata& value) { m_taxDocumentMetadataHasBeenSet = true; m_taxDocumentMetadata = value; }
    inline void SetTaxDocumentMetadata(TaxDocumentMetadata&& value) { m_taxDocumentMetadataHasBeenSet = true; m_taxDocumentMetadata = std::move(value); }
    inline GetTaxRegistrationDocumentRequest& WithTaxDocumentMetadata(const TaxDocumentMetadata& value) { SetTaxDocumentMetadata(value); return *this;}
    inline GetTaxRegistrationDocumentRequest& WithTaxDocumentMetadata(TaxDocumentMetadata&& value) { SetTaxDocumentMetadata(std::move(value)); return *this;}
    ///@}
  private:

    DestinationS3Location m_destinationS3Location;
    bool m_destinationS3LocationHasBeenSet = false;

    TaxDocumentMetadata m_taxDocumentMetadata;
    bool m_taxDocumentMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
