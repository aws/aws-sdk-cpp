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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace TaxSettings
{
namespace Model
{
  class GetTaxRegistrationDocumentResult
  {
  public:
    AWS_TAXSETTINGS_API GetTaxRegistrationDocumentResult() = default;
    AWS_TAXSETTINGS_API GetTaxRegistrationDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TAXSETTINGS_API GetTaxRegistrationDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The file path of the Amazon S3 bucket where you want to download your tax
     * document to.</p>
     */
    inline const Aws::String& GetDestinationFilePath() const { return m_destinationFilePath; }
    template<typename DestinationFilePathT = Aws::String>
    void SetDestinationFilePath(DestinationFilePathT&& value) { m_destinationFilePathHasBeenSet = true; m_destinationFilePath = std::forward<DestinationFilePathT>(value); }
    template<typename DestinationFilePathT = Aws::String>
    GetTaxRegistrationDocumentResult& WithDestinationFilePath(DestinationFilePathT&& value) { SetDestinationFilePath(std::forward<DestinationFilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 presigned URL of the tax registration document. </p>
     */
    inline const Aws::String& GetPresignedS3Url() const { return m_presignedS3Url; }
    template<typename PresignedS3UrlT = Aws::String>
    void SetPresignedS3Url(PresignedS3UrlT&& value) { m_presignedS3UrlHasBeenSet = true; m_presignedS3Url = std::forward<PresignedS3UrlT>(value); }
    template<typename PresignedS3UrlT = Aws::String>
    GetTaxRegistrationDocumentResult& WithPresignedS3Url(PresignedS3UrlT&& value) { SetPresignedS3Url(std::forward<PresignedS3UrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTaxRegistrationDocumentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationFilePath;
    bool m_destinationFilePathHasBeenSet = false;

    Aws::String m_presignedS3Url;
    bool m_presignedS3UrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
