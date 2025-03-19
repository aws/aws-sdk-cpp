/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
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
namespace TaxSettings
{
namespace Model
{

  /**
   * <p>The metadata for your tax document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/TaxDocumentMetadata">AWS
   * API Reference</a></p>
   */
  class TaxDocumentMetadata
  {
  public:
    AWS_TAXSETTINGS_API TaxDocumentMetadata() = default;
    AWS_TAXSETTINGS_API TaxDocumentMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API TaxDocumentMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tax document access token, which contains information that the Tax
     * Settings API uses to locate the tax document.</p>  <p>If you update your
     * tax registration, the existing <code>taxDocumentAccessToken</code> won't be
     * valid. To get the latest token, call the <code>GetTaxRegistration</code> or
     * <code>ListTaxRegistrations</code> API operation. This token is valid for 24
     * hours.</p> 
     */
    inline const Aws::String& GetTaxDocumentAccessToken() const { return m_taxDocumentAccessToken; }
    inline bool TaxDocumentAccessTokenHasBeenSet() const { return m_taxDocumentAccessTokenHasBeenSet; }
    template<typename TaxDocumentAccessTokenT = Aws::String>
    void SetTaxDocumentAccessToken(TaxDocumentAccessTokenT&& value) { m_taxDocumentAccessTokenHasBeenSet = true; m_taxDocumentAccessToken = std::forward<TaxDocumentAccessTokenT>(value); }
    template<typename TaxDocumentAccessTokenT = Aws::String>
    TaxDocumentMetadata& WithTaxDocumentAccessToken(TaxDocumentAccessTokenT&& value) { SetTaxDocumentAccessToken(std::forward<TaxDocumentAccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your tax document.</p>
     */
    inline const Aws::String& GetTaxDocumentName() const { return m_taxDocumentName; }
    inline bool TaxDocumentNameHasBeenSet() const { return m_taxDocumentNameHasBeenSet; }
    template<typename TaxDocumentNameT = Aws::String>
    void SetTaxDocumentName(TaxDocumentNameT&& value) { m_taxDocumentNameHasBeenSet = true; m_taxDocumentName = std::forward<TaxDocumentNameT>(value); }
    template<typename TaxDocumentNameT = Aws::String>
    TaxDocumentMetadata& WithTaxDocumentName(TaxDocumentNameT&& value) { SetTaxDocumentName(std::forward<TaxDocumentNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taxDocumentAccessToken;
    bool m_taxDocumentAccessTokenHasBeenSet = false;

    Aws::String m_taxDocumentName;
    bool m_taxDocumentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
